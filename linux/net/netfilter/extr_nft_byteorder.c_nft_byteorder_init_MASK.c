
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct nlattr {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct nft_byteorder {int op; int size; void* len; void* dreg; void* sreg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 struct nft_byteorder* FUNC_0 (struct nft_expr const*) ;
 void* FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nlattr const* const,int ,void**) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (struct nft_ctx const*,void*,int *,int ,void*) ;
 int FUNC_5 (struct nlattr const* const) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(const struct nft_ctx *VAR_8,
         const struct nft_expr *VAR_9,
         const struct nlattr * const VAR_10[])
{
 struct nft_byteorder *VAR_11 = FUNC_0(VAR_9);
 u32 VAR_12, VAR_13;
 int VAR_14;

 if (VAR_10[VAR_5] == ((void*)0) ||
     VAR_10[VAR_1] == ((void*)0) ||
     VAR_10[VAR_2] == ((void*)0) ||
     VAR_10[VAR_4] == ((void*)0) ||
     VAR_10[VAR_3] == ((void*)0))
  return -VAR_0;

 VAR_11->op = FUNC_6(FUNC_5(VAR_10[VAR_3]));
 switch (VAR_11->op) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = FUNC_2(VAR_10[VAR_4], VAR_7, &VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_11->size = VAR_12;

 switch (VAR_11->size) {
 case 2:
 case 4:
 case 8:
  break;
 default:
  return -VAR_0;
 }

 VAR_11->sreg = FUNC_1(VAR_10[VAR_5]);
 VAR_14 = FUNC_2(VAR_10[VAR_2], VAR_7, &VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_11->len = VAR_13;

 VAR_14 = FUNC_3(VAR_11->sreg, VAR_11->len);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_11->dreg = FUNC_1(VAR_10[VAR_1]);
 return FUNC_4(VAR_8, VAR_11->dreg, ((void*)0),
        VAR_6, VAR_11->len);
}
