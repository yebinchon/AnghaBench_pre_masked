
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


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nft_traceinfo {int type; int packet_dumped; TYPE_5__* basechain; TYPE_7__* verdict; TYPE_4__* chain; struct nft_pktinfo* pkt; } ;
struct nft_pktinfo {TYPE_6__* skb; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_14__ {TYPE_1__* chain; } ;
struct TYPE_13__ {int mark; } ;
struct TYPE_12__ {int policy; TYPE_2__* type; } ;
struct TYPE_11__ {TYPE_3__* table; int name; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int family; } ;
struct TYPE_8__ {int name; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 int VAR_14 ;

 int FUNC_0 (int) ;

 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct nft_pktinfo const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct nft_traceinfo*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct nft_pktinfo const*) ;
 int FUNC_10 (struct nft_pktinfo const*) ;
 int FUNC_11 (struct nft_pktinfo const*) ;
 int FUNC_12 (struct nft_pktinfo const*) ;
 scalar_t__ FUNC_13 (struct nft_traceinfo*) ;
 int FUNC_14 (struct sk_buff*,int ,TYPE_7__*) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ,int ) ;
 unsigned int FUNC_17 (int) ;
 unsigned int FUNC_18 (int) ;
 struct nfgenmsg* FUNC_19 (struct nlmsghdr*) ;
 int FUNC_20 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_21 (unsigned int,int ) ;
 struct nlmsghdr* FUNC_22 (struct sk_buff*,int ,int ,int ,int,int ) ;
 unsigned int FUNC_23 (int) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (struct sk_buff*,TYPE_6__*) ;

void FUNC_26(struct nft_traceinfo *VAR_15)
{
 const struct nft_pktinfo *VAR_16 = VAR_15->pkt;
 struct nfgenmsg *VAR_17;
 struct nlmsghdr *VAR_18;
 struct sk_buff *VAR_19;
 unsigned int VAR_20;
 u16 VAR_21;

 if (!FUNC_6(FUNC_10(VAR_16), VAR_2))
  return;

 VAR_20 = FUNC_23(sizeof(struct nfgenmsg)) +
  FUNC_17(FUNC_24(VAR_15->chain->table->name)) +
  FUNC_17(FUNC_24(VAR_15->chain->name)) +
  FUNC_18(sizeof(__be64)) +
  FUNC_17(sizeof(__be32)) +
  FUNC_17(0) +
   FUNC_17(sizeof(u32)) +
  FUNC_17(sizeof(u32)) +
  FUNC_17(VAR_12) +
  FUNC_17(VAR_13) +
  FUNC_17(VAR_14) +
  FUNC_17(sizeof(u32)) +
  FUNC_17(sizeof(__be16)) +
  FUNC_17(sizeof(u32)) +
  FUNC_17(sizeof(__be16)) +
  FUNC_17(sizeof(u32)) +
  FUNC_17(sizeof(u32)) +
  FUNC_17(sizeof(u32));

 if (FUNC_13(VAR_15))
  VAR_20 += FUNC_17(FUNC_24(VAR_15->verdict->chain->name));

 VAR_19 = FUNC_21(VAR_20, VAR_0);
 if (!VAR_19)
  return;

 VAR_21 = FUNC_8(VAR_3, VAR_11);
 VAR_18 = FUNC_22(VAR_19, 0, 0, VAR_21, sizeof(struct nfgenmsg), 0);
 if (!VAR_18)
  goto nla_put_failure;

 VAR_17 = FUNC_19(VAR_18);
 VAR_17->nfgen_family = VAR_15->basechain->type->family;
 VAR_17->version = VAR_1;
 VAR_17->res_id = 0;

 if (FUNC_15(VAR_19, VAR_6, FUNC_1(FUNC_12(VAR_16))))
  goto nla_put_failure;

 if (FUNC_15(VAR_19, VAR_9, FUNC_1(VAR_15->type)))
  goto nla_put_failure;

 if (FUNC_25(VAR_19, VAR_16->skb))
  goto nla_put_failure;

 if (FUNC_16(VAR_19, VAR_4, VAR_15->chain->name))
  goto nla_put_failure;

 if (FUNC_16(VAR_19, VAR_8, VAR_15->chain->table->name))
  goto nla_put_failure;

 if (FUNC_5(VAR_19, VAR_15))
  goto nla_put_failure;

 switch (VAR_15->type) {
 case 129:
 case 128:
  break;
 case 131:
 case 130:
  if (FUNC_14(VAR_19, VAR_10, VAR_15->verdict))
   goto nla_put_failure;
  break;
 case 132:
  if (FUNC_15(VAR_19, VAR_7,
     FUNC_1(VAR_15->basechain->policy)))
   goto nla_put_failure;
  break;
 }

 if (VAR_16->skb->mark &&
     FUNC_15(VAR_19, VAR_5, FUNC_1(VAR_16->skb->mark)))
  goto nla_put_failure;

 if (!VAR_15->packet_dumped) {
  if (FUNC_3(VAR_19, FUNC_9(VAR_16), FUNC_11(VAR_16)))
   goto nla_put_failure;

  if (FUNC_4(VAR_19, VAR_16))
   goto nla_put_failure;
  VAR_15->packet_dumped = 1;
 }

 FUNC_20(VAR_19, VAR_18);
 FUNC_7(VAR_19, FUNC_10(VAR_16), 0, VAR_2, 0, VAR_0);
 return;

 nla_put_failure:
 FUNC_0(1);
 FUNC_2(VAR_19);
}
