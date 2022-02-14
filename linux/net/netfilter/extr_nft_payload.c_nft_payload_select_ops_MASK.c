
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_expr_ops {int dummy; } ;
struct nft_ctx {int dummy; } ;
typedef enum nft_payload_bases { ____Placeholder_nft_payload_bases } nft_payload_bases ;


 int VAR_0 ;
 int VAR_1 ;
 struct nft_expr_ops const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;



 scalar_t__ FUNC_2 (unsigned int) ;
 struct nft_expr_ops const VAR_7 ;
 struct nft_expr_ops const VAR_8 ;
 struct nft_expr_ops const VAR_9 ;
 int FUNC_3 (struct nlattr const* const) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static const struct nft_expr_ops *
FUNC_5(const struct nft_ctx *VAR_10,
         const struct nlattr * const VAR_11[])
{
 enum nft_payload_bases VAR_12;
 unsigned int VAR_13, VAR_14;

 if (VAR_11[VAR_2] == ((void*)0) ||
     VAR_11[VAR_5] == ((void*)0) ||
     VAR_11[VAR_4] == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_4(FUNC_3(VAR_11[VAR_2]));
 switch (VAR_12) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return FUNC_0(-VAR_1);
 }

 if (VAR_11[VAR_6] != ((void*)0)) {
  if (VAR_11[VAR_3] != ((void*)0))
   return FUNC_0(-VAR_0);
  return &VAR_9;
 }

 if (VAR_11[VAR_3] == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_13 = FUNC_4(FUNC_3(VAR_11[VAR_5]));
 VAR_14 = FUNC_4(FUNC_3(VAR_11[VAR_4]));

 if (VAR_14 <= 4 && FUNC_2(VAR_14) && FUNC_1(VAR_13, VAR_14) &&
     VAR_12 != 130)
  return &VAR_7;
 else
  return &VAR_8;
}
