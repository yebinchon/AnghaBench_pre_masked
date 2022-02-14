
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_11__ {int flags; int reqid; int mode; int family; int saddr; int replay_window; } ;
struct TYPE_18__ {int sport; int saddr; void* prefixlen_s; int proto; } ;
struct TYPE_17__ {int daddr; int spi; } ;
struct TYPE_16__ {int use_time; int add_time; void* bytes; void* packets; } ;
struct TYPE_15__ {int soft_use_expires_seconds; int soft_add_expires_seconds; int soft_byte_limit; int soft_packet_limit; int hard_use_expires_seconds; int hard_add_expires_seconds; int hard_byte_limit; int hard_packet_limit; } ;
struct TYPE_12__ {int state; int dying; } ;
struct xfrm_state {TYPE_10__ props; TYPE_9__* ealg; TYPE_8__* aalg; TYPE_7__ sel; TYPE_6__ id; TYPE_5__ curlft; TYPE_4__ lft; TYPE_2__* calg; TYPE_1__ km; struct xfrm_encap_tmpl* encap; struct xfrm_sec_ctx* security; } ;
struct xfrm_sec_ctx {int ctx_len; int ctx_str; int ctx_alg; int ctx_doi; } ;
struct xfrm_encap_tmpl {int encap_dport; int encap_sport; scalar_t__ encap_type; } ;
struct TYPE_14__ {scalar_t__ sadb_alg_id; } ;
struct xfrm_algo_desc {TYPE_3__ desc; scalar_t__ pfkey_supported; } ;
struct sockaddr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_sec_ctx {int sadb_key_len; int sadb_key_bits; int sadb_x_sec_len; int sadb_x_ctx_len; int sadb_x_ctx_alg; int sadb_x_ctx_doi; int sadb_x_sec_exttype; scalar_t__ sadb_key_reserved; int sadb_key_exttype; } ;
struct sadb_x_sa2 {int sadb_x_sa2_len; int sadb_x_sa2_mode; int sadb_x_sa2_reqid; scalar_t__ sadb_x_sa2_sequence; scalar_t__ sadb_x_sa2_reserved2; scalar_t__ sadb_x_sa2_reserved1; int sadb_x_sa2_exttype; } ;
struct sadb_x_nat_t_type {int sadb_x_nat_t_type_len; scalar_t__* sadb_x_nat_t_type_reserved; scalar_t__ sadb_x_nat_t_type_type; int sadb_x_nat_t_type_exttype; } ;
struct sadb_x_nat_t_port {int sadb_x_nat_t_port_len; scalar_t__ sadb_x_nat_t_port_reserved; int sadb_x_nat_t_port_port; int sadb_x_nat_t_port_exttype; } ;
struct sadb_sa {int sadb_sa_len; int sadb_sa_flags; scalar_t__ sadb_sa_encrypt; scalar_t__ sadb_sa_auth; int sadb_sa_state; int sadb_sa_replay; int sadb_sa_spi; int sadb_sa_exttype; } ;
struct sadb_msg {int sadb_msg_len; } ;
struct sadb_lifetime {int sadb_lifetime_len; int sadb_lifetime_usetime; int sadb_lifetime_addtime; void* sadb_lifetime_bytes; void* sadb_lifetime_allocations; int sadb_lifetime_exttype; } ;
struct sadb_key {int sadb_key_len; int sadb_key_bits; int sadb_x_sec_len; int sadb_x_ctx_len; int sadb_x_ctx_alg; int sadb_x_ctx_doi; int sadb_x_sec_exttype; scalar_t__ sadb_key_reserved; int sadb_key_exttype; } ;
struct sadb_address {int sadb_address_len; scalar_t__ sadb_address_reserved; void* sadb_address_prefixlen; scalar_t__ sadb_address_proto; int sadb_address_exttype; } ;
struct TYPE_20__ {int alg_key_len; int alg_key; int alg_name; } ;
struct TYPE_19__ {int alg_key_len; int alg_key; int alg_name; } ;
struct TYPE_13__ {int alg_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
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
 int VAR_23 ;

 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

 void* FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sadb_x_sec_ctx*,int ,int) ;
 int FUNC_7 (struct sadb_msg*,int ,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (int *,int ,struct sockaddr*,int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (struct sk_buff*,int) ;
 struct xfrm_algo_desc* FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int *,int ) ;
 struct xfrm_algo_desc* FUNC_15 (int ,int ) ;
 struct xfrm_algo_desc* FUNC_16 (int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_17(const struct xfrm_state *VAR_27,
           int VAR_28, int VAR_29)
{
 struct sk_buff *VAR_30;
 struct sadb_msg *VAR_31;
 struct sadb_sa *VAR_32;
 struct sadb_lifetime *VAR_33;
 struct sadb_address *VAR_34;
 struct sadb_key *VAR_35;
 struct sadb_x_sa2 *VAR_36;
 struct sadb_x_sec_ctx *VAR_37;
 struct xfrm_sec_ctx *VAR_38;
 int VAR_39 = 0;
 int VAR_40;
 int VAR_41 = 0;
 int VAR_42 = 0;
 int VAR_43;
 struct xfrm_encap_tmpl *VAR_44 = ((void*)0);
 int VAR_45;


 VAR_43 = FUNC_11(VAR_27->props.family);
 if (!VAR_43)
  return FUNC_1(-VAR_0);



 VAR_40 = sizeof(struct sadb_msg) +sizeof(struct sadb_sa) +
  sizeof(struct sadb_lifetime) +
  ((VAR_29 & 1) ? sizeof(struct sadb_lifetime) : 0) +
  ((VAR_29 & 2) ? sizeof(struct sadb_lifetime) : 0) +
   sizeof(struct sadb_address)*2 +
    VAR_43*2 +
     sizeof(struct sadb_x_sa2);

 if ((VAR_38 = VAR_27->security)) {
  VAR_39 = FUNC_2(VAR_38->ctx_len);
  VAR_40 += sizeof(struct sadb_x_sec_ctx) + VAR_39;
 }


 if (!FUNC_14(&VAR_27->sel.saddr, &VAR_27->props.saddr, VAR_27->props.family))
  VAR_40 += sizeof(struct sadb_address) + VAR_43;

 if (VAR_28) {
  if (VAR_27->aalg && VAR_27->aalg->alg_key_len) {
   VAR_41 =
    FUNC_2((VAR_27->aalg->alg_key_len + 7) / 8);
   VAR_40 += sizeof(struct sadb_key) + VAR_41;
  }
  if (VAR_27->ealg && VAR_27->ealg->alg_key_len) {
   VAR_42 =
    FUNC_2((VAR_27->ealg->alg_key_len+7) / 8);
   VAR_40 += sizeof(struct sadb_key) + VAR_42;
  }
 }
 if (VAR_27->encap)
  VAR_44 = VAR_27->encap;

 if (VAR_44 && VAR_44->encap_type) {
  VAR_40 += sizeof(struct sadb_x_nat_t_type);
  VAR_40 += sizeof(struct sadb_x_nat_t_port);
  VAR_40 += sizeof(struct sadb_x_nat_t_port);
 }

 VAR_30 = FUNC_4(VAR_40 + 16, VAR_2);
 if (VAR_30 == ((void*)0))
  return FUNC_1(-VAR_1);


 VAR_31 = FUNC_12(VAR_30, sizeof(struct sadb_msg));
 FUNC_7(VAR_31, 0, VAR_40);
 VAR_31->sadb_msg_len = VAR_40 / sizeof(uint64_t);


 VAR_32 = FUNC_12(VAR_30, sizeof(struct sadb_sa));
 VAR_32->sadb_sa_len = sizeof(struct sadb_sa)/sizeof(uint64_t);
 VAR_32->sadb_sa_exttype = VAR_11;
 VAR_32->sadb_sa_spi = VAR_27->id.spi;
 VAR_32->sadb_sa_replay = VAR_27->props.replay_window;
 switch (VAR_27->km.state) {
 case 128:
  VAR_32->sadb_sa_state = VAR_27->km.dying ?
   VAR_16 : VAR_18;
  break;
 case 129:
  VAR_32->sadb_sa_state = VAR_17;
  break;
 default:
  VAR_32->sadb_sa_state = VAR_15;
  break;
 }
 VAR_32->sadb_sa_auth = 0;
 if (VAR_27->aalg) {
  struct xfrm_algo_desc *VAR_46 = FUNC_13(VAR_27->aalg->alg_name, 0);
  VAR_32->sadb_sa_auth = (VAR_46 && VAR_46->pfkey_supported) ?
     VAR_46->desc.sadb_alg_id : 0;
 }
 VAR_32->sadb_sa_encrypt = 0;
 FUNC_0(VAR_27->ealg && VAR_27->calg);
 if (VAR_27->ealg) {
  struct xfrm_algo_desc *VAR_47 = FUNC_16(VAR_27->ealg->alg_name, 0);
  VAR_32->sadb_sa_encrypt = (VAR_47 && VAR_47->pfkey_supported) ?
     VAR_47->desc.sadb_alg_id : 0;
 }

 if (VAR_27->calg) {
  struct xfrm_algo_desc *VAR_48 = FUNC_15(VAR_27->calg->alg_name, 0);
  VAR_32->sadb_sa_encrypt = (VAR_48 && VAR_48->pfkey_supported) ?
     VAR_48->desc.sadb_alg_id : 0;
 }

 VAR_32->sadb_sa_flags = 0;
 if (VAR_27->props.flags & VAR_25)
  VAR_32->sadb_sa_flags |= VAR_13;
 if (VAR_27->props.flags & VAR_24)
  VAR_32->sadb_sa_flags |= VAR_12;
 if (VAR_27->props.flags & VAR_26)
  VAR_32->sadb_sa_flags |= VAR_14;


 if (VAR_29 & 2) {
  VAR_33 = FUNC_12(VAR_30, sizeof(struct sadb_lifetime));
  VAR_33->sadb_lifetime_len =
   sizeof(struct sadb_lifetime)/sizeof(uint64_t);
  VAR_33->sadb_lifetime_exttype = VAR_9;
  VAR_33->sadb_lifetime_allocations = FUNC_3(VAR_27->lft.hard_packet_limit);
  VAR_33->sadb_lifetime_bytes = FUNC_3(VAR_27->lft.hard_byte_limit);
  VAR_33->sadb_lifetime_addtime = VAR_27->lft.hard_add_expires_seconds;
  VAR_33->sadb_lifetime_usetime = VAR_27->lft.hard_use_expires_seconds;
 }

 if (VAR_29 & 1) {
  VAR_33 = FUNC_12(VAR_30, sizeof(struct sadb_lifetime));
  VAR_33->sadb_lifetime_len =
   sizeof(struct sadb_lifetime)/sizeof(uint64_t);
  VAR_33->sadb_lifetime_exttype = VAR_10;
  VAR_33->sadb_lifetime_allocations = FUNC_3(VAR_27->lft.soft_packet_limit);
  VAR_33->sadb_lifetime_bytes = FUNC_3(VAR_27->lft.soft_byte_limit);
  VAR_33->sadb_lifetime_addtime = VAR_27->lft.soft_add_expires_seconds;
  VAR_33->sadb_lifetime_usetime = VAR_27->lft.soft_use_expires_seconds;
 }

 VAR_33 = FUNC_12(VAR_30, sizeof(struct sadb_lifetime));
 VAR_33->sadb_lifetime_len =
  sizeof(struct sadb_lifetime)/sizeof(uint64_t);
 VAR_33->sadb_lifetime_exttype = VAR_8;
 VAR_33->sadb_lifetime_allocations = VAR_27->curlft.packets;
 VAR_33->sadb_lifetime_bytes = VAR_27->curlft.bytes;
 VAR_33->sadb_lifetime_addtime = VAR_27->curlft.add_time;
 VAR_33->sadb_lifetime_usetime = VAR_27->curlft.use_time;

 VAR_34 = FUNC_12(VAR_30, sizeof(struct sadb_address) + VAR_43);
 VAR_34->sadb_address_len =
  (sizeof(struct sadb_address)+VAR_43)/
   sizeof(uint64_t);
 VAR_34->sadb_address_exttype = VAR_5;



 VAR_34->sadb_address_proto = 0;
 VAR_34->sadb_address_reserved = 0;

 VAR_34->sadb_address_prefixlen =
  FUNC_10(&VAR_27->props.saddr, 0,
        (struct sockaddr *) (VAR_34 + 1),
        VAR_27->props.family);
 FUNC_0(!VAR_34->sadb_address_prefixlen);


 VAR_34 = FUNC_12(VAR_30, sizeof(struct sadb_address) + VAR_43);
 VAR_34->sadb_address_len =
  (sizeof(struct sadb_address)+VAR_43)/
   sizeof(uint64_t);
 VAR_34->sadb_address_exttype = VAR_3;
 VAR_34->sadb_address_proto = 0;
 VAR_34->sadb_address_reserved = 0;

 VAR_34->sadb_address_prefixlen =
  FUNC_10(&VAR_27->id.daddr, 0,
        (struct sockaddr *) (VAR_34 + 1),
        VAR_27->props.family);
 FUNC_0(!VAR_34->sadb_address_prefixlen);

 if (!FUNC_14(&VAR_27->sel.saddr, &VAR_27->props.saddr,
        VAR_27->props.family)) {
  VAR_34 = FUNC_12(VAR_30,
          sizeof(struct sadb_address) + VAR_43);
  VAR_34->sadb_address_len =
   (sizeof(struct sadb_address)+VAR_43)/
   sizeof(uint64_t);
  VAR_34->sadb_address_exttype = VAR_4;
  VAR_34->sadb_address_proto =
   FUNC_9(VAR_27->sel.proto);
  VAR_34->sadb_address_prefixlen = VAR_27->sel.prefixlen_s;
  VAR_34->sadb_address_reserved = 0;

  FUNC_10(&VAR_27->sel.saddr, VAR_27->sel.sport,
        (struct sockaddr *) (VAR_34 + 1),
        VAR_27->props.family);
 }


 if (VAR_28 && VAR_41) {
  VAR_35 = FUNC_12(VAR_30, sizeof(struct sadb_key) + VAR_41);
  VAR_35->sadb_key_len = (sizeof(struct sadb_key) + VAR_41) /
   sizeof(uint64_t);
  VAR_35->sadb_key_exttype = VAR_6;
  VAR_35->sadb_key_bits = VAR_27->aalg->alg_key_len;
  VAR_35->sadb_key_reserved = 0;
  FUNC_6(VAR_35 + 1, VAR_27->aalg->alg_key, (VAR_27->aalg->alg_key_len+7)/8);
 }

 if (VAR_28 && VAR_42) {
  VAR_35 = FUNC_12(VAR_30, sizeof(struct sadb_key) + VAR_42);
  VAR_35->sadb_key_len = (sizeof(struct sadb_key) +
         VAR_42) / sizeof(uint64_t);
  VAR_35->sadb_key_exttype = VAR_7;
  VAR_35->sadb_key_bits = VAR_27->ealg->alg_key_len;
  VAR_35->sadb_key_reserved = 0;
  FUNC_6(VAR_35 + 1, VAR_27->ealg->alg_key,
         (VAR_27->ealg->alg_key_len+7)/8);
 }


 VAR_36 = FUNC_12(VAR_30, sizeof(struct sadb_x_sa2));
 VAR_36->sadb_x_sa2_len = sizeof(struct sadb_x_sa2)/sizeof(uint64_t);
 VAR_36->sadb_x_sa2_exttype = VAR_22;
 if ((VAR_45 = FUNC_8(VAR_27->props.mode)) < 0) {
  FUNC_5(VAR_30);
  return FUNC_1(-VAR_0);
 }
 VAR_36->sadb_x_sa2_mode = VAR_45;
 VAR_36->sadb_x_sa2_reserved1 = 0;
 VAR_36->sadb_x_sa2_reserved2 = 0;
 VAR_36->sadb_x_sa2_sequence = 0;
 VAR_36->sadb_x_sa2_reqid = VAR_27->props.reqid;

 if (VAR_44 && VAR_44->encap_type) {
  struct sadb_x_nat_t_type *VAR_49;
  struct sadb_x_nat_t_port *VAR_50;


  VAR_49 = FUNC_12(VAR_30, sizeof(*VAR_49));
  VAR_49->sadb_x_nat_t_type_len = sizeof(*VAR_49)/sizeof(uint64_t);
  VAR_49->sadb_x_nat_t_type_exttype = VAR_21;
  VAR_49->sadb_x_nat_t_type_type = VAR_44->encap_type;
  VAR_49->sadb_x_nat_t_type_reserved[0] = 0;
  VAR_49->sadb_x_nat_t_type_reserved[1] = 0;
  VAR_49->sadb_x_nat_t_type_reserved[2] = 0;


  VAR_50 = FUNC_12(VAR_30, sizeof(*VAR_50));
  VAR_50->sadb_x_nat_t_port_len = sizeof(*VAR_50)/sizeof(uint64_t);
  VAR_50->sadb_x_nat_t_port_exttype = VAR_20;
  VAR_50->sadb_x_nat_t_port_port = VAR_44->encap_sport;
  VAR_50->sadb_x_nat_t_port_reserved = 0;


  VAR_50 = FUNC_12(VAR_30, sizeof(*VAR_50));
  VAR_50->sadb_x_nat_t_port_len = sizeof(*VAR_50)/sizeof(uint64_t);
  VAR_50->sadb_x_nat_t_port_exttype = VAR_19;
  VAR_50->sadb_x_nat_t_port_port = VAR_44->encap_dport;
  VAR_50->sadb_x_nat_t_port_reserved = 0;
 }


 if (VAR_38) {
  VAR_37 = FUNC_12(VAR_30,
      sizeof(struct sadb_x_sec_ctx) + VAR_39);
  VAR_37->sadb_x_sec_len =
    (sizeof(struct sadb_x_sec_ctx) + VAR_39) / sizeof(uint64_t);
  VAR_37->sadb_x_sec_exttype = VAR_23;
  VAR_37->sadb_x_ctx_doi = VAR_38->ctx_doi;
  VAR_37->sadb_x_ctx_alg = VAR_38->ctx_alg;
  VAR_37->sadb_x_ctx_len = VAR_38->ctx_len;
  FUNC_6(VAR_37 + 1, VAR_38->ctx_str,
         VAR_38->ctx_len);
 }

 return VAR_30;
}
