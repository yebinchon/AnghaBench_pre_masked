
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int code; } ;
struct nft_regs {TYPE_2__ verdict; } ;
struct nft_pktinfo {TYPE_1__* skb; } ;
struct nft_limit {int nsecs; int rate; } ;
struct nft_expr {int dummy; } ;
struct TYPE_3__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 struct nft_limit* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (struct nft_limit*,int ) ;

__attribute__((used)) static void FUNC_3(const struct nft_expr *VAR_1,
     struct nft_regs *VAR_2,
     const struct nft_pktinfo *VAR_3)
{
 struct nft_limit *VAR_4 = FUNC_1(VAR_1);
 u64 VAR_5 = FUNC_0(VAR_4->nsecs * VAR_3->skb->len, VAR_4->rate);

 if (FUNC_2(VAR_4, VAR_5))
  VAR_2->verdict.code = VAR_0;
}
