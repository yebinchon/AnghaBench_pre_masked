
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __ip6_tnl_parm {scalar_t__ link; } ;
struct ip6_tnl {struct __ip6_tnl_parm parms; } ;
struct in6_addr {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct in6_addr const*) ;

__u32 FUNC_1(struct ip6_tnl *VAR_8,
        const struct in6_addr *VAR_9,
        const struct in6_addr *VAR_10)
{
 struct __ip6_tnl_parm *VAR_11 = &VAR_8->parms;
 int VAR_12 = FUNC_0(VAR_9);
 int VAR_13 = FUNC_0(VAR_10);
 __u32 VAR_14 = 0;

 if (VAR_12 == VAR_3 || VAR_13 == VAR_3) {
  VAR_14 = VAR_0;
 } else if (VAR_12 & (VAR_7|VAR_6) &&
     VAR_13 & (VAR_7|VAR_6) &&
     !((VAR_12|VAR_13) & VAR_5) &&
     (!((VAR_12|VAR_13) & VAR_4) || VAR_11->link)) {
  if (VAR_12&VAR_7)
   VAR_14 |= VAR_2;
  if (VAR_13&VAR_7)
   VAR_14 |= VAR_1;
 }
 return VAR_14;
}
