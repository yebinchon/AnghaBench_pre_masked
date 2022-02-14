
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct xfrm_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_opt_hdr {int nexthdr; } ;
struct TYPE_2__ {int nexthdr; } ;


 int VAR_0 ;



 int FUNC_0 (struct sk_buff*,int,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct ipv6_opt_hdr*) ;
 int FUNC_3 (char*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_1, struct sk_buff *VAR_2,
          u8 **VAR_3)
{
 u16 VAR_4 = sizeof(struct ipv6hdr);
 struct ipv6_opt_hdr *VAR_5 =
       (struct ipv6_opt_hdr *)(FUNC_1(VAR_2) + 1);
 const unsigned char *VAR_6 = FUNC_4(VAR_2);
 unsigned int VAR_7 = FUNC_5(VAR_2) -
  FUNC_4(VAR_2);
 int VAR_8 = 0;

 *VAR_3 = &FUNC_1(VAR_2)->nexthdr;

 while (VAR_4 + 1 <= VAR_7) {

  switch (**VAR_3) {
  case 129:
   break;
  case 128:
   VAR_8 = 1;
   break;
  case 130:





   if (FUNC_0(VAR_2, VAR_4, VAR_0) >= 0) {
    FUNC_3("mip6: hao exists already, override\n");
    return VAR_4;
   }

   if (VAR_8)
    return VAR_4;

   break;
  default:
   return VAR_4;
  }

  VAR_4 += FUNC_2(VAR_5);
  *VAR_3 = &VAR_5->nexthdr;
  VAR_5 = (struct ipv6_opt_hdr *)(VAR_6 + VAR_4);
 }

 return VAR_4;
}
