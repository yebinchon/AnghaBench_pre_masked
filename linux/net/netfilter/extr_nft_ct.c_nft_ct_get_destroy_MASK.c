
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_expr {int dummy; } ;
struct nft_ctx {int family; int net; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct nft_ctx *VAR_0,
          const struct nft_expr *VAR_1)
{
 FUNC_0(VAR_0->net, VAR_0->family);
}
