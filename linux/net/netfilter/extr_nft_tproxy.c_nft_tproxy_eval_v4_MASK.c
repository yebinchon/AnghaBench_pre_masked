
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int source; scalar_t__ dest; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dev; } ;
struct nft_tproxy {int sreg_addr; int sreg_port; } ;
struct TYPE_2__ {void* code; } ;
struct nft_regs {TYPE_1__ verdict; scalar_t__* data; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_expr {int dummy; } ;
struct iphdr {int saddr; int protocol; scalar_t__ daddr; } ;
typedef int _hdr ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct sock*) ;
 struct sock* FUNC_3 (int ,struct sk_buff*,int ,int ,scalar_t__,int ,scalar_t__,int ,int ) ;
 struct sock* FUNC_4 (int ,struct sk_buff*,scalar_t__,scalar_t__,struct sock*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 struct nft_tproxy* FUNC_7 (struct nft_expr const*) ;
 int FUNC_8 (struct nft_pktinfo const*) ;
 struct udphdr* FUNC_9 (struct sk_buff*,int ,int,struct udphdr*) ;

__attribute__((used)) static void FUNC_10(const struct nft_expr *VAR_4,
          struct nft_regs *VAR_5,
          const struct nft_pktinfo *VAR_6)
{
 const struct nft_tproxy *VAR_7 = FUNC_7(VAR_4);
 struct sk_buff *VAR_8 = VAR_6->skb;
 const struct iphdr *VAR_9 = FUNC_0(VAR_8);
 struct udphdr VAR_10, *VAR_11;
 __be32 VAR_12 = 0;
 __be16 VAR_13 = 0;
 struct sock *VAR_14;

 VAR_11 = FUNC_9(VAR_8, FUNC_1(VAR_8), sizeof(VAR_10), &VAR_10);
 if (!VAR_11) {
  VAR_5->verdict.code = VAR_0;
  return;
 }





 VAR_14 = FUNC_3(FUNC_8(VAR_6), VAR_8, VAR_9->protocol,
       VAR_9->saddr, VAR_9->daddr,
       VAR_11->source, VAR_11->dest,
       VAR_8->dev, VAR_1);

 if (VAR_7->sreg_addr)
  VAR_12 = VAR_5->data[VAR_7->sreg_addr];
 VAR_12 = FUNC_5(VAR_8, VAR_12, VAR_9->daddr);

 if (VAR_7->sreg_port)
  VAR_13 = VAR_5->data[VAR_7->sreg_port];
 if (!VAR_13)
  VAR_13 = VAR_11->dest;


 if (VAR_14 && VAR_14->sk_state == VAR_3) {

  VAR_14 = FUNC_4(FUNC_8(VAR_6), VAR_8, VAR_12, VAR_13, VAR_14);
 } else if (!VAR_14) {



  VAR_14 = FUNC_3(FUNC_8(VAR_6), VAR_8, VAR_9->protocol,
        VAR_9->saddr, VAR_12,
        VAR_11->source, VAR_13,
        VAR_8->dev, VAR_2);
 }

 if (VAR_14 && FUNC_6(VAR_14))
  FUNC_2(VAR_8, VAR_14);
 else
  VAR_5->verdict.code = VAR_0;
}
