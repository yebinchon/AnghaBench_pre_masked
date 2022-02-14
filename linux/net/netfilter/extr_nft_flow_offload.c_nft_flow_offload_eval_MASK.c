
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


struct tcphdr {int rst; int fin; } ;
struct TYPE_11__ {int code; } ;
struct nft_regs {TYPE_10__ verdict; } ;
struct TYPE_16__ {int thoff; } ;
struct nft_pktinfo {TYPE_5__ xt; int skb; } ;
struct nft_flow_offload {TYPE_1__* flowtable; } ;
struct nft_expr {int dummy; } ;
struct nf_flowtable {int dummy; } ;
struct nf_flow_route {TYPE_9__* tuple; } ;
struct TYPE_18__ {TYPE_6__* seen; } ;
struct TYPE_19__ {TYPE_7__ tcp; } ;
struct nf_conn {int status; TYPE_8__ proto; TYPE_4__* tuplehash; } ;
struct flow_offload {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef int _tcph ;
struct TYPE_20__ {int dst; } ;
struct TYPE_17__ {int flags; } ;
struct TYPE_13__ {int protonum; } ;
struct TYPE_14__ {TYPE_2__ dst; } ;
struct TYPE_15__ {TYPE_3__ tuple; } ;
struct TYPE_12__ {struct nf_flowtable data; } ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nf_flowtable*,struct flow_offload*) ;
 struct flow_offload* FUNC_4 (struct nf_conn*,struct nf_flow_route*) ;
 int FUNC_5 (struct flow_offload*) ;
 scalar_t__ FUNC_6 (struct nf_conn*,int ) ;
 struct nf_conn* FUNC_7 (int ,int*) ;
 int FUNC_8 (struct nf_conn*) ;
 struct nft_flow_offload* FUNC_9 (struct nft_expr const*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (struct nft_pktinfo const*,struct nf_conn*,struct nf_flow_route*,int) ;
 int FUNC_12 (struct nft_pktinfo const*) ;
 struct tcphdr* FUNC_13 (int ,int ,int,struct tcphdr*) ;
 scalar_t__ FUNC_14 (int ,int*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(const struct nft_expr *VAR_6,
      struct nft_regs *VAR_7,
      const struct nft_pktinfo *VAR_8)
{
 struct nft_flow_offload *VAR_9 = FUNC_9(VAR_6);
 struct nf_flowtable *VAR_10 = &VAR_9->flowtable->data;
 struct tcphdr VAR_11, *VAR_12 = ((void*)0);
 enum ip_conntrack_info VAR_13;
 struct nf_flow_route VAR_14;
 struct flow_offload *VAR_15;
 enum ip_conntrack_dir VAR_16;
 struct nf_conn *VAR_17;
 int VAR_18;

 if (FUNC_10(VAR_8->skb, FUNC_12(VAR_8)))
  goto out;

 VAR_17 = FUNC_7(VAR_8->skb, &VAR_13);
 if (!VAR_17)
  goto out;

 switch (VAR_17->tuplehash[VAR_2].tuple.dst.protonum) {
 case 129:
  VAR_12 = FUNC_13(VAR_8->skb, VAR_8->xt.thoff,
       sizeof(VAR_11), &VAR_11);
  if (FUNC_15(!VAR_12 || VAR_12->fin || VAR_12->rst))
   goto out;
  break;
 case 128:
  break;
 default:
  goto out;
 }

 if (FUNC_6(VAR_17, VAR_5) ||
     VAR_17->status & VAR_1)
  goto out;

 if (!FUNC_8(VAR_17))
  goto out;

 if (FUNC_14(VAR_0, &VAR_17->status))
  goto out;

 VAR_16 = FUNC_0(VAR_13);
 if (FUNC_11(VAR_8, VAR_17, &VAR_14, VAR_16) < 0)
  goto err_flow_route;

 VAR_15 = FUNC_4(VAR_17, &VAR_14);
 if (!VAR_15)
  goto err_flow_alloc;

 if (VAR_12) {
  VAR_17->proto.tcp.seen[0].flags |= VAR_3;
  VAR_17->proto.tcp.seen[1].flags |= VAR_3;
 }

 VAR_18 = FUNC_3(VAR_10, VAR_15);
 if (VAR_18 < 0)
  goto err_flow_add;

 FUNC_2(VAR_14.tuple[!VAR_16].dst);
 return;

err_flow_add:
 FUNC_5(VAR_15);
err_flow_alloc:
 FUNC_2(VAR_14.tuple[!VAR_16].dst);
err_flow_route:
 FUNC_1(VAR_0, &VAR_17->status);
out:
 VAR_7->verdict.code = VAR_4;
}
