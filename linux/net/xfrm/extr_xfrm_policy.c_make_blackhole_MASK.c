
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xfrm_policy_afinfo {struct dst_entry* (* blackhole_route ) (struct net*,struct dst_entry*) ;} ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 () ;
 struct dst_entry* FUNC_3 (struct net*,struct dst_entry*) ;
 struct xfrm_policy_afinfo* FUNC_4 (int ) ;

__attribute__((used)) static struct dst_entry *FUNC_5(struct net *VAR_1, u16 VAR_2,
     struct dst_entry *VAR_3)
{
 const struct xfrm_policy_afinfo *VAR_4 = FUNC_4(VAR_2);
 struct dst_entry *VAR_5;

 if (!VAR_4) {
  FUNC_1(VAR_3);
  return FUNC_0(-VAR_0);
 } else {
  VAR_5 = VAR_4->blackhole_route(VAR_1, VAR_3);
 }
 FUNC_2();

 return VAR_5;
}
