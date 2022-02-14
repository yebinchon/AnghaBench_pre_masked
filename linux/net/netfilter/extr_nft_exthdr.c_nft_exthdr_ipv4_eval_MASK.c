
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ protocol; } ;
struct TYPE_2__ {int code; } ;
struct nft_regs {int* data; TYPE_1__ verdict; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_exthdr {size_t dreg; int flags; unsigned int offset; size_t len; int type; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sk_buff*,unsigned int*,int ) ;
 struct nft_exthdr* FUNC_2 (struct nft_expr const*) ;
 int FUNC_3 (struct nft_pktinfo const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int,int*,size_t) ;

__attribute__((used)) static void FUNC_5(const struct nft_expr *VAR_4,
     struct nft_regs *VAR_5,
     const struct nft_pktinfo *VAR_6)
{
 struct nft_exthdr *VAR_7 = FUNC_2(VAR_4);
 u32 *VAR_8 = &VAR_5->data[VAR_7->dreg];
 struct sk_buff *VAR_9 = VAR_6->skb;
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_9->protocol != FUNC_0(VAR_0))
  goto err;

 VAR_11 = FUNC_1(FUNC_3(VAR_6), VAR_9, &VAR_10, VAR_7->type);
 if (VAR_7->flags & VAR_2) {
  *VAR_8 = (VAR_11 >= 0);
  return;
 } else if (VAR_11 < 0) {
  goto err;
 }
 VAR_10 += VAR_7->offset;

 VAR_8[VAR_7->len / VAR_3] = 0;
 if (FUNC_4(VAR_6->skb, VAR_10, VAR_8, VAR_7->len) < 0)
  goto err;
 return;
err:
 VAR_5->verdict.code = VAR_1;
}
