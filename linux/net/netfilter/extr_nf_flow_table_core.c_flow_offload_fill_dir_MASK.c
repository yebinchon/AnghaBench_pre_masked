
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct nf_flow_route {TYPE_3__* tuple; } ;
struct TYPE_24__ {int port; } ;
struct TYPE_13__ {TYPE_9__ tcp; } ;
struct TYPE_20__ {int in6; int in; } ;
struct TYPE_14__ {TYPE_10__ u; int protonum; TYPE_5__ u3; } ;
struct TYPE_21__ {int port; } ;
struct TYPE_22__ {TYPE_6__ tcp; } ;
struct TYPE_19__ {int in6; int in; } ;
struct TYPE_23__ {int l3num; TYPE_7__ u; TYPE_4__ u3; } ;
struct nf_conntrack_tuple {TYPE_11__ dst; TYPE_8__ src; } ;
struct nf_conn {TYPE_2__* tuplehash; } ;
struct flow_offload_tuple {int dir; int l3proto; struct dst_entry* dst_cache; int iifidx; int dst_port; int src_port; int l4proto; int mtu; int dst_v6; int src_v6; int dst_v4; int src_v4; } ;
struct flow_offload {TYPE_1__* tuplehash; } ;
struct dst_entry {TYPE_12__* dev; } ;
typedef enum flow_offload_tuple_dir { ____Placeholder_flow_offload_tuple_dir } flow_offload_tuple_dir ;
struct TYPE_18__ {struct dst_entry* dst; } ;
struct TYPE_17__ {struct nf_conntrack_tuple tuple; } ;
struct TYPE_16__ {struct flow_offload_tuple tuple; } ;
struct TYPE_15__ {int ifindex; } ;




 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*,int) ;

__attribute__((used)) static void
FUNC_2(struct flow_offload *VAR_0, struct nf_conn *VAR_1,
        struct nf_flow_route *VAR_2,
        enum flow_offload_tuple_dir VAR_3)
{
 struct flow_offload_tuple *VAR_4 = &VAR_0->tuplehash[VAR_3].tuple;
 struct nf_conntrack_tuple *VAR_5 = &VAR_1->tuplehash[VAR_3].tuple;
 struct dst_entry *VAR_6 = VAR_2->tuple[!VAR_3].dst;
 struct dst_entry *VAR_7 = VAR_2->tuple[VAR_3].dst;

 VAR_4->dir = VAR_3;

 switch (VAR_5->src.l3num) {
 case 129:
  VAR_4->src_v4 = VAR_5->src.u3.in;
  VAR_4->dst_v4 = VAR_5->dst.u3.in;
  VAR_4->mtu = FUNC_1(VAR_7, 1);
  break;
 case 128:
  VAR_4->src_v6 = VAR_5->src.u3.in6;
  VAR_4->dst_v6 = VAR_5->dst.u3.in6;
  VAR_4->mtu = FUNC_0(VAR_7);
  break;
 }

 VAR_4->l3proto = VAR_5->src.l3num;
 VAR_4->l4proto = VAR_5->dst.protonum;
 VAR_4->src_port = VAR_5->src.u.tcp.port;
 VAR_4->dst_port = VAR_5->dst.u.tcp.port;

 VAR_4->iifidx = VAR_6->dev->ifindex;
 VAR_4->dst_cache = VAR_7;
}
