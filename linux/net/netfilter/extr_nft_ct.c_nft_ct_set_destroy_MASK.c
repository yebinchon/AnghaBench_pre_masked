
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_expr {int dummy; } ;
struct nft_ctx {int family; int net; } ;
struct nft_ct {int dummy; } ;


 int FUNC_0 (struct nft_ctx const*,struct nft_ct*) ;
 int FUNC_1 (int ,int ) ;
 struct nft_ct* FUNC_2 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_3(const struct nft_ctx *VAR_0,
          const struct nft_expr *VAR_1)
{
 struct nft_ct *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_0->net, VAR_0->family);
}
