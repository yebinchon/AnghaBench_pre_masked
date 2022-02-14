
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int uint64_t ;
struct TYPE_6__ {int family; int saddr; } ;
struct TYPE_5__ {scalar_t__ proto; int spi; } ;
struct TYPE_4__ {int seq; } ;
struct xfrm_state {TYPE_3__ props; TYPE_2__ id; TYPE_1__ km; struct xfrm_encap_tmpl* encap; } ;
struct xfrm_encap_tmpl {int encap_sport; } ;
struct sockaddr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_nat_t_port {int sadb_x_nat_t_port_len; scalar_t__ sadb_x_nat_t_port_reserved; int sadb_x_nat_t_port_port; int sadb_x_nat_t_port_exttype; } ;
struct sadb_sa {int sadb_sa_len; scalar_t__ sadb_sa_flags; scalar_t__ sadb_sa_encrypt; scalar_t__ sadb_sa_auth; scalar_t__ sadb_sa_state; scalar_t__ sadb_sa_replay; int sadb_sa_spi; int sadb_sa_exttype; } ;
struct sadb_msg {int sadb_msg_len; scalar_t__ sadb_msg_pid; int sadb_msg_seq; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; scalar_t__ sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;
struct sadb_address {int sadb_address_len; void* sadb_address_prefixlen; scalar_t__ sadb_address_reserved; scalar_t__ sadb_address_proto; int sadb_address_exttype; } ;
typedef scalar_t__ __u8 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,int ,int ,int *,int ) ;
 void* FUNC_4 (int *,int ,struct sockaddr*,int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_8(struct xfrm_state *VAR_13, xfrm_address_t *VAR_14, __be16 VAR_15)
{
 struct sk_buff *VAR_16;
 struct sadb_msg *VAR_17;
 struct sadb_sa *VAR_18;
 struct sadb_address *VAR_19;
 struct sadb_x_nat_t_port *VAR_20;
 int VAR_21;
 int VAR_22;
 __u8 VAR_23 = (VAR_13->id.proto == VAR_4 ? VAR_9 : 0);
 struct xfrm_encap_tmpl *VAR_24 = ((void*)0);

 VAR_21 = FUNC_5(VAR_13->props.family);
 if (!VAR_21)
  return -VAR_1;

 if (!VAR_23)
  return -VAR_1;

 if (!VAR_13->encap)
  return -VAR_1;

 VAR_24 = VAR_13->encap;







 VAR_22 = sizeof(struct sadb_msg) +
  sizeof(struct sadb_sa) +
  (sizeof(struct sadb_address) * 2) +
  (VAR_21 * 2) +
  (sizeof(struct sadb_x_nat_t_port) * 2);

 VAR_16 = FUNC_1(VAR_22 + 16, VAR_3);
 if (VAR_16 == ((void*)0))
  return -VAR_2;

 VAR_17 = FUNC_6(VAR_16, sizeof(struct sadb_msg));
 VAR_17->sadb_msg_version = VAR_5;
 VAR_17->sadb_msg_type = VAR_12;
 VAR_17->sadb_msg_satype = VAR_23;
 VAR_17->sadb_msg_len = VAR_22 / sizeof(uint64_t);
 VAR_17->sadb_msg_errno = 0;
 VAR_17->sadb_msg_reserved = 0;
 VAR_17->sadb_msg_seq = VAR_13->km.seq = FUNC_2();
 VAR_17->sadb_msg_pid = 0;


 VAR_18 = FUNC_6(VAR_16, sizeof(struct sadb_sa));
 VAR_18->sadb_sa_len = sizeof(struct sadb_sa)/sizeof(uint64_t);
 VAR_18->sadb_sa_exttype = VAR_8;
 VAR_18->sadb_sa_spi = VAR_13->id.spi;
 VAR_18->sadb_sa_replay = 0;
 VAR_18->sadb_sa_state = 0;
 VAR_18->sadb_sa_auth = 0;
 VAR_18->sadb_sa_encrypt = 0;
 VAR_18->sadb_sa_flags = 0;


 VAR_19 = FUNC_6(VAR_16, sizeof(struct sadb_address) + VAR_21);
 VAR_19->sadb_address_len =
  (sizeof(struct sadb_address)+VAR_21)/
   sizeof(uint64_t);
 VAR_19->sadb_address_exttype = VAR_7;
 VAR_19->sadb_address_proto = 0;
 VAR_19->sadb_address_reserved = 0;
 VAR_19->sadb_address_prefixlen =
  FUNC_4(&VAR_13->props.saddr, 0,
        (struct sockaddr *) (VAR_19 + 1),
        VAR_13->props.family);
 if (!VAR_19->sadb_address_prefixlen)
  FUNC_0();


 VAR_20 = FUNC_6(VAR_16, sizeof(*VAR_20));
 VAR_20->sadb_x_nat_t_port_len = sizeof(*VAR_20)/sizeof(uint64_t);
 VAR_20->sadb_x_nat_t_port_exttype = VAR_11;
 VAR_20->sadb_x_nat_t_port_port = VAR_24->encap_sport;
 VAR_20->sadb_x_nat_t_port_reserved = 0;


 VAR_19 = FUNC_6(VAR_16, sizeof(struct sadb_address) + VAR_21);
 VAR_19->sadb_address_len =
  (sizeof(struct sadb_address)+VAR_21)/
   sizeof(uint64_t);
 VAR_19->sadb_address_exttype = VAR_6;
 VAR_19->sadb_address_proto = 0;
 VAR_19->sadb_address_reserved = 0;
 VAR_19->sadb_address_prefixlen =
  FUNC_4(VAR_14, 0,
        (struct sockaddr *) (VAR_19 + 1),
        VAR_13->props.family);
 if (!VAR_19->sadb_address_prefixlen)
  FUNC_0();


 VAR_20 = FUNC_6(VAR_16, sizeof(*VAR_20));
 VAR_20->sadb_x_nat_t_port_len = sizeof(*VAR_20)/sizeof(uint64_t);
 VAR_20->sadb_x_nat_t_port_exttype = VAR_10;
 VAR_20->sadb_x_nat_t_port_port = VAR_15;
 VAR_20->sadb_x_nat_t_port_reserved = 0;

 return FUNC_3(VAR_16, VAR_3, VAR_0, ((void*)0),
          FUNC_7(VAR_13));
}
