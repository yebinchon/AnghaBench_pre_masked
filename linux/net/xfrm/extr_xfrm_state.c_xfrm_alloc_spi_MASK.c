
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int family; } ;
struct TYPE_8__ {int proto; scalar_t__ spi; int daddr; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {int v; int m; } ;
struct xfrm_state {int lock; int byspi; TYPE_4__ props; TYPE_3__ id; TYPE_2__ km; TYPE_1__ mark; } ;
struct TYPE_10__ {int xfrm_state_lock; scalar_t__ state_byspi; } ;
struct net {TYPE_5__ xfrm; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (struct net*,int *,scalar_t__,int ,int ) ;
 struct xfrm_state* FUNC_6 (struct net*,int,int *,scalar_t__,int ,int ) ;
 int FUNC_7 (struct xfrm_state*) ;
 struct net* FUNC_8 (struct xfrm_state*) ;

int FUNC_9(struct xfrm_state *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct net *VAR_5 = FUNC_8(VAR_2);
 unsigned int VAR_6;
 struct xfrm_state *VAR_7;
 int VAR_8 = -VAR_0;
 __be32 VAR_9 = FUNC_1(VAR_3);
 __be32 VAR_10 = FUNC_1(VAR_4);
 u32 VAR_11 = VAR_2->mark.v & VAR_2->mark.m;

 FUNC_3(&VAR_2->lock);
 if (VAR_2->km.state == VAR_1)
  goto unlock;

 VAR_8 = 0;
 if (VAR_2->id.spi)
  goto unlock;

 VAR_8 = -VAR_0;

 if (VAR_9 == VAR_10) {
  VAR_7 = FUNC_6(VAR_5, VAR_11, &VAR_2->id.daddr, VAR_9, VAR_2->id.proto, VAR_2->props.family);
  if (VAR_7) {
   FUNC_7(VAR_7);
   goto unlock;
  }
  VAR_2->id.spi = VAR_9;
 } else {
  u32 VAR_12 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_4-VAR_3+1; VAR_6++) {
   VAR_12 = VAR_3 + FUNC_2()%(VAR_4-VAR_3+1);
   VAR_7 = FUNC_6(VAR_5, VAR_11, &VAR_2->id.daddr, FUNC_1(VAR_12), VAR_2->id.proto, VAR_2->props.family);
   if (VAR_7 == ((void*)0)) {
    VAR_2->id.spi = FUNC_1(VAR_12);
    break;
   }
   FUNC_7(VAR_7);
  }
 }
 if (VAR_2->id.spi) {
  FUNC_3(&VAR_5->xfrm.xfrm_state_lock);
  VAR_6 = FUNC_5(VAR_5, &VAR_2->id.daddr, VAR_2->id.spi, VAR_2->id.proto, VAR_2->props.family);
  FUNC_0(&VAR_2->byspi, VAR_5->xfrm.state_byspi + VAR_6);
  FUNC_4(&VAR_5->xfrm.xfrm_state_lock);

  VAR_8 = 0;
 }

unlock:
 FUNC_4(&VAR_2->lock);

 return VAR_8;
}
