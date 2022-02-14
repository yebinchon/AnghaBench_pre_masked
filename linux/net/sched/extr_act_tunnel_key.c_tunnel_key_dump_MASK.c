
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tm ;
struct tcf_tunnel_key_params {scalar_t__ tcft_action; TYPE_2__* tcft_enc_metadata; } ;
struct tcf_tunnel_key {int tcf_lock; int tcf_tm; int tcf_action; int params; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tcf_t {int dummy; } ;
struct tc_tunnel_key {scalar_t__ t_action; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
struct ip_tunnel_key {int tun_flags; int tos; int ttl; scalar_t__ tp_dst; int tun_id; } ;
struct ip_tunnel_info {struct ip_tunnel_key key; } ;
typedef int opt ;
typedef int __be32 ;
struct TYPE_3__ {struct ip_tunnel_info tun_info; } ;
struct TYPE_4__ {TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tc_tunnel_key*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*,unsigned char*) ;
 struct tcf_tunnel_key_params* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 unsigned char* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct tcf_t*,int *) ;
 struct tcf_tunnel_key* FUNC_14 (struct tc_action*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,struct ip_tunnel_info*) ;
 scalar_t__ FUNC_17 (struct sk_buff*,struct ip_tunnel_info*) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_11, struct tc_action *VAR_12,
      int VAR_13, int VAR_14)
{
 unsigned char *VAR_15 = FUNC_10(VAR_11);
 struct tcf_tunnel_key *VAR_16 = FUNC_14(VAR_12);
 struct tcf_tunnel_key_params *VAR_17;
 struct tc_tunnel_key VAR_18 = {
  .index = VAR_16->tcf_index,
  .refcnt = FUNC_9(&VAR_16->tcf_refcnt) - VAR_14,
  .bindcnt = FUNC_0(&VAR_16->tcf_bindcnt) - VAR_13,
 };
 struct tcf_t VAR_19;

 FUNC_11(&VAR_16->tcf_lock);
 VAR_17 = FUNC_8(VAR_16->params,
        FUNC_1(&VAR_16->tcf_lock));
 VAR_18.action = VAR_16->tcf_action;
 VAR_18.t_action = VAR_17->tcft_action;

 if (FUNC_2(VAR_11, VAR_7, sizeof(VAR_18), &VAR_18))
  goto nla_put_failure;

 if (VAR_17->tcft_action == VAR_0) {
  struct ip_tunnel_info *VAR_20 =
   &VAR_17->tcft_enc_metadata->u.tun_info;
  struct ip_tunnel_key *VAR_21 = &VAR_20->key;
  __be32 VAR_22 = FUNC_15(VAR_21->tun_id);

  if (((VAR_21->tun_flags & VAR_10) &&
       FUNC_5(VAR_11, VAR_2, VAR_22)) ||
      FUNC_16(VAR_11,
           &VAR_17->tcft_enc_metadata->u.tun_info) ||
      (VAR_21->tp_dst &&
        FUNC_4(VAR_11, VAR_1,
       VAR_21->tp_dst)) ||
      FUNC_6(VAR_11, VAR_5,
          !(VAR_21->tun_flags & VAR_9)) ||
      FUNC_17(VAR_11, VAR_20))
   goto nla_put_failure;

  if (VAR_21->tos && FUNC_6(VAR_11, VAR_3, VAR_21->tos))
   goto nla_put_failure;

  if (VAR_21->ttl && FUNC_6(VAR_11, VAR_4, VAR_21->ttl))
   goto nla_put_failure;
 }

 FUNC_13(&VAR_19, &VAR_16->tcf_tm);
 if (FUNC_3(VAR_11, VAR_8, sizeof(VAR_19),
     &VAR_19, VAR_6))
  goto nla_put_failure;
 FUNC_12(&VAR_16->tcf_lock);

 return VAR_11->len;

nla_put_failure:
 FUNC_12(&VAR_16->tcf_lock);
 FUNC_7(VAR_11, VAR_15);
 return -1;
}
