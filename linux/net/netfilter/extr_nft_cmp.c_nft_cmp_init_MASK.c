
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_data_desc {int len; } ;
struct nft_ctx {int dummy; } ;
struct nft_cmp_expr {int len; int op; int sreg; int data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *,int,struct nft_data_desc*,struct nlattr const* const) ;
 struct nft_cmp_expr* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct nft_ctx *VAR_3, const struct nft_expr *VAR_4,
   const struct nlattr * const VAR_5[])
{
 struct nft_cmp_expr *VAR_6 = FUNC_1(VAR_4);
 struct nft_data_desc VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(((void*)0), &VAR_6->data, sizeof(VAR_6->data), &VAR_7,
       VAR_5[VAR_0]);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->sreg = FUNC_2(VAR_5[VAR_2]);
 VAR_8 = FUNC_3(VAR_6->sreg, VAR_7.len);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->op = FUNC_5(FUNC_4(VAR_5[VAR_1]));
 VAR_6->len = VAR_7.len;
 return 0;
}
