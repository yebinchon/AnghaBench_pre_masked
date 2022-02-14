
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_object {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct nft_counter_percpu_priv {int dummy; } ;


 int FUNC_0 (struct nlattr const* const*,struct nft_counter_percpu_priv*) ;
 struct nft_counter_percpu_priv* FUNC_1 (struct nft_object*) ;

__attribute__((used)) static int FUNC_2(const struct nft_ctx *VAR_0,
    const struct nlattr * const VAR_1[],
    struct nft_object *VAR_2)
{
 struct nft_counter_percpu_priv *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_1, VAR_3);
}
