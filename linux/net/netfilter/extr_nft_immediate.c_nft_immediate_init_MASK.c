
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_immediate_expr {int data; int dreg; int dlen; } ;
struct nft_expr {int dummy; } ;
struct nft_data_desc {int type; int len; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct nft_ctx const*,int *,int,struct nft_data_desc*,struct nlattr const* const) ;
 int FUNC_1 (int *,int ) ;
 struct nft_immediate_expr* FUNC_2 (struct nft_expr const*) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (struct nft_ctx const*,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_3,
         const struct nft_expr *VAR_4,
         const struct nlattr * const VAR_5[])
{
 struct nft_immediate_expr *VAR_6 = FUNC_2(VAR_4);
 struct nft_data_desc VAR_7;
 int VAR_8;

 if (VAR_5[VAR_2] == ((void*)0) ||
     VAR_5[VAR_1] == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_3, &VAR_6->data, sizeof(VAR_6->data), &VAR_7,
       VAR_5[VAR_1]);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->dlen = VAR_7.len;

 VAR_6->dreg = FUNC_3(VAR_5[VAR_2]);
 VAR_8 = FUNC_4(VAR_3, VAR_6->dreg, &VAR_6->data,
       VAR_7.type, VAR_7.len);
 if (VAR_8 < 0)
  goto err1;

 return 0;

err1:
 FUNC_1(&VAR_6->data, VAR_7.type);
 return VAR_8;
}
