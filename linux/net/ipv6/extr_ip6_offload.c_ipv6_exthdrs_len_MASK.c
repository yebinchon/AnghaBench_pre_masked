
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_offload {int flags; } ;
struct ipv6hdr {int nexthdr; } ;
struct ipv6_opt_hdr {int nexthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct ipv6_opt_hdr*) ;
 struct net_offload* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ipv6hdr *VAR_3,
       const struct net_offload **VAR_4)
{
 struct ipv6_opt_hdr *VAR_5 = (void *)VAR_3;
 int VAR_6 = 0, VAR_7, VAR_8 = sizeof(*VAR_3);

 VAR_7 = VAR_3->nexthdr;
 for (;;) {
  if (VAR_7 != VAR_1) {
   *VAR_4 = FUNC_1(VAR_2[VAR_7]);
   if (FUNC_2(!(*VAR_4)))
    break;
   if (!((*VAR_4)->flags & VAR_0))
    break;
  }
  VAR_5 = (void *)VAR_5 + VAR_8;
  VAR_8 = FUNC_0(VAR_5);
  VAR_6 += VAR_8;
  VAR_7 = VAR_5->nexthdr;
 }
 return VAR_6;
}
