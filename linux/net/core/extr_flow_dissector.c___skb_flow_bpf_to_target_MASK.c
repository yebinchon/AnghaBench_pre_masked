
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flow_dissector_key_tags {int flow_label; } ;
struct flow_dissector_key_ports {int dst; int src; } ;
struct flow_dissector_key_control {void* addr_type; int flags; int thoff; } ;
struct flow_dissector_key_basic {int ip_proto; int n_proto; } ;
struct TYPE_2__ {int dst; int src; } ;
struct flow_dissector_key_addrs {int v6addrs; TYPE_1__ v4addrs; } ;
struct flow_dissector {int dummy; } ;
struct bpf_flow_keys {scalar_t__ addr_proto; int flow_label; int dport; int sport; int ipv6_src; int ipv4_dst; int ipv4_src; int ip_proto; int n_proto; scalar_t__ is_encap; scalar_t__ is_first_frag; scalar_t__ is_frag; int thoff; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct flow_dissector*,void*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct flow_dissector*,void*,void*) ;

__attribute__((used)) static void FUNC_4(const struct bpf_flow_keys *VAR_11,
         struct flow_dissector *VAR_12,
         void *VAR_13)
{
 struct flow_dissector_key_control *VAR_14;
 struct flow_dissector_key_basic *VAR_15;
 struct flow_dissector_key_addrs *VAR_16;
 struct flow_dissector_key_ports *VAR_17;
 struct flow_dissector_key_tags *VAR_18;

 VAR_14 = FUNC_3(VAR_12,
      VAR_3,
      VAR_13);
 VAR_14->thoff = VAR_11->thoff;
 if (VAR_11->is_frag)
  VAR_14->flags |= VAR_10;
 if (VAR_11->is_first_frag)
  VAR_14->flags |= VAR_9;
 if (VAR_11->is_encap)
  VAR_14->flags |= VAR_8;

 VAR_15 = FUNC_3(VAR_12,
           VAR_2,
           VAR_13);
 VAR_15->n_proto = VAR_11->n_proto;
 VAR_15->ip_proto = VAR_11->ip_proto;

 if (VAR_11->addr_proto == VAR_0 &&
     FUNC_0(VAR_12, VAR_5)) {
  VAR_16 = FUNC_3(VAR_12,
            VAR_5,
            VAR_13);
  VAR_16->v4addrs.src = VAR_11->ipv4_src;
  VAR_16->v4addrs.dst = VAR_11->ipv4_dst;
  VAR_14->addr_type = VAR_5;
 } else if (VAR_11->addr_proto == VAR_1 &&
     FUNC_0(VAR_12,
          VAR_6)) {
  VAR_16 = FUNC_3(VAR_12,
            VAR_6,
            VAR_13);
  FUNC_1(&VAR_16->v6addrs, &VAR_11->ipv6_src,
         sizeof(VAR_16->v6addrs));
  VAR_14->addr_type = VAR_6;
 }

 if (FUNC_0(VAR_12, VAR_7)) {
  VAR_17 = FUNC_3(VAR_12,
            VAR_7,
            VAR_13);
  VAR_17->src = VAR_11->sport;
  VAR_17->dst = VAR_11->dport;
 }

 if (FUNC_0(VAR_12,
          VAR_4)) {
  VAR_18 = FUNC_3(VAR_12,
           VAR_4,
           VAR_13);
  VAR_18->flow_label = FUNC_2(VAR_11->flow_label);
 }
}
