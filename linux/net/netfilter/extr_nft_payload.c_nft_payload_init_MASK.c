
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_payload {void* len; int dreg; void* offset; void* base; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct nft_payload* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,void*) ;
 int FUNC_3 (struct nlattr const* const) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_5,
       const struct nft_expr *VAR_6,
       const struct nlattr * const VAR_7[])
{
 struct nft_payload *VAR_8 = FUNC_0(VAR_6);

 VAR_8->base = FUNC_4(FUNC_3(VAR_7[VAR_0]));
 VAR_8->offset = FUNC_4(FUNC_3(VAR_7[VAR_3]));
 VAR_8->len = FUNC_4(FUNC_3(VAR_7[VAR_2]));
 VAR_8->dreg = FUNC_1(VAR_7[VAR_1]);

 return FUNC_2(VAR_5, VAR_8->dreg, ((void*)0),
        VAR_4, VAR_8->len);
}
