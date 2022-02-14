
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_counter_percpu_priv {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct nft_counter_percpu_priv*,int) ;
 struct nft_counter_percpu_priv* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, const struct nft_expr *VAR_1)
{
 struct nft_counter_percpu_priv *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_2, 0);
}
