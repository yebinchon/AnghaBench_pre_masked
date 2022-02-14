
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


typedef int t ;
struct nf_ct_pptp_master {int pns_call_id; int pac_call_id; } ;
struct TYPE_12__ {int key; } ;
struct TYPE_13__ {TYPE_5__ gre; } ;
struct TYPE_14__ {TYPE_6__ u; void* protonum; } ;
struct TYPE_9__ {int key; } ;
struct TYPE_10__ {TYPE_2__ gre; } ;
struct TYPE_11__ {TYPE_3__ u; } ;
struct nf_conntrack_tuple {TYPE_7__ dst; TYPE_4__ src; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
struct net {int dummy; } ;
struct TYPE_8__ {int tuple; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct net*,struct nf_conn*,struct nf_conntrack_tuple*) ;
 int FUNC_1 (struct nf_conntrack_tuple*,int *,int) ;
 int FUNC_2 (struct nf_conn*) ;
 struct net* FUNC_3 (struct nf_conn*) ;
 struct nf_ct_pptp_master* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct nf_conn *VAR_3)
{
 struct net *VAR_4 = FUNC_3(VAR_3);
 const struct nf_ct_pptp_master *VAR_5 = FUNC_4(VAR_3);
 struct nf_conntrack_tuple VAR_6;

 FUNC_2(VAR_3);


 FUNC_1(&VAR_6, &VAR_3->tuplehash[VAR_1].tuple, sizeof(VAR_6));
 VAR_6.dst.protonum = VAR_0;
 VAR_6.src.u.gre.key = VAR_5->pns_call_id;
 VAR_6.dst.u.gre.key = VAR_5->pac_call_id;
 if (!FUNC_0(VAR_4, VAR_3, &VAR_6))
  FUNC_5("failed to timeout original pns->pac ct/exp\n");


 FUNC_1(&VAR_6, &VAR_3->tuplehash[VAR_2].tuple, sizeof(VAR_6));
 VAR_6.dst.protonum = VAR_0;
 VAR_6.src.u.gre.key = VAR_5->pac_call_id;
 VAR_6.dst.u.gre.key = VAR_5->pns_call_id;
 if (!FUNC_0(VAR_4, VAR_3, &VAR_6))
  FUNC_5("failed to timeout reply pac->pns ct/exp\n");
}
