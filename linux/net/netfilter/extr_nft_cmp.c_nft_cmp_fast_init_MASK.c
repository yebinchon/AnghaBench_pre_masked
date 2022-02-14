
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_data_desc {int len; } ;
struct nft_data {int* data; } ;
struct nft_ctx {int dummy; } ;
struct nft_cmp_fast_expr {int data; int len; int sreg; } ;
typedef int data ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct nft_data*,int,struct nft_data_desc*,struct nlattr const* const) ;
 struct nft_cmp_fast_expr* FUNC_2 (struct nft_expr const*) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_3,
        const struct nft_expr *VAR_4,
        const struct nlattr * const VAR_5[])
{
 struct nft_cmp_fast_expr *VAR_6 = FUNC_2(VAR_4);
 struct nft_data_desc VAR_7;
 struct nft_data VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(((void*)0), &VAR_8, sizeof(VAR_8), &VAR_7,
       VAR_5[VAR_1]);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_6->sreg = FUNC_3(VAR_5[VAR_2]);
 VAR_10 = FUNC_4(VAR_6->sreg, VAR_7.len);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7.len *= VAR_0;
 VAR_9 = FUNC_0(VAR_7.len);

 VAR_6->data = VAR_8.data[0] & VAR_9;
 VAR_6->len = VAR_7.len;
 return 0;
}
