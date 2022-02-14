
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_user_sec_ctx {int dummy; } ;
struct TYPE_4__ {int dead; } ;
struct TYPE_6__ {int soft_use_expires_seconds; int soft_add_expires_seconds; void* soft_byte_limit; void* soft_packet_limit; int hard_use_expires_seconds; int hard_add_expires_seconds; void* hard_byte_limit; void* hard_packet_limit; } ;
struct TYPE_5__ {void* dport_mask; scalar_t__ dport; void* proto; int prefixlen_d; int daddr; void* sport_mask; scalar_t__ sport; int prefixlen_s; int family; int saddr; } ;
struct xfrm_policy {TYPE_1__ walk; scalar_t__ xfrm_nr; TYPE_3__ lft; int security; TYPE_2__ selector; int family; int priority; int action; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_sec_ctx {int dummy; } ;
struct sadb_x_policy {scalar_t__ sadb_x_policy_type; scalar_t__ sadb_x_policy_dir; int sadb_x_policy_priority; } ;
struct sadb_msg {scalar_t__ sadb_msg_type; int sadb_msg_pid; int sadb_msg_seq; } ;
struct sadb_lifetime {int sadb_lifetime_usetime; int sadb_lifetime_addtime; int sadb_lifetime_bytes; int sadb_lifetime_allocations; } ;
struct sadb_address {int sadb_address_proto; int sadb_address_prefixlen; } ;
struct net {int dummy; } ;
struct km_event {int portid; int seq; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct xfrm_user_sec_ctx*) ;
 int FUNC_3 (struct xfrm_policy*,scalar_t__,struct km_event*) ;
 int FUNC_4 (struct xfrm_policy*,struct sadb_x_policy*) ;
 void* FUNC_5 (int ) ;
 struct xfrm_user_sec_ctx* FUNC_6 (struct sadb_x_sec_ctx*,int ) ;
 int FUNC_7 (struct sadb_address*,int *) ;
 int FUNC_8 (void* const,void* const) ;
 int FUNC_9 (int *,struct xfrm_user_sec_ctx*,int ) ;
 struct net* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct xfrm_policy*,int,int) ;
 int FUNC_12 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_13 (struct net*,int ) ;
 int FUNC_14 (struct xfrm_policy*) ;
 int FUNC_15 (scalar_t__,struct xfrm_policy*,int) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_18, struct sk_buff *VAR_19, const struct sadb_msg *VAR_20, void * const *VAR_21)
{
 struct net *VAR_22 = FUNC_10(VAR_18);
 int VAR_23 = 0;
 struct sadb_lifetime *VAR_24;
 struct sadb_address *VAR_25;
 struct sadb_x_policy *VAR_26;
 struct xfrm_policy *VAR_27;
 struct km_event VAR_28;
 struct sadb_x_sec_ctx *VAR_29;

 if (!FUNC_8(VAR_21[VAR_7-1],
         VAR_21[VAR_6-1]) ||
     !VAR_21[VAR_10-1])
  return -VAR_0;

 VAR_26 = VAR_21[VAR_10-1];
 if (VAR_26->sadb_x_policy_type > VAR_5)
  return -VAR_0;
 if (!VAR_26->sadb_x_policy_dir || VAR_26->sadb_x_policy_dir >= VAR_3)
  return -VAR_0;

 VAR_27 = FUNC_13(VAR_22, VAR_2);
 if (VAR_27 == ((void*)0))
  return -VAR_1;

 VAR_27->action = (VAR_26->sadb_x_policy_type == VAR_4 ?
        VAR_17 : VAR_16);
 VAR_27->priority = VAR_26->sadb_x_policy_priority;

 VAR_25 = VAR_21[VAR_7-1];
 VAR_27->family = FUNC_7(VAR_25, &VAR_27->selector.saddr);
 VAR_27->selector.family = VAR_27->family;
 VAR_27->selector.prefixlen_s = VAR_25->sadb_address_prefixlen;
 VAR_27->selector.proto = FUNC_5(VAR_25->sadb_address_proto);
 VAR_27->selector.sport = ((struct sockaddr_in *)(VAR_25+1))->sin_port;
 if (VAR_27->selector.sport)
  VAR_27->selector.sport_mask = FUNC_1(0xffff);

 VAR_25 = VAR_21[VAR_6-1];
 FUNC_7(VAR_25, &VAR_27->selector.daddr);
 VAR_27->selector.prefixlen_d = VAR_25->sadb_address_prefixlen;




 VAR_27->selector.proto = FUNC_5(VAR_25->sadb_address_proto);

 VAR_27->selector.dport = ((struct sockaddr_in *)(VAR_25+1))->sin_port;
 if (VAR_27->selector.dport)
  VAR_27->selector.dport_mask = FUNC_1(0xffff);

 VAR_29 = VAR_21[VAR_11 - 1];
 if (VAR_29 != ((void*)0)) {
  struct xfrm_user_sec_ctx *VAR_30 = FUNC_6(VAR_29, VAR_2);

  if (!VAR_30) {
   VAR_23 = -VAR_1;
   goto out;
  }

  VAR_23 = FUNC_9(&VAR_27->security, VAR_30, VAR_2);
  FUNC_2(VAR_30);

  if (VAR_23)
   goto out;
 }

 VAR_27->lft.soft_byte_limit = VAR_13;
 VAR_27->lft.hard_byte_limit = VAR_13;
 VAR_27->lft.soft_packet_limit = VAR_13;
 VAR_27->lft.hard_packet_limit = VAR_13;
 if ((VAR_24 = VAR_21[VAR_8-1]) != ((void*)0)) {
  VAR_27->lft.hard_packet_limit = FUNC_0(VAR_24->sadb_lifetime_allocations);
  VAR_27->lft.hard_byte_limit = FUNC_0(VAR_24->sadb_lifetime_bytes);
  VAR_27->lft.hard_add_expires_seconds = VAR_24->sadb_lifetime_addtime;
  VAR_27->lft.hard_use_expires_seconds = VAR_24->sadb_lifetime_usetime;
 }
 if ((VAR_24 = VAR_21[VAR_9-1]) != ((void*)0)) {
  VAR_27->lft.soft_packet_limit = FUNC_0(VAR_24->sadb_lifetime_allocations);
  VAR_27->lft.soft_byte_limit = FUNC_0(VAR_24->sadb_lifetime_bytes);
  VAR_27->lft.soft_add_expires_seconds = VAR_24->sadb_lifetime_addtime;
  VAR_27->lft.soft_use_expires_seconds = VAR_24->sadb_lifetime_usetime;
 }
 VAR_27->xfrm_nr = 0;
 if (VAR_26->sadb_x_policy_type == VAR_5 &&
     (VAR_23 = FUNC_4(VAR_27, VAR_26)) < 0)
  goto out;

 VAR_23 = FUNC_15(VAR_26->sadb_x_policy_dir-1, VAR_27,
     VAR_20->sadb_msg_type != VAR_12);

 FUNC_11(VAR_27, VAR_23 ? 0 : 1, 1);

 if (VAR_23)
  goto out;

 if (VAR_20->sadb_msg_type == VAR_12)
  VAR_28.event = VAR_15;
 else
  VAR_28.event = VAR_14;

 VAR_28.seq = VAR_20->sadb_msg_seq;
 VAR_28.portid = VAR_20->sadb_msg_pid;

 FUNC_3(VAR_27, VAR_26->sadb_x_policy_dir-1, &VAR_28);
 FUNC_12(VAR_27);
 return 0;

out:
 VAR_27->walk.dead = 1;
 FUNC_14(VAR_27);
 return VAR_23;
}
