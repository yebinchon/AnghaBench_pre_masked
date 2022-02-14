
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int code; } ;
struct nft_regs {int* data; TYPE_1__ verdict; } ;
struct nft_pktinfo {int skb; } ;
struct nft_exthdr {size_t dreg; int flags; unsigned int offset; size_t len; int type; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,unsigned int*,int ,int *,int *) ;
 struct nft_exthdr* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (int ,unsigned int,int*,size_t) ;

__attribute__((used)) static void FUNC_3(const struct nft_expr *VAR_3,
     struct nft_regs *VAR_4,
     const struct nft_pktinfo *VAR_5)
{
 struct nft_exthdr *VAR_6 = FUNC_1(VAR_3);
 u32 *VAR_7 = &VAR_4->data[VAR_6->dreg];
 unsigned int VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_5->skb, &VAR_8, VAR_6->type, ((void*)0), ((void*)0));
 if (VAR_6->flags & VAR_1) {
  *VAR_7 = (VAR_9 >= 0);
  return;
 } else if (VAR_9 < 0) {
  goto err;
 }
 VAR_8 += VAR_6->offset;

 VAR_7[VAR_6->len / VAR_2] = 0;
 if (FUNC_2(VAR_5->skb, VAR_8, VAR_7, VAR_6->len) < 0)
  goto err;
 return;
err:
 VAR_4->verdict.code = VAR_0;
}
