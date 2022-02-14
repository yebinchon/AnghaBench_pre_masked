
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ error; } ;
struct rt6_info {int rt6i_flags; TYPE_3__* rt6i_idev; TYPE_2__ dst; } ;
struct TYPE_4__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; scalar_t__* data; } ;
struct nft_pktinfo {int skb; int tprot; } ;
struct nft_fib {size_t dreg; int flags; } ;
struct nft_expr {int dummy; } ;
typedef struct net_device const net_device ;
struct ipv6hdr {int dummy; } ;
struct flowi6 {int flowi6_proto; int flowi6_iif; } ;
typedef int _iph ;
struct TYPE_6__ {struct net_device const* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,struct flowi6*,int ,int) ;
 int FUNC_1 (struct rt6_info*) ;
 struct nft_fib* FUNC_2 (struct nft_expr const*) ;
 int FUNC_3 (struct flowi6*,struct nft_fib const*,struct nft_pktinfo const*,struct net_device const*,struct ipv6hdr*) ;
 scalar_t__ FUNC_4 (int ,struct net_device const*) ;
 int FUNC_5 (scalar_t__*,struct nft_fib const*,struct net_device const*) ;
 scalar_t__ FUNC_6 (struct nft_pktinfo const*) ;
 struct net_device const* FUNC_7 (struct nft_pktinfo const*) ;
 int FUNC_8 (struct nft_pktinfo const*) ;
 struct net_device const* FUNC_9 (struct nft_pktinfo const*) ;
 struct ipv6hdr* FUNC_10 (int ,int,int,struct ipv6hdr*) ;
 int FUNC_11 (int ) ;

void FUNC_12(const struct nft_expr *VAR_8, struct nft_regs *VAR_9,
     const struct nft_pktinfo *VAR_10)
{
 const struct nft_fib *VAR_11 = FUNC_2(VAR_8);
 int VAR_12 = FUNC_11(VAR_10->skb);
 const struct net_device *VAR_13 = ((void*)0);
 u32 *VAR_14 = &VAR_9->data[VAR_11->dreg];
 struct ipv6hdr *VAR_15, VAR_16;
 struct flowi6 VAR_17 = {
  .flowi6_iif = VAR_0,
  .flowi6_proto = VAR_10->tprot,
 };
 struct rt6_info *VAR_18;
 int VAR_19;

 if (VAR_11->flags & VAR_1)
  VAR_13 = FUNC_7(VAR_10);
 else if (VAR_11->flags & VAR_2)
  VAR_13 = FUNC_9(VAR_10);

 VAR_15 = FUNC_10(VAR_10->skb, VAR_12, sizeof(VAR_16), &VAR_16);
 if (!VAR_15) {
  VAR_9->verdict.code = VAR_3;
  return;
 }

 VAR_19 = FUNC_3(&VAR_17, VAR_11, VAR_10, VAR_13, VAR_15);

 if (FUNC_6(VAR_10) == VAR_4 &&
     FUNC_4(VAR_10->skb, FUNC_7(VAR_10))) {
  FUNC_5(VAR_14, VAR_11, FUNC_7(VAR_10));
  return;
 }

 *VAR_14 = 0;
 VAR_18 = (void *)FUNC_0(FUNC_8(VAR_10), &VAR_17, VAR_10->skb,
          VAR_19);
 if (VAR_18->dst.error)
  goto put_rt_err;


 if (VAR_18->rt6i_flags & (VAR_7 | VAR_5 | VAR_6))
  goto put_rt_err;

 if (VAR_13 && VAR_13 != VAR_18->rt6i_idev->dev)
  goto put_rt_err;

 FUNC_5(VAR_14, VAR_11, VAR_18->rt6i_idev->dev);
 put_rt_err:
 FUNC_1(VAR_18);
}
