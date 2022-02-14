
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_set_iter {int dummy; } ;
struct nft_set_ext {int dummy; } ;
struct nft_set_elem {int priv; } ;
struct nft_set {int dummy; } ;
struct TYPE_2__ {int code; int chain; } ;
struct nft_data {TYPE_1__ verdict; } ;
struct nft_ctx {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nft_ctx const*,int ) ;
 struct nft_set_ext* FUNC_1 (struct nft_set*,int ) ;
 struct nft_data* FUNC_2 (struct nft_set_ext const*) ;
 scalar_t__ FUNC_3 (struct nft_set_ext const*,int ) ;
 int* FUNC_4 (struct nft_set_ext const*) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_2,
     struct nft_set *VAR_3,
     const struct nft_set_iter *VAR_4,
     struct nft_set_elem *VAR_5)
{
 const struct nft_set_ext *VAR_6 = FUNC_1(VAR_3, VAR_5->priv);
 const struct nft_data *VAR_7;

 if (FUNC_3(VAR_6, VAR_1) &&
     *FUNC_4(VAR_6) & VAR_0)
  return 0;

 VAR_7 = FUNC_2(VAR_6);
 switch (VAR_7->verdict.code) {
 case 128:
 case 129:
  return FUNC_0(VAR_2, VAR_7->verdict.chain);
 default:
  return 0;
 }
}
