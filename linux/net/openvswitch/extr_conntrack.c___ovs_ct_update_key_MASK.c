
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
struct TYPE_21__ {int dst; int src; } ;
struct TYPE_22__ {TYPE_8__ ct_orig; } ;
struct TYPE_18__ {scalar_t__ type; } ;
struct TYPE_16__ {int dst; int src; } ;
struct TYPE_17__ {TYPE_3__ ct_orig; } ;
struct TYPE_14__ {int labels; int mark; } ;
struct sw_flow_key {scalar_t__ ct_orig_proto; TYPE_9__ ipv6; TYPE_5__ eth; TYPE_4__ ipv4; TYPE_1__ ct; int ct_zone; int ct_state; } ;
struct nf_conntrack_zone {int id; } ;
struct TYPE_12__ {int in6; int ip; } ;
struct TYPE_13__ {TYPE_10__ u3; } ;
struct TYPE_19__ {int in6; int ip; } ;
struct TYPE_20__ {TYPE_6__ u3; } ;
struct nf_conntrack_tuple {TYPE_11__ dst; TYPE_7__ src; } ;
struct nf_conn {TYPE_2__* tuplehash; struct nf_conn* master; } ;
struct TYPE_15__ {struct nf_conntrack_tuple tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sw_flow_key*,struct nf_conntrack_tuple const*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nf_conn const*) ;
 int FUNC_3 (struct nf_conn const*,int *) ;
 int FUNC_4 (struct nf_conn const*) ;
 int FUNC_5 (struct sw_flow_key*) ;

__attribute__((used)) static void FUNC_6(struct sw_flow_key *VAR_7, u8 VAR_8,
    const struct nf_conntrack_zone *VAR_9,
    const struct nf_conn *VAR_10)
{
 VAR_7->ct_state = VAR_8;
 VAR_7->ct_zone = VAR_9->id;
 VAR_7->ct.mark = FUNC_4(VAR_10);
 FUNC_3(VAR_10, &VAR_7->ct.labels);

 if (VAR_10) {
  const struct nf_conntrack_tuple *VAR_11;


  if (VAR_10->master)
   VAR_10 = VAR_10->master;
  VAR_11 = &VAR_10->tuplehash[VAR_3].tuple;


  if (VAR_7->eth.type == FUNC_1(VAR_0) &&
      FUNC_2(VAR_10) == VAR_5) {
   VAR_7->ipv4.ct_orig.src = VAR_11->src.u3.ip;
   VAR_7->ipv4.ct_orig.dst = VAR_11->dst.u3.ip;
   FUNC_0(VAR_7, VAR_11, VAR_2);
   return;
  } else if (VAR_7->eth.type == FUNC_1(VAR_1) &&
      !FUNC_5(VAR_7) &&
      FUNC_2(VAR_10) == VAR_6) {
   VAR_7->ipv6.ct_orig.src = VAR_11->src.u3.in6;
   VAR_7->ipv6.ct_orig.dst = VAR_11->dst.u3.in6;
   FUNC_0(VAR_7, VAR_11, VAR_4);
   return;
  }
 }



 VAR_7->ct_orig_proto = 0;
}
