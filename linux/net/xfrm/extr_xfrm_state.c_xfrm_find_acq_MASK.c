
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u8 ;
typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct xfrm_mark {int dummy; } ;
struct TYPE_2__ {int xfrm_state_lock; } ;
struct net {TYPE_1__ xfrm; } ;


 struct xfrm_state* FUNC_0 (struct net*,struct xfrm_mark const*,unsigned short,int ,int ,int ,int ,int const*,int const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct xfrm_state *
FUNC_3(struct net *VAR_0, const struct xfrm_mark *VAR_1, u8 VAR_2, u32 VAR_3,
       u32 VAR_4, u8 VAR_5, const xfrm_address_t *VAR_6,
       const xfrm_address_t *VAR_7, int VAR_8, unsigned short VAR_9)
{
 struct xfrm_state *VAR_10;

 FUNC_1(&VAR_0->xfrm.xfrm_state_lock);
 VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_9, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_2(&VAR_0->xfrm.xfrm_state_lock);

 return VAR_10;
}
