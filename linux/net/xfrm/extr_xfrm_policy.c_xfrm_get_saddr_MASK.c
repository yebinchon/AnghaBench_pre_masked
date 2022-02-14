
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm_policy_afinfo {int (* get_saddr ) (struct net*,int,int *,int *,int ) ;} ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct net*,int,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct xfrm_policy_afinfo* FUNC_3 (unsigned short) ;

__attribute__((used)) static int
FUNC_4(struct net *VAR_1, int VAR_2, xfrm_address_t *VAR_3,
        xfrm_address_t *VAR_4, unsigned short VAR_5, u32 VAR_6)
{
 int VAR_7;
 const struct xfrm_policy_afinfo *VAR_8 = FUNC_3(VAR_5);

 if (FUNC_2(VAR_8 == ((void*)0)))
  return -VAR_0;
 VAR_7 = VAR_8->get_saddr(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 FUNC_0();
 return VAR_7;
}
