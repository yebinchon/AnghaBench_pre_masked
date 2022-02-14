
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {void* dst; void* src; } ;
struct TYPE_12__ {TYPE_4__ orig_tp; } ;
struct sw_flow_key {scalar_t__ ct_orig_proto; TYPE_5__ ct; } ;
struct TYPE_8__ {int code; int type; } ;
struct TYPE_13__ {void* all; TYPE_1__ icmp; } ;
struct TYPE_14__ {scalar_t__ protonum; TYPE_6__ u; } ;
struct TYPE_9__ {void* all; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_7__ dst; TYPE_3__ src; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sw_flow_key *VAR_0,
     const struct nf_conntrack_tuple *VAR_1,
     u8 VAR_2)
{
 VAR_0->ct_orig_proto = VAR_1->dst.protonum;
 if (VAR_1->dst.protonum == VAR_2) {
  VAR_0->ct.orig_tp.src = FUNC_0(VAR_1->dst.u.icmp.type);
  VAR_0->ct.orig_tp.dst = FUNC_0(VAR_1->dst.u.icmp.code);
 } else {
  VAR_0->ct.orig_tp.src = VAR_1->src.u.all;
  VAR_0->ct.orig_tp.dst = VAR_1->dst.u.all;
 }
}
