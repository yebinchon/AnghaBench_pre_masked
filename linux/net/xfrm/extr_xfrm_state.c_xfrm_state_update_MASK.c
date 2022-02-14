
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ state; scalar_t__ dying; } ;
struct TYPE_13__ {scalar_t__ v; scalar_t__ m; } ;
struct TYPE_14__ {TYPE_3__ smark; int family; } ;
struct TYPE_12__ {scalar_t__ use_time; } ;
struct TYPE_17__ {scalar_t__ encap_type; } ;
struct TYPE_11__ {int proto; } ;
struct xfrm_state {int lock; TYPE_6__ km; scalar_t__ if_id; TYPE_4__ props; TYPE_2__ curlft; int mtimer; TYPE_7__ lft; TYPE_7__ sel; TYPE_7__* coaddr; TYPE_7__* encap; TYPE_1__ id; } ;
struct TYPE_15__ {int xfrm_state_lock; } ;
struct net {TYPE_5__ xfrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_2 (struct xfrm_state*,int,int ) ;
 int FUNC_3 (struct xfrm_state*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_7__*,TYPE_7__*,int) ;
 int FUNC_8 (TYPE_7__*,TYPE_7__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct xfrm_state*) ;
 int FUNC_13 (struct xfrm_state*) ;
 scalar_t__ FUNC_14 (struct xfrm_state*) ;
 int FUNC_15 (struct xfrm_state*) ;
 struct net* FUNC_16 (struct xfrm_state*) ;

int FUNC_17(struct xfrm_state *VAR_8)
{
 struct xfrm_state *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12 = FUNC_11(VAR_8->id.proto, VAR_4);
 struct net *VAR_13 = FUNC_16(VAR_8);

 VAR_10 = ((void*)0);

 FUNC_9(&VAR_13->xfrm.xfrm_state_lock);
 VAR_9 = FUNC_2(VAR_8, VAR_12, VAR_8->props.family);

 VAR_11 = -VAR_2;
 if (!VAR_9)
  goto out;

 if (FUNC_14(VAR_9)) {
  VAR_10 = VAR_9;
  VAR_11 = -VAR_0;
  goto out;
 }

 if (VAR_9->km.state == VAR_5) {
  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
 }
 VAR_11 = 0;

out:
 FUNC_10(&VAR_13->xfrm.xfrm_state_lock);

 if (VAR_10)
  FUNC_15(VAR_10);

 if (VAR_11)
  return VAR_11;

 if (!VAR_8) {
  FUNC_13(VAR_9);
  FUNC_15(VAR_9);
  return 0;
 }

 VAR_11 = -VAR_1;
 FUNC_9(&VAR_9->lock);
 if (FUNC_6(VAR_9->km.state == VAR_7)) {
  if (VAR_8->encap && VAR_9->encap &&
      VAR_8->encap->encap_type == VAR_9->encap->encap_type)
   FUNC_8(VAR_9->encap, VAR_8->encap, sizeof(*VAR_9->encap));
  else if (VAR_8->encap || VAR_9->encap)
   goto fail;

  if (VAR_8->coaddr && VAR_9->coaddr) {
   FUNC_8(VAR_9->coaddr, VAR_8->coaddr, sizeof(*VAR_9->coaddr));
  }
  if (!VAR_12 && FUNC_7(&VAR_9->sel, &VAR_8->sel, sizeof(VAR_9->sel)))
   FUNC_8(&VAR_9->sel, &VAR_8->sel, sizeof(VAR_9->sel));
  FUNC_8(&VAR_9->lft, &VAR_8->lft, sizeof(VAR_9->lft));
  VAR_9->km.dying = 0;

  FUNC_4(&VAR_9->mtimer, FUNC_5(1, 0),
         VAR_3);
  if (VAR_9->curlft.use_time)
   FUNC_12(VAR_9);

  if (VAR_8->props.smark.m || VAR_8->props.smark.v || VAR_8->if_id) {
   FUNC_9(&VAR_13->xfrm.xfrm_state_lock);

   if (VAR_8->props.smark.m || VAR_8->props.smark.v)
    VAR_9->props.smark = VAR_8->props.smark;

   if (VAR_8->if_id)
    VAR_9->if_id = VAR_8->if_id;

   FUNC_0(VAR_9);
   FUNC_10(&VAR_13->xfrm.xfrm_state_lock);
  }

  VAR_11 = 0;
  VAR_8->km.state = VAR_6;
  FUNC_3(VAR_8);
 }

fail:
 FUNC_10(&VAR_9->lock);

 FUNC_15(VAR_9);

 return VAR_11;
}
