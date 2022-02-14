
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_range_expr {int op; scalar_t__ len; int data_from; int data_to; int sreg; } ;
struct nft_expr {int dummy; } ;
struct nft_data_desc {scalar_t__ len; int type; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int *,int *,int,struct nft_data_desc*,struct nlattr const* const) ;
 int FUNC_1 (int *,int ) ;
 struct nft_range_expr* FUNC_2 (struct nft_expr const*) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (struct nlattr const* const,int ,int*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(const struct nft_ctx *VAR_6, const struct nft_expr *VAR_7,
   const struct nlattr * const VAR_8[])
{
 struct nft_range_expr *VAR_9 = FUNC_2(VAR_7);
 struct nft_data_desc VAR_10, VAR_11;
 int VAR_12;
 u32 VAR_13;

 if (!VAR_8[VAR_3] ||
     !VAR_8[VAR_2] ||
     !VAR_8[VAR_1] ||
     !VAR_8[VAR_4])
  return -VAR_0;

 VAR_12 = FUNC_0(((void*)0), &VAR_9->data_from, sizeof(VAR_9->data_from),
       &VAR_10, VAR_8[VAR_1]);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(((void*)0), &VAR_9->data_to, sizeof(VAR_9->data_to),
       &VAR_11, VAR_8[VAR_4]);
 if (VAR_12 < 0)
  goto err1;

 if (VAR_10.len != VAR_11.len) {
  VAR_12 = -VAR_0;
  goto err2;
 }

 VAR_9->sreg = FUNC_3(VAR_8[VAR_3]);
 VAR_12 = FUNC_5(VAR_9->sreg, VAR_10.len);
 if (VAR_12 < 0)
  goto err2;

 VAR_12 = FUNC_4(VAR_8[VAR_2], VAR_5, &VAR_13);
 if (VAR_12 < 0)
  goto err2;

 switch (VAR_13) {
 case 129:
 case 128:
  break;
 default:
  VAR_12 = -VAR_0;
  goto err2;
 }

 VAR_9->op = VAR_13;
 VAR_9->len = VAR_10.len;
 return 0;
err2:
 FUNC_1(&VAR_9->data_to, VAR_11.type);
err1:
 FUNC_1(&VAR_9->data_from, VAR_10.type);
 return VAR_12;
}
