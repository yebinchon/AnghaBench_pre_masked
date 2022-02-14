
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xfrm_pol_inexact_key {int net; int if_id; int dir; int type; int family; } ;
struct xfrm_pol_inexact_bin {int dummy; } ;
struct net {int dummy; } ;


 struct xfrm_pol_inexact_bin* FUNC_0 (int *,struct xfrm_pol_inexact_key*,int ) ;
 int FUNC_1 (int *,struct net*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct xfrm_pol_inexact_bin *
FUNC_2(struct net *VAR_2, u8 VAR_3, u16 VAR_4,
          u8 VAR_5, u32 VAR_6)
{
 struct xfrm_pol_inexact_key VAR_7 = {
  .family = VAR_4,
  .type = VAR_3,
  .dir = VAR_5,
  .if_id = VAR_6,
 };

 FUNC_1(&VAR_7.net, VAR_2);

 return FUNC_0(&VAR_1, &VAR_7,
     VAR_0);
}
