
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_iter {int dummy; } ;
struct nft_set_ext {int dummy; } ;
struct nft_set_elem {int priv; } ;
struct nft_set {scalar_t__ dtype; int dlen; } ;
struct nft_ctx {int dummy; } ;
typedef enum nft_registers { ____Placeholder_nft_registers } nft_registers ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nft_set_ext* FUNC_0 (struct nft_set*,int ) ;
 int FUNC_1 (struct nft_set_ext const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nft_ctx const*,int,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(const struct nft_ctx *VAR_2,
     struct nft_set *VAR_3,
     const struct nft_set_iter *VAR_4,
     struct nft_set_elem *VAR_5)
{
 const struct nft_set_ext *VAR_6 = FUNC_0(VAR_3, VAR_5->priv);
 enum nft_registers VAR_7;

 VAR_7 = FUNC_2(VAR_3->dtype);
 return FUNC_3(VAR_2, VAR_7, FUNC_1(VAR_6),
        VAR_3->dtype == VAR_1 ?
        VAR_1 : VAR_0,
        VAR_3->dlen);
}
