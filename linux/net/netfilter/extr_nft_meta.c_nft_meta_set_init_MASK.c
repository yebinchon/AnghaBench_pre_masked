
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_meta {int key; int sreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;





 struct nft_meta* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int VAR_3 ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(const struct nft_ctx *VAR_4,
        const struct nft_expr *VAR_5,
        const struct nlattr * const VAR_6[])
{
 struct nft_meta *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8;
 int VAR_9;

 VAR_7->key = FUNC_4(FUNC_3(VAR_6[VAR_1]));
 switch (VAR_7->key) {
 case 132:
 case 129:



  VAR_8 = sizeof(u32);
  break;
 case 131:
  VAR_8 = sizeof(u8);
  break;
 case 130:
  VAR_8 = sizeof(u8);
  break;
 default:
  return -VAR_0;
 }

 VAR_7->sreg = FUNC_1(VAR_6[VAR_2]);
 VAR_9 = FUNC_2(VAR_7->sreg, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7->key == 131)
  FUNC_5(&VAR_3);

 return 0;
}
