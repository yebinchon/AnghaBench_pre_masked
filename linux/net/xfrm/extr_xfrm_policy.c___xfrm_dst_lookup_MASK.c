
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm_policy_afinfo {struct dst_entry* (* dst_lookup ) (struct net*,int,int,int const*,int const*,int ) ;} ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct dst_entry* FUNC_2 (struct net*,int,int,int const*,int const*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct xfrm_policy_afinfo* FUNC_4 (int) ;

struct dst_entry *FUNC_5(struct net *VAR_1, int VAR_2, int VAR_3,
        const xfrm_address_t *VAR_4,
        const xfrm_address_t *VAR_5,
        int VAR_6, u32 VAR_7)
{
 const struct xfrm_policy_afinfo *VAR_8;
 struct dst_entry *VAR_9;

 VAR_8 = FUNC_4(VAR_6);
 if (FUNC_3(VAR_8 == ((void*)0)))
  return FUNC_0(-VAR_0);

 VAR_9 = VAR_8->dst_lookup(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);

 FUNC_1();

 return VAR_9;
}
