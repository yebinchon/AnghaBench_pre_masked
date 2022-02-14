
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int use_time; } ;
struct xfrm_policy {int flags; TYPE_4__ curlft; } ;
struct xfrm_flo {int flags; struct dst_entry* dst_orig; } ;
struct dst_entry {int flags; TYPE_6__* xfrm; TYPE_1__* ops; } ;
struct TYPE_8__ {struct dst_entry dst; } ;
struct xfrm_dst {int num_pols; int num_xfrms; TYPE_2__ u; struct dst_entry* route; int pols; } ;
struct sock {scalar_t__* sk_policy; } ;
struct TYPE_9__ {scalar_t__ sysctl_larval_drop; int * policy_count; } ;
struct net {TYPE_3__ xfrm; } ;
struct flowi {int dummy; } ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_12__ {TYPE_5__ props; } ;
struct TYPE_7__ {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dst_entry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xfrm_dst*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct xfrm_dst*) ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct xfrm_policy**,int ,int) ;
 struct sock* FUNC_7 (struct sock const*) ;
 struct xfrm_dst* FUNC_8 (struct net*,struct flowi const*,int ,size_t,struct xfrm_flo*,int ) ;
 int FUNC_9 (struct flowi const*,int ,struct xfrm_policy**,int*,int*) ;
 int FUNC_10 (struct xfrm_policy**,int) ;
 struct xfrm_dst* FUNC_11 (struct xfrm_policy**,int,struct flowi const*,int ,struct dst_entry*) ;
 struct xfrm_policy* FUNC_12 (struct sock const*,size_t,struct flowi const*,int ,int ) ;

struct dst_entry *FUNC_13(struct net *VAR_14,
     struct dst_entry *VAR_15,
     const struct flowi *VAR_16,
     const struct sock *VAR_17,
     int VAR_18, u32 VAR_19)
{
 struct xfrm_policy *VAR_20[VAR_13];
 struct xfrm_dst *VAR_21;
 struct dst_entry *VAR_22, *VAR_23;
 u16 VAR_24 = VAR_15->ops->family;
 u8 VAR_25 = VAR_12;
 int VAR_26, VAR_27, VAR_28, VAR_29 = 0, VAR_30 = 0;

 VAR_22 = ((void*)0);
 VAR_21 = ((void*)0);
 VAR_23 = ((void*)0);

 VAR_17 = FUNC_7(VAR_17);
 if (VAR_17 && VAR_17->sk_policy[VAR_12]) {
  VAR_28 = 1;
  VAR_20[0] = FUNC_12(VAR_17, VAR_12, VAR_16, VAR_24,
      VAR_19);
  VAR_27 = FUNC_9(VAR_16, VAR_24, VAR_20,
        &VAR_28, &VAR_29);
  if (VAR_27 < 0)
   goto dropdst;

  if (VAR_28) {
   if (VAR_29 <= 0) {
    VAR_30 = VAR_28;
    goto no_transform;
   }

   VAR_21 = FUNC_11(
     VAR_20, VAR_28, VAR_16,
     VAR_24, VAR_15);

   if (FUNC_1(VAR_21)) {
    FUNC_10(VAR_20, VAR_28);
    VAR_27 = FUNC_2(VAR_21);
    if (VAR_27 == -VAR_5)
     goto nopol;

    goto dropdst;
   } else if (VAR_21 == ((void*)0)) {
    VAR_29 = 0;
    VAR_30 = VAR_28;
    goto no_transform;
   }

   VAR_23 = VAR_21->route;
  }
 }

 if (VAR_21 == ((void*)0)) {
  struct xfrm_flo VAR_31;

  VAR_31.dst_orig = VAR_15;
  VAR_31.flags = VAR_18;


  if ((VAR_15->flags & VAR_0) ||
      !VAR_14->xfrm.policy_count[VAR_12])
   goto nopol;

  VAR_21 = FUNC_8(VAR_14, VAR_16, VAR_24, VAR_25, &VAR_31, VAR_19);
  if (VAR_21 == ((void*)0))
   goto nopol;
  if (FUNC_1(VAR_21)) {
   VAR_27 = FUNC_2(VAR_21);
   goto dropdst;
  }

  VAR_28 = VAR_21->num_pols;
  VAR_29 = VAR_21->num_xfrms;
  FUNC_6(VAR_20, VAR_21->pols, sizeof(struct xfrm_policy *) * VAR_28);
  VAR_23 = VAR_21->route;
 }

 VAR_22 = &VAR_21->u.dst;
 if (VAR_23 == ((void*)0) && VAR_29 > 0) {






  if (VAR_14->xfrm.sysctl_larval_drop) {
   FUNC_3(VAR_14, VAR_6);
   VAR_27 = -VAR_5;
   goto error;
  }

  VAR_27 = -VAR_2;

  FUNC_3(VAR_14, VAR_6);
  goto error;
 }

no_transform:
 if (VAR_28 == 0)
  goto nopol;

 if ((VAR_18 & VAR_8) &&
     !(VAR_20[0]->flags & VAR_11)) {
  VAR_27 = -VAR_3;
  goto error;
 }

 for (VAR_26 = 0; VAR_26 < VAR_28; VAR_26++)
  VAR_20[VAR_26]->curlft.use_time = FUNC_5();

 if (VAR_29 < 0) {

  FUNC_3(VAR_14, VAR_7);
  VAR_27 = -VAR_4;
  goto error;
 } else if (VAR_29 > 0) {

  FUNC_4(VAR_15);
 } else {

  FUNC_4(VAR_22);
  VAR_22 = VAR_15;
 }
ok:
 FUNC_10(VAR_20, VAR_30);
 if (VAR_22 && VAR_22->xfrm &&
     VAR_22->xfrm->props.mode == VAR_10)
  VAR_22->flags |= VAR_1;
 return VAR_22;

nopol:
 if (!(VAR_18 & VAR_8)) {
  VAR_22 = VAR_15;
  goto ok;
 }
 VAR_27 = -VAR_3;
error:
 FUNC_4(VAR_22);
dropdst:
 if (!(VAR_18 & VAR_9))
  FUNC_4(VAR_15);
 FUNC_10(VAR_20, VAR_30);
 return FUNC_0(VAR_27);
}
