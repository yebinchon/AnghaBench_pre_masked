
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_ext {int dummy; } ;
struct nft_set {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct nft_ctx const*,int ) ;
 struct nft_set_ext* FUNC_2 (struct nft_set const*,void*) ;
 scalar_t__ FUNC_3 (struct nft_set_ext*,int ) ;
 int FUNC_4 (struct nft_set_ext*) ;

__attribute__((used)) static void FUNC_5(const struct nft_ctx *VAR_1,
           const struct nft_set *VAR_2, void *VAR_3)
{
 struct nft_set_ext *VAR_4 = FUNC_2(VAR_2, VAR_3);

 if (FUNC_3(VAR_4, VAR_0))
  FUNC_1(VAR_1, FUNC_4(VAR_4));
 FUNC_0(VAR_3);
}
