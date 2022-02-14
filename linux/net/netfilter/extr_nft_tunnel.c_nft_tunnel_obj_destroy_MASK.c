
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_tunnel_obj {int md; } ;
struct nft_object {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int FUNC_0 (int ) ;
 struct nft_tunnel_obj* FUNC_1 (struct nft_object*) ;

__attribute__((used)) static void FUNC_2(const struct nft_ctx *VAR_0,
       struct nft_object *VAR_1)
{
 struct nft_tunnel_obj *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->md);
}
