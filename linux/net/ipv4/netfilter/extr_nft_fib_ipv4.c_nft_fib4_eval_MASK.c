
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; scalar_t__* data; } ;
struct nft_pktinfo {TYPE_2__* skb; } ;
struct nft_fib {size_t dreg; int flags; } ;
struct nft_expr {int dummy; } ;
struct net_device {int dummy; } ;
struct iphdr {int tos; int daddr; int saddr; } ;
struct flowi4 {int flowi4_tos; void* saddr; int daddr; int flowi4_mark; int flowi4_iif; int flowi4_scope; } ;
struct fib_result {int type; int fi; } ;
typedef int _iph ;
struct TYPE_6__ {int mark; struct net_device const* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct fib_result) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;


 int VAR_9 ;
 int FUNC_1 (int ,struct net_device const*) ;
 scalar_t__ FUNC_2 (int ,struct flowi4*,struct fib_result*,int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct nft_fib* FUNC_7 (struct nft_expr const*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct net_device const*) ;
 int FUNC_9 (scalar_t__*,struct nft_fib const*,struct net_device const*) ;
 scalar_t__ FUNC_10 (struct nft_pktinfo const*) ;
 struct net_device const* FUNC_11 (struct nft_pktinfo const*) ;
 int FUNC_12 (struct nft_pktinfo const*) ;
 struct net_device* FUNC_13 (struct nft_pktinfo const*) ;
 struct iphdr* FUNC_14 (TYPE_2__*,int,int,struct iphdr*) ;
 int FUNC_15 (TYPE_2__*) ;

void FUNC_16(const struct nft_expr *VAR_10, struct nft_regs *VAR_11,
     const struct nft_pktinfo *VAR_12)
{
 const struct nft_fib *VAR_13 = FUNC_7(VAR_10);
 int VAR_14 = FUNC_15(VAR_12->skb);
 u32 *VAR_15 = &VAR_11->data[VAR_13->dreg];
 struct iphdr *VAR_16, VAR_17;
 struct fib_result VAR_18;
 struct flowi4 VAR_19 = {
  .flowi4_scope = VAR_9,
  .flowi4_iif = VAR_2,
 };
 const struct net_device *VAR_20;
 const struct net_device *VAR_21;
 if (VAR_13->flags & VAR_6)
  VAR_20 = FUNC_13(VAR_12);
 else if (VAR_13->flags & VAR_4)
  VAR_20 = FUNC_11(VAR_12);
 else
  VAR_20 = ((void*)0);

 if (FUNC_10(VAR_12) == VAR_8 &&
     FUNC_8(VAR_12->skb, FUNC_11(VAR_12))) {
  FUNC_9(VAR_15, VAR_13, FUNC_11(VAR_12));
  return;
 }

 VAR_16 = FUNC_14(VAR_12->skb, VAR_14, sizeof(VAR_17), &VAR_17);
 if (!VAR_16) {
  VAR_11->verdict.code = VAR_7;
  return;
 }

 if (FUNC_6(VAR_16->saddr)) {
  if (FUNC_4(VAR_16->daddr) ||
      FUNC_5(VAR_16->daddr)) {
   FUNC_9(VAR_15, VAR_13, VAR_12->skb->dev);
   return;
  }
 }

 if (VAR_13->flags & VAR_5)
  VAR_19 = VAR_12->skb->mark;

 VAR_19 = VAR_16->tos & VAR_0;

 if (VAR_13->flags & VAR_3) {
  VAR_19 = VAR_16->daddr;
  VAR_19 = FUNC_3(VAR_16->saddr);
 } else {
  VAR_19 = VAR_16->saddr;
  VAR_19 = FUNC_3(VAR_16->daddr);
 }

 *VAR_15 = 0;

 if (FUNC_2(FUNC_12(VAR_12), &VAR_19, &VAR_18, VAR_1))
  return;

 switch (VAR_18.type) {
 case 128:
  break;
 case 129:
  return;
 default:
  break;
 }

       if (!VAR_20) {
               VAR_21 = FUNC_0(VAR_18);
 } else {
  if (!FUNC_1(VAR_18.fi, VAR_20))
   return;

  VAR_21 = VAR_20;
 }

 FUNC_9(VAR_15, VAR_13, VAR_21);
}
