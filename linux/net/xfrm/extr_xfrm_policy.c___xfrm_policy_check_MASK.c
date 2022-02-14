
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_tmpl {int dummy; } ;
struct xfrm_state {int sel; } ;
struct TYPE_4__ {void* use_time; } ;
struct xfrm_policy {scalar_t__ type; scalar_t__ action; int xfrm_nr; struct xfrm_tmpl* xfrm_vec; TYPE_2__ curlft; } ;
struct xfrm_if_cb {struct xfrm_if* (* decode_session ) (struct sk_buff*,unsigned short) ;} ;
struct TYPE_3__ {int if_id; } ;
struct xfrm_if {struct net* net; TYPE_1__ p; } ;
struct sock {scalar_t__* sk_policy; } ;
struct sk_buff {int dev; } ;
struct sec_path {int len; struct xfrm_state** xvec; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;


 scalar_t__ FUNC_0 (struct xfrm_policy*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct flowi*,unsigned short,int) ;
 struct net* FUNC_3 (int ) ;
 void* FUNC_4 () ;
 int FUNC_5 (struct sk_buff*,struct flowi*,unsigned short) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct sec_path*,int,int*) ;
 struct sock* FUNC_9 (struct sock*) ;
 struct sec_path* FUNC_10 (struct sk_buff*) ;
 struct xfrm_if* FUNC_11 (struct sk_buff*,unsigned short) ;
 struct xfrm_if_cb* FUNC_12 () ;
 struct xfrm_policy* FUNC_13 (struct net*,struct flowi*,unsigned short,int,int ) ;
 struct xfrm_policy* FUNC_14 (struct net*,scalar_t__,struct flowi*,unsigned short,int ,int ) ;
 int FUNC_15 (struct xfrm_tmpl*,struct sec_path*,int,unsigned short) ;
 int FUNC_16 (struct xfrm_policy**,int) ;
 int FUNC_17 (int,struct sk_buff*,struct flowi*) ;
 int FUNC_18 (int *,struct flowi*,unsigned short) ;
 struct xfrm_policy* FUNC_19 (struct sock*,int,struct flowi*,unsigned short,int ) ;
 int FUNC_20 (struct xfrm_tmpl**,struct xfrm_tmpl**,int,unsigned short) ;

int FUNC_21(struct sock *VAR_13, int VAR_14, struct sk_buff *VAR_15,
   unsigned short VAR_16)
{
 struct net *VAR_17 = FUNC_3(VAR_15->dev);
 struct xfrm_policy *VAR_18;
 struct xfrm_policy *VAR_19[VAR_12];
 int VAR_20 = 0;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 struct flowi VAR_24;
 int VAR_25 = -1;
 const struct xfrm_if_cb *VAR_26;
 struct sec_path *VAR_27;
 struct xfrm_if *VAR_28;
 u32 VAR_29 = 0;

 FUNC_6();
 VAR_26 = FUNC_12();

 if (VAR_26) {
  VAR_28 = VAR_26->decode_session(VAR_15, VAR_16);
  if (VAR_28) {
   VAR_29 = VAR_28->p.if_id;
   VAR_17 = VAR_28->net;
  }
 }
 FUNC_7();

 VAR_23 = VAR_14 & ~VAR_10;
 VAR_14 &= VAR_10;

 if (FUNC_2(VAR_15, &VAR_24, VAR_16, VAR_23) < 0) {
  FUNC_1(VAR_17, VAR_1);
  return 0;
 }

 FUNC_5(VAR_15, &VAR_24, VAR_16);


 VAR_27 = FUNC_10(VAR_15);
 if (VAR_27) {
  int VAR_30;

  for (VAR_30 = VAR_27->len - 1; VAR_30 >= 0; VAR_30--) {
   struct xfrm_state *VAR_31 = VAR_27->xvec[VAR_30];
   if (!FUNC_18(&VAR_31->sel, &VAR_24, VAR_16)) {
    FUNC_1(VAR_17, VAR_5);
    return 0;
   }
  }
 }

 VAR_18 = ((void*)0);
 VAR_13 = FUNC_9(VAR_13);
 if (VAR_13 && VAR_13->sk_policy[VAR_14]) {
  VAR_18 = FUNC_19(VAR_13, VAR_14, &VAR_24, VAR_16, VAR_29);
  if (FUNC_0(VAR_18)) {
   FUNC_1(VAR_17, VAR_4);
   return 0;
  }
 }

 if (!VAR_18)
  VAR_18 = FUNC_13(VAR_17, &VAR_24, VAR_16, VAR_14, VAR_29);

 if (FUNC_0(VAR_18)) {
  FUNC_1(VAR_17, VAR_4);
  return 0;
 }

 if (!VAR_18) {
  if (VAR_27 && FUNC_8(VAR_27, 0, &VAR_25)) {
   FUNC_17(VAR_25, VAR_15, &VAR_24);
   FUNC_1(VAR_17, VAR_2);
   return 0;
  }
  return 1;
 }

 VAR_18->curlft.use_time = FUNC_4();

 VAR_19[0] = VAR_18;
 VAR_20++;
 if (VAR_18->action == VAR_8) {
  static struct sec_path VAR_32;
  struct xfrm_tmpl *VAR_33[VAR_7];
  struct xfrm_tmpl *VAR_34[VAR_7];
  struct xfrm_tmpl **VAR_35 = VAR_33;
  int VAR_36 = 0;
  int VAR_37, VAR_38;

  VAR_27 = FUNC_10(VAR_15);
  if (!VAR_27)
   VAR_27 = &VAR_32;

  for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
   if (VAR_19[VAR_22] != VAR_18 &&
       VAR_19[VAR_22]->action != VAR_8) {
    FUNC_1(VAR_17, VAR_3);
    goto reject;
   }
   if (VAR_36 + VAR_19[VAR_22]->xfrm_nr >= VAR_7) {
    FUNC_1(VAR_17, VAR_0);
    goto reject_error;
   }
   for (VAR_37 = 0; VAR_37 < VAR_19[VAR_22]->xfrm_nr; VAR_37++)
    VAR_35[VAR_36++] = &VAR_19[VAR_22]->xfrm_vec[VAR_37];
  }
  VAR_21 = VAR_36;
  if (VAR_20 > 1) {
   FUNC_20(VAR_34, VAR_35, VAR_21, VAR_16);
   VAR_35 = VAR_34;
  }







  for (VAR_37 = VAR_21-1, VAR_38 = 0; VAR_37 >= 0; VAR_37--) {
   VAR_38 = FUNC_15(VAR_35[VAR_37], VAR_27, VAR_38, VAR_16);
   if (VAR_38 < 0) {
    if (VAR_38 < -1)

     VAR_25 = -(2+VAR_38);
    FUNC_1(VAR_17, VAR_6);
    goto reject;
   }
  }

  if (FUNC_8(VAR_27, VAR_38, &VAR_25)) {
   FUNC_1(VAR_17, VAR_6);
   goto reject;
  }

  FUNC_16(VAR_19, VAR_20);
  return 1;
 }
 FUNC_1(VAR_17, VAR_3);

reject:
 FUNC_17(VAR_25, VAR_15, &VAR_24);
reject_error:
 FUNC_16(VAR_19, VAR_20);
 return 0;
}
