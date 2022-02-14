
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_20__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm_state_afinfo {int (* transport_finish ) (struct sk_buff*,int) ;} ;
struct xfrm_mode {int family; } ;
struct TYPE_25__ {unsigned int family; int flags; } ;
struct TYPE_23__ {int daddr; } ;
struct TYPE_22__ {unsigned int family; } ;
struct TYPE_42__ {int packets; int bytes; } ;
struct TYPE_29__ {int integrity_failed; } ;
struct TYPE_24__ {scalar_t__ state; } ;
struct xfrm_state {TYPE_16__* type; int lock; struct xfrm_mode inner_mode; TYPE_13__ outer_mode; TYPE_11__ id; TYPE_10__ sel; TYPE_9__ curlft; TYPE_8__* repl; TYPE_17__ stats; TYPE_7__* type_offload; TYPE_6__* encap; TYPE_12__ km; } ;
struct xfrm_offload {int flags; int status; } ;
struct sk_buff {scalar_t__ len; int dev; int mark; } ;
struct sec_path {scalar_t__ len; scalar_t__ olen; struct xfrm_state** xvec; } ;
struct net {int dummy; } ;
typedef void* __be32 ;
struct TYPE_41__ {int (* advance ) (struct xfrm_state*,void*) ;scalar_t__ (* recheck ) (struct xfrm_state*,struct sk_buff*,void*) ;scalar_t__ (* check ) (struct xfrm_state*,struct sk_buff*,void*) ;} ;
struct TYPE_40__ {int (* input_tail ) (struct xfrm_state*,struct sk_buff*) ;} ;
struct TYPE_39__ {int encap_type; } ;
struct TYPE_38__ {TYPE_4__* ip6; TYPE_2__* ip4; } ;
struct TYPE_36__ {int i_key; } ;
struct TYPE_37__ {TYPE_3__ parms; } ;
struct TYPE_32__ {int i_key; } ;
struct TYPE_35__ {TYPE_1__ parms; } ;
struct TYPE_34__ {int protocol; } ;
struct TYPE_26__ {void* hi; void* low; } ;
struct TYPE_27__ {TYPE_14__ input; } ;
struct TYPE_33__ {TYPE_15__ seq; } ;
struct TYPE_31__ {unsigned int family; scalar_t__ daddroff; void* seq; } ;
struct TYPE_30__ {TYPE_5__ tunnel; } ;
struct TYPE_28__ {int proto; int (* input ) (struct xfrm_state*,struct sk_buff*) ;} ;




 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct net*,int ) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 TYPE_21__* FUNC_1 (struct sk_buff*) ;
 TYPE_20__* FUNC_2 (struct sk_buff*) ;
 TYPE_19__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 TYPE_18__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct net* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_27 ;
 int FUNC_9 (int *,struct sk_buff*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct xfrm_state_afinfo const*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (struct sk_buff*) ;
 struct sec_path* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 struct sec_path* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (struct xfrm_state*,struct sk_buff*,void*) ;
 int FUNC_26 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_27 (struct xfrm_state*,struct sk_buff*) ;
 scalar_t__ FUNC_28 (struct xfrm_state*,struct sk_buff*,void*) ;
 int FUNC_29 (struct xfrm_state*,void*) ;
 int FUNC_30 (struct sk_buff*,int) ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 (struct xfrm_state*,struct sk_buff*,int) ;
 int FUNC_33 (struct sk_buff*,unsigned int,void*,void*) ;
 scalar_t__ FUNC_34 (struct xfrm_state*,struct xfrm_mode const*,struct sk_buff*) ;
 struct xfrm_state* FUNC_35 (struct sk_buff*) ;
 struct xfrm_mode* FUNC_36 (struct xfrm_state*,int) ;
 struct xfrm_offload* FUNC_37 (struct sk_buff*) ;
 int FUNC_38 (struct sk_buff*,int,void**,void**) ;
 int FUNC_39 (struct sk_buff*,unsigned int,int,int) ;
 int FUNC_40 (struct xfrm_state*,void*) ;
 int FUNC_41 (int ,struct xfrm_state*) ;
 struct xfrm_state_afinfo* FUNC_42 (int ) ;
 scalar_t__ FUNC_43 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_44 (struct net*,int ,int *,void*,int,unsigned int) ;
 scalar_t__ FUNC_45 (struct sk_buff*,struct xfrm_state*,unsigned int) ;

int FUNC_46(struct sk_buff *VAR_28, int VAR_29, __be32 VAR_30, int VAR_31)
{
 const struct xfrm_state_afinfo *VAR_32;
 struct net *VAR_33 = FUNC_7(VAR_28->dev);
 const struct xfrm_mode *VAR_34;
 int VAR_35;
 __be32 VAR_36;
 __be32 VAR_37;
 struct xfrm_state *VAR_38 = ((void*)0);
 xfrm_address_t *VAR_39;
 u32 VAR_40 = VAR_28->mark;
 unsigned int VAR_41 = VAR_0;
 int VAR_42 = 0;
 int VAR_43 = 0;
 bool VAR_44 = 0;
 bool VAR_45 = 0;
 struct xfrm_offload *VAR_46 = FUNC_37(VAR_28);
 struct sec_path *VAR_47;

 if (VAR_31 < 0) {
  VAR_38 = FUNC_35(VAR_28);

  if (FUNC_31(VAR_38->km.state != VAR_26)) {
   if (VAR_38->km.state == VAR_25)
    FUNC_0(VAR_33, VAR_11);
   else
    FUNC_0(VAR_33,
            VAR_17);
   goto drop;
  }

  VAR_41 = VAR_38->outer_mode.family;


  if (VAR_31 == -1) {
   VAR_43 = 1;
   VAR_36 = FUNC_2(VAR_28)->seq.input.low;
   goto resume;
  }


  VAR_31 = 0;
  VAR_36 = FUNC_3(VAR_28)->seq;

  if (VAR_46 && (VAR_46->flags & VAR_1)) {
   VAR_45 = 1;
   VAR_41 = FUNC_3(VAR_28)->family;

   if (!(VAR_46->status & VAR_3)) {
    if (VAR_46->status &
        (VAR_4 |
         VAR_5 |
         VAR_6 |
         VAR_7)) {

     FUNC_32(VAR_38, VAR_28,
         VAR_38->type->proto);
     VAR_38->stats.integrity_failed++;
     FUNC_0(VAR_33, VAR_20);
     goto drop;
    }

    if (VAR_46->status & VAR_2) {
     FUNC_0(VAR_33, VAR_20);
     goto drop;
    }

    FUNC_0(VAR_33, VAR_12);
    goto drop;
   }

   if ((VAR_35 = FUNC_38(VAR_28, VAR_29, &VAR_30, &VAR_36)) != 0) {
    FUNC_0(VAR_33, VAR_14);
    goto drop;
   }
  }

  goto lock;
 }

 VAR_41 = FUNC_3(VAR_28)->family;


 switch (VAR_41) {
 case 129:
  if (FUNC_4(VAR_28)->tunnel.ip4)
   VAR_40 = FUNC_5(FUNC_4(VAR_28)->tunnel.ip4->parms.i_key);
  break;
 case 128:
  if (FUNC_4(VAR_28)->tunnel.ip6)
   VAR_40 = FUNC_5(FUNC_4(VAR_28)->tunnel.ip6->parms.i_key);
  break;
 }

 VAR_47 = FUNC_17(VAR_28);
 if (!VAR_47) {
  FUNC_0(VAR_33, VAR_13);
  goto drop;
 }

 VAR_36 = 0;
 if (!VAR_30 && (VAR_35 = FUNC_38(VAR_28, VAR_29, &VAR_30, &VAR_36)) != 0) {
  FUNC_16(VAR_28);
  FUNC_0(VAR_33, VAR_14);
  goto drop;
 }

 VAR_39 = (xfrm_address_t *)(FUNC_21(VAR_28) +
       FUNC_3(VAR_28)->daddroff);
 do {
  VAR_47 = FUNC_22(VAR_28);

  if (VAR_47->len == VAR_23) {
   FUNC_16(VAR_28);
   FUNC_0(VAR_33, VAR_12);
   goto drop;
  }

  VAR_38 = FUNC_44(VAR_33, VAR_40, VAR_39, VAR_30, VAR_29, VAR_41);
  if (VAR_38 == ((void*)0)) {
   FUNC_16(VAR_28);
   FUNC_0(VAR_33, VAR_15);
   FUNC_33(VAR_28, VAR_41, VAR_30, VAR_36);
   goto drop;
  }

  VAR_28->mark = FUNC_41(VAR_28->mark, VAR_38);

  VAR_47->xvec[VAR_47->len++] = VAR_38;

  FUNC_20(VAR_28);
  if (!FUNC_18(VAR_28)) {
   FUNC_0(VAR_33, VAR_13);
   goto drop;
  }

lock:
  FUNC_23(&VAR_38->lock);

  if (FUNC_31(VAR_38->km.state != VAR_26)) {
   if (VAR_38->km.state == VAR_25)
    FUNC_0(VAR_33, VAR_11);
   else
    FUNC_0(VAR_33,
            VAR_17);
   goto drop_unlock;
  }

  if ((VAR_38->encap ? VAR_38->encap->encap_type : 0) != VAR_31) {
   FUNC_0(VAR_33, VAR_18);
   goto drop_unlock;
  }

  if (VAR_38->repl->check(VAR_38, VAR_28, VAR_36)) {
   FUNC_0(VAR_33, VAR_21);
   goto drop_unlock;
  }

  if (FUNC_43(VAR_38)) {
   FUNC_0(VAR_33, VAR_16);
   goto drop_unlock;
  }

  FUNC_24(&VAR_38->lock);

  if (FUNC_45(VAR_28, VAR_38, VAR_41)) {
   FUNC_0(VAR_33, VAR_19);
   goto drop;
  }

  VAR_37 = FUNC_10(FUNC_40(VAR_38, VAR_36));

  FUNC_2(VAR_28)->seq.input.low = VAR_36;
  FUNC_2(VAR_28)->seq.input.hi = VAR_37;

  FUNC_6(VAR_28->dev);

  if (VAR_45)
   VAR_29 = VAR_38->type_offload->input_tail(VAR_38, VAR_28);
  else
   VAR_29 = VAR_38->type->input(VAR_38, VAR_28);

  if (VAR_29 == -VAR_10)
   return 0;
resume:
  FUNC_8(VAR_28->dev);

  FUNC_23(&VAR_38->lock);
  if (VAR_29 <= 0) {
   if (VAR_29 == -VAR_9) {
    FUNC_32(VAR_38, VAR_28,
        VAR_38->type->proto);
    VAR_38->stats.integrity_failed++;
   }
   FUNC_0(VAR_33, VAR_20);
   goto drop_unlock;
  }


  VAR_31 = 0;

  if (VAR_43 && VAR_38->repl->recheck(VAR_38, VAR_28, VAR_36)) {
   FUNC_0(VAR_33, VAR_21);
   goto drop_unlock;
  }

  VAR_38->repl->advance(VAR_38, VAR_36);

  VAR_38->curlft.bytes += VAR_28->len;
  VAR_38->curlft.packets++;

  FUNC_24(&VAR_38->lock);

  FUNC_1(VAR_28)->protocol = VAR_29;

  VAR_34 = &VAR_38->inner_mode;

  if (VAR_38->sel.family == VAR_0) {
   VAR_34 = FUNC_36(VAR_38, FUNC_1(VAR_28)->protocol);
   if (VAR_34 == ((void*)0)) {
    FUNC_0(VAR_33, VAR_19);
    goto drop;
   }
  }

  if (FUNC_34(VAR_38, VAR_34, VAR_28)) {
   FUNC_0(VAR_33, VAR_19);
   goto drop;
  }

  if (VAR_38->outer_mode.flags & VAR_24) {
   VAR_42 = 1;
   break;
  }





  VAR_39 = &VAR_38->id.daddr;
  VAR_41 = VAR_38->outer_mode.family;

  VAR_35 = FUNC_38(VAR_28, VAR_29, &VAR_30, &VAR_36);
  if (VAR_35 < 0) {
   FUNC_0(VAR_33, VAR_14);
   goto drop;
  }
  VAR_45 = 0;
 } while (!VAR_35);

 VAR_35 = FUNC_39(VAR_28, VAR_41, VAR_38->type->proto, 0);
 if (VAR_35)
  goto drop;

 FUNC_13(VAR_28);

 if (VAR_42) {
  VAR_47 = FUNC_22(VAR_28);
  if (VAR_47)
   VAR_47->olen = 0;
  FUNC_19(VAR_28);
  FUNC_9(&VAR_27, VAR_28);
  return 0;
 } else {
  VAR_46 = FUNC_37(VAR_28);
  if (VAR_46)
   VAR_44 = VAR_46->flags & VAR_22;

  VAR_35 = -VAR_8;
  FUNC_14();
  VAR_32 = FUNC_42(VAR_38->inner_mode.family);
  if (FUNC_12(VAR_32))
   VAR_35 = VAR_32->transport_finish(VAR_28, VAR_44 || VAR_43);
  FUNC_15();
  if (VAR_44) {
   VAR_47 = FUNC_22(VAR_28);
   if (VAR_47)
    VAR_47->olen = 0;
   FUNC_19(VAR_28);
   FUNC_9(&VAR_27, VAR_28);
   return VAR_35;
  }

  return VAR_35;
 }

drop_unlock:
 FUNC_24(&VAR_38->lock);
drop:
 FUNC_39(VAR_28, VAR_41, VAR_38 && VAR_38->type ? VAR_38->type->proto : VAR_29, -1);
 FUNC_11(VAR_28);
 return 0;
}
