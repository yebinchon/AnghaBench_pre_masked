
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6hdr {int nexthdr; } ;
struct ipv6_rt_hdr {int dummy; } ;
struct ipv6_opt_hdr {int nexthdr; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct ipv6_opt_hdr*) ;
 int FUNC_1 (struct ipv6hdr*,struct ipv6_opt_hdr*) ;
 int FUNC_2 (struct ipv6hdr*,struct ipv6_rt_hdr*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct ipv6_opt_hdr*) ;

__attribute__((used)) static int FUNC_5(struct ipv6hdr *VAR_2, int VAR_3, int VAR_4)
{
 union {
  struct ipv6hdr *iph;
  struct ipv6_opt_hdr *opth;
  struct ipv6_rt_hdr *rth;
  char *raw;
 } VAR_5 = { .iph = VAR_2 };
 char *VAR_6 = VAR_5.raw + VAR_3;
 int VAR_7 = VAR_2->nexthdr;

 VAR_5.iph++;

 while (VAR_5.raw < VAR_6) {
  switch (VAR_7) {
  case 130:
   if (VAR_4 == VAR_1)
    FUNC_1(VAR_2, VAR_5.opth);

  case 129:
   if (!FUNC_4(VAR_5.opth)) {
    FUNC_3("overrun %sopts\n",
          VAR_7 == 129 ?
          "hop" : "dest");
    return -VAR_0;
   }
   break;

  case 128:
   FUNC_2(VAR_2, VAR_5.rth);
   break;

  default:
   return 0;
  }

  VAR_7 = VAR_5.opth->nexthdr;
  VAR_5.raw += FUNC_0(VAR_5.opth);
 }

 return 0;
}
