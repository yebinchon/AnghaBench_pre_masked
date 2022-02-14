
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_reject {int type; int icmp_code; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;


 struct nft_reject* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (int ) ;

int FUNC_4(const struct nft_ctx *VAR_3,
      const struct nft_expr *VAR_4,
      const struct nlattr * const VAR_5[])
{
 struct nft_reject *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5[VAR_2] == ((void*)0))
  return -VAR_0;

 VAR_6->type = FUNC_3(FUNC_1(VAR_5[VAR_2]));
 switch (VAR_6->type) {
 case 129:
  if (VAR_5[VAR_1] == ((void*)0))
   return -VAR_0;
  VAR_6->icmp_code = FUNC_2(VAR_5[VAR_1]);
 case 128:
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
