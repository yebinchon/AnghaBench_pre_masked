
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct TYPE_2__ {int xfrm_state_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 struct xfrm_state* FUNC_0 (struct net*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct xfrm_state *FUNC_3(struct net *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct xfrm_state *VAR_3;

 FUNC_1(&VAR_0->xfrm.xfrm_state_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->xfrm.xfrm_state_lock);
 return VAR_3;
}
