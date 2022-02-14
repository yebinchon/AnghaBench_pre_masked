
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xfrm_pol_inexact_bin {int dummy; } ;
struct TYPE_2__ {int xfrm_policy_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct xfrm_pol_inexact_bin* FUNC_3 (struct net*,int ,int ,int ,int ) ;

__attribute__((used)) static struct xfrm_pol_inexact_bin *
FUNC_4(struct net *VAR_0, u8 VAR_1, u16 VAR_2,
      u8 VAR_3, u32 VAR_4)
{
 struct xfrm_pol_inexact_bin *VAR_5;

 FUNC_0(&VAR_0->xfrm.xfrm_policy_lock);

 FUNC_1();
 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2();

 return VAR_5;
}
