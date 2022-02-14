
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
 int VAR_3 ;



 struct nft_reject* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct nft_ctx *VAR_4,
    const struct nft_expr *VAR_5,
    const struct nlattr * const VAR_6[])
{
 struct nft_reject *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 if (VAR_6[VAR_2] == ((void*)0))
  return -VAR_0;

 VAR_7->type = FUNC_3(FUNC_1(VAR_6[VAR_2]));
 switch (VAR_7->type) {
 case 129:
 case 130:
  if (VAR_6[VAR_1] == ((void*)0))
   return -VAR_0;

  VAR_8 = FUNC_2(VAR_6[VAR_1]);
  if (VAR_7->type == 130 &&
      VAR_8 > VAR_3)
   return -VAR_0;

  VAR_7->icmp_code = VAR_8;
  break;
 case 128:
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
