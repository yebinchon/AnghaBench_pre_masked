
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; int protocol; } ;
struct TYPE_2__ {unsigned int code; } ;
struct nft_regs {TYPE_1__ verdict; int * data; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_fwd_neigh {size_t sreg_addr; size_t sreg_dev; int nfproto; } ;
struct nft_expr {int dummy; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int hop_limit; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct net_device* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iphdr*) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int,struct net_device*,void*,struct sk_buff*) ;
 struct nft_fwd_neigh* FUNC_6 (struct nft_expr const*) ;
 int FUNC_7 (struct nft_pktinfo const*) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_9(const struct nft_expr *VAR_7,
         struct nft_regs *VAR_8,
         const struct nft_pktinfo *VAR_9)
{
 struct nft_fwd_neigh *VAR_10 = FUNC_6(VAR_7);
 void *VAR_11 = &VAR_8->data[VAR_10->sreg_addr];
 int VAR_12 = VAR_8->data[VAR_10->sreg_dev];
 unsigned int VAR_13 = VAR_6;
 struct sk_buff *VAR_14 = VAR_9->skb;
 struct net_device *VAR_15;
 int VAR_16;

 switch (VAR_10->nfproto) {
 case 129: {
  struct iphdr *VAR_17;

  if (VAR_14->protocol != FUNC_1(VAR_0)) {
   VAR_13 = VAR_4;
   goto out;
  }
  if (FUNC_8(VAR_14, sizeof(*VAR_17))) {
   VAR_13 = VAR_5;
   goto out;
  }
  VAR_17 = FUNC_3(VAR_14);
  FUNC_2(VAR_17);
  VAR_16 = VAR_2;
  break;
  }
 case 128: {
  struct ipv6hdr *VAR_18;

  if (VAR_14->protocol != FUNC_1(VAR_1)) {
   VAR_13 = VAR_4;
   goto out;
  }
  if (FUNC_8(VAR_14, sizeof(*VAR_18))) {
   VAR_13 = VAR_5;
   goto out;
  }
  VAR_18 = FUNC_4(VAR_14);
  VAR_18->hop_limit--;
  VAR_16 = VAR_3;
  break;
  }
 default:
  VAR_13 = VAR_4;
  goto out;
 }

 VAR_15 = FUNC_0(FUNC_7(VAR_9), VAR_12);
 if (VAR_15 == ((void*)0))
  return;

 VAR_14->dev = VAR_15;
 FUNC_5(VAR_16, VAR_15, VAR_11, VAR_14);
out:
 VAR_8->verdict.code = VAR_13;
}
