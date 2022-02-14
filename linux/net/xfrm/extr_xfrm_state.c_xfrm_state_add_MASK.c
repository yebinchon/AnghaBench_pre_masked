
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
struct TYPE_8__ {int family; int saddr; int reqid; int mode; } ;
struct TYPE_7__ {scalar_t__ proto; int daddr; } ;
struct TYPE_10__ {int v; int m; } ;
struct TYPE_6__ {scalar_t__ seq; } ;
struct xfrm_state {TYPE_3__ props; TYPE_2__ id; int if_id; TYPE_5__ mark; TYPE_1__ km; } ;
struct TYPE_9__ {int xfrm_state_lock; } ;
struct net {TYPE_4__ xfrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfrm_state* FUNC_0 (struct net*,TYPE_5__*,int,int ,int ,int ,scalar_t__,int *,int *,int ) ;
 struct xfrm_state* FUNC_1 (struct net*,int,scalar_t__) ;
 int FUNC_2 (struct xfrm_state*) ;
 int FUNC_3 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_4 (struct xfrm_state*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (struct xfrm_state*) ;
 int FUNC_10 (struct xfrm_state*) ;
 struct net* FUNC_11 (struct xfrm_state*) ;

int FUNC_12(struct xfrm_state *VAR_2)
{
 struct net *VAR_3 = FUNC_11(VAR_2);
 struct xfrm_state *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7;
 u32 VAR_8 = VAR_2->mark.v & VAR_2->mark.m;
 int VAR_9 = FUNC_8(VAR_2->id.proto, VAR_1);

 VAR_6 = VAR_2->props.family;

 VAR_5 = ((void*)0);

 FUNC_5(&VAR_3->xfrm.xfrm_state_lock);

 VAR_4 = FUNC_4(VAR_2, VAR_9, VAR_6);
 if (VAR_4) {
  VAR_5 = VAR_4;
  VAR_4 = ((void*)0);
  VAR_7 = -VAR_0;
  goto out;
 }

 if (VAR_9 && VAR_2->km.seq) {
  VAR_4 = FUNC_1(VAR_3, VAR_8, VAR_2->km.seq);
  if (VAR_4 && ((VAR_4->id.proto != VAR_2->id.proto) ||
      !FUNC_7(&VAR_4->id.daddr, &VAR_2->id.daddr, VAR_6))) {
   VAR_5 = VAR_4;
   VAR_4 = ((void*)0);
  }
 }

 if (VAR_9 && !VAR_4)
  VAR_4 = FUNC_0(VAR_3, &VAR_2->mark, VAR_6, VAR_2->props.mode,
         VAR_2->props.reqid, VAR_2->if_id, VAR_2->id.proto,
         &VAR_2->id.daddr, &VAR_2->props.saddr, 0);

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 VAR_7 = 0;

out:
 FUNC_6(&VAR_3->xfrm.xfrm_state_lock);

 if (VAR_4) {
  FUNC_9(VAR_4);
  FUNC_10(VAR_4);
 }

 if (VAR_5)
  FUNC_10(VAR_5);

 return VAR_7;
}
