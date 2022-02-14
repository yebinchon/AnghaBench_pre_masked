
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_12__ {void* code; } ;
struct nft_regs {TYPE_6__ verdict; } ;
struct nft_pktinfo {int skb; } ;
struct nft_object {int dummy; } ;
struct nft_ct_expect_obj {scalar_t__ l3num; scalar_t__ size; int timeout; int dport; int l4proto; } ;
struct TYPE_11__ {scalar_t__ expires; } ;
struct nf_conntrack_expect {TYPE_5__ timeout; } ;
struct nf_conn_help {scalar_t__* expecting; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_8__ {int u3; } ;
struct TYPE_7__ {int u3; } ;
struct TYPE_9__ {TYPE_2__ dst; TYPE_1__ src; } ;
struct TYPE_10__ {TYPE_3__ tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 struct nf_conntrack_expect* FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conntrack_expect*,size_t,scalar_t__,int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_3 (struct nf_conntrack_expect*,int ) ;
 struct nf_conn* FUNC_4 (int ,int*) ;
 struct nf_conn_help* FUNC_5 (struct nf_conn*,int ) ;
 scalar_t__ FUNC_6 (struct nf_conn*) ;
 struct nf_conn_help* FUNC_7 (struct nf_conn*) ;
 struct nft_ct_expect_obj* FUNC_8 (struct nft_object*) ;

__attribute__((used)) static void FUNC_9(struct nft_object *VAR_8,
       struct nft_regs *VAR_9,
       const struct nft_pktinfo *VAR_10)
{
 const struct nft_ct_expect_obj *VAR_11 = FUNC_8(VAR_8);
 struct nf_conntrack_expect *VAR_12;
 enum ip_conntrack_info VAR_13;
 struct nf_conn_help *VAR_14;
 enum ip_conntrack_dir VAR_15;
 u16 VAR_16 = VAR_11->l3num;
 struct nf_conn *VAR_17;

 VAR_17 = FUNC_4(VAR_10->skb, &VAR_13);
 if (!VAR_17 || VAR_13 == VAR_2) {
  VAR_9->verdict.code = VAR_4;
  return;
 }
 VAR_15 = FUNC_0(VAR_13);

 VAR_14 = FUNC_7(VAR_17);
 if (!VAR_14)
  VAR_14 = FUNC_5(VAR_17, VAR_0);
 if (!VAR_14) {
  VAR_9->verdict.code = VAR_6;
  return;
 }

 if (VAR_14->expecting[VAR_5] >= VAR_11->size) {
  VAR_9->verdict.code = VAR_4;
  return;
 }
 if (VAR_16 == VAR_3)
  VAR_16 = FUNC_6(VAR_17);

 VAR_12 = FUNC_1(VAR_17);
 if (VAR_12 == ((void*)0)) {
  VAR_9->verdict.code = VAR_6;
  return;
 }
 FUNC_2(VAR_12, VAR_5, VAR_16,
            &VAR_17->tuplehash[!VAR_15].tuple.src.u3,
            &VAR_17->tuplehash[!VAR_15].tuple.dst.u3,
            VAR_11->l4proto, ((void*)0), &VAR_11->dport);
 VAR_12->timeout.expires = VAR_7 + VAR_11->timeout * VAR_1;

 if (FUNC_3(VAR_12, 0) != 0)
  VAR_9->verdict.code = VAR_6;
}
