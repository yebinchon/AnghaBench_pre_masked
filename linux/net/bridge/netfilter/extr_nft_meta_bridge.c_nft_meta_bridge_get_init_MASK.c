
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct nft_meta {int key; int dreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;




 struct nft_meta* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nft_ctx const*,struct nft_expr const*,struct nlattr const* const*) ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (struct nft_ctx const*,int ,int *,int ,unsigned int) ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct nft_ctx *VAR_4,
        const struct nft_expr *VAR_5,
        const struct nlattr * const VAR_6[])
{
 struct nft_meta *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8;

 VAR_7->key = FUNC_5(FUNC_4(VAR_6[VAR_2]));
 switch (VAR_7->key) {
 case 131:
 case 128:
  VAR_8 = VAR_0;
  break;
 case 130:
 case 129:
  VAR_8 = sizeof(u16);
  break;
 default:
  return FUNC_1(VAR_4, VAR_5, VAR_6);
 }

 VAR_7->dreg = FUNC_2(VAR_6[VAR_1]);
 return FUNC_3(VAR_4, VAR_7->dreg, ((void*)0),
        VAR_3, VAR_8);
}
