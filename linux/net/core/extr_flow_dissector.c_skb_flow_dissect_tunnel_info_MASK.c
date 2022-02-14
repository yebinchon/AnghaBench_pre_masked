
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {int dst; int src; } ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_6__ {TYPE_2__ ipv6; TYPE_1__ ipv4; } ;
struct ip_tunnel_key {int tun_flags; int ttl; int tos; int tp_dst; int tp_src; int tun_id; TYPE_3__ u; } ;
struct ip_tunnel_info {struct ip_tunnel_key key; scalar_t__ options_len; } ;
struct flow_dissector_key_ports {int dst; int src; } ;
struct flow_dissector_key_keyid {int keyid; } ;
struct flow_dissector_key_ipv6_addrs {int dst; int src; } ;
struct flow_dissector_key_ipv4_addrs {int dst; int src; } ;
struct flow_dissector_key_ip {int ttl; int tos; } ;
struct flow_dissector_key_enc_opts {int dst_opt_type; int data; scalar_t__ len; } ;
struct flow_dissector {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct flow_dissector*,int ) ;
 int FUNC_1 (struct ip_tunnel_info*) ;
 int FUNC_2 (int ,struct ip_tunnel_info*) ;
 int FUNC_3 (int ,struct flow_dissector*,void*) ;
 void* FUNC_4 (struct flow_dissector*,int ,void*) ;
 struct ip_tunnel_info* FUNC_5 (struct sk_buff const*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(const struct sk_buff *VAR_10,
        struct flow_dissector *VAR_11,
        void *VAR_12)
{
 struct ip_tunnel_info *VAR_13;
 struct ip_tunnel_key *VAR_14;


 if (!FUNC_0(VAR_11,
    VAR_4) &&
     !FUNC_0(VAR_11,
    VAR_2) &&
     !FUNC_0(VAR_11,
    VAR_3) &&
     !FUNC_0(VAR_11,
    VAR_0) &&
     !FUNC_0(VAR_11,
    VAR_6) &&
     !FUNC_0(VAR_11,
    VAR_1) &&
     !FUNC_0(VAR_11,
    VAR_5))
  return;

 VAR_13 = FUNC_5(VAR_10);
 if (!VAR_13)
  return;

 VAR_14 = &VAR_13->key;

 switch (FUNC_1(VAR_13)) {
 case 129:
  FUNC_3(VAR_7,
         VAR_11,
         VAR_12);
  if (FUNC_0(VAR_11,
           VAR_2)) {
   struct flow_dissector_key_ipv4_addrs *VAR_15;

   VAR_15 = FUNC_4(VAR_11,
        VAR_2,
        VAR_12);
   VAR_15->src = VAR_14->u.ipv4.src;
   VAR_15->dst = VAR_14->u.ipv4.dst;
  }
  break;
 case 128:
  FUNC_3(VAR_8,
         VAR_11,
         VAR_12);
  if (FUNC_0(VAR_11,
           VAR_3)) {
   struct flow_dissector_key_ipv6_addrs *VAR_16;

   VAR_16 = FUNC_4(VAR_11,
        VAR_3,
        VAR_12);
   VAR_16->src = VAR_14->u.ipv6.src;
   VAR_16->dst = VAR_14->u.ipv6.dst;
  }
  break;
 }

 if (FUNC_0(VAR_11, VAR_4)) {
  struct flow_dissector_key_keyid *VAR_17;

  VAR_17 = FUNC_4(VAR_11,
        VAR_4,
        VAR_12);
  VAR_17->keyid = FUNC_6(VAR_14->tun_id);
 }

 if (FUNC_0(VAR_11, VAR_6)) {
  struct flow_dissector_key_ports *VAR_18;

  VAR_18 = FUNC_4(VAR_11,
            VAR_6,
            VAR_12);
  VAR_18->src = VAR_14->tp_src;
  VAR_18->dst = VAR_14->tp_dst;
 }

 if (FUNC_0(VAR_11, VAR_1)) {
  struct flow_dissector_key_ip *VAR_19;

  VAR_19 = FUNC_4(VAR_11,
            VAR_1,
            VAR_12);
  VAR_19->tos = VAR_14->tos;
  VAR_19->ttl = VAR_14->ttl;
 }

 if (FUNC_0(VAR_11, VAR_5)) {
  struct flow_dissector_key_enc_opts *VAR_20;

  VAR_20 = FUNC_4(VAR_11,
          VAR_5,
          VAR_12);

  if (VAR_13->options_len) {
   VAR_20->len = VAR_13->options_len;
   FUNC_2(VAR_20->data, VAR_13);
   VAR_20->dst_opt_type = VAR_13->key.tun_flags &
      VAR_9;
  }
 }
}
