
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


struct nf_nat_pptp {int pac_call_id; int pns_call_id; } ;
struct nf_ct_pptp_master {int pns_call_id; int pac_call_id; } ;
struct TYPE_18__ {int key; } ;
struct TYPE_19__ {TYPE_7__ gre; } ;
struct TYPE_20__ {TYPE_8__ u; } ;
struct TYPE_15__ {int key; } ;
struct TYPE_16__ {TYPE_4__ gre; } ;
struct TYPE_17__ {TYPE_5__ u; } ;
struct TYPE_11__ {TYPE_9__ dst; TYPE_6__ src; } ;
struct TYPE_13__ {int key; } ;
struct TYPE_14__ {TYPE_2__ gre; } ;
struct nf_conntrack_expect {int dir; TYPE_10__ tuple; TYPE_3__ saved_proto; struct nf_conn* master; } ;
struct TYPE_12__ {struct nf_nat_pptp nat_pptp_info; } ;
struct nf_conn_nat {TYPE_1__ help; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct nf_ct_pptp_master* FUNC_1 (struct nf_conn const*) ;
 struct nf_conn_nat* FUNC_2 (struct nf_conn const*) ;

__attribute__((used)) static void
FUNC_3(struct nf_conntrack_expect *VAR_2,
      struct nf_conntrack_expect *VAR_3)
{
 const struct nf_conn *VAR_4 = VAR_2->master;
 struct nf_conn_nat *VAR_5 = FUNC_2(VAR_4);
 struct nf_ct_pptp_master *VAR_6;
 struct nf_nat_pptp *VAR_7;

 if (FUNC_0(!VAR_5))
  return;

 VAR_7 = &VAR_5->help.nat_pptp_info;
 VAR_6 = FUNC_1(VAR_4);


 VAR_7->pac_call_id = VAR_6->pac_call_id;


 VAR_2->saved_proto.gre.key = VAR_6->pns_call_id;
 VAR_2->tuple.src.u.gre.key = VAR_7->pns_call_id;
 VAR_2->tuple.dst.u.gre.key = VAR_6->pac_call_id;
 VAR_2->dir = VAR_0;


 VAR_3->saved_proto.gre.key = VAR_7->pns_call_id;
 VAR_3->tuple.src.u.gre.key = VAR_7->pac_call_id;
 VAR_3->tuple.dst.u.gre.key = VAR_6->pns_call_id;
 VAR_3->dir = VAR_1;
}
