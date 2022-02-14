
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct nlattr {int dummy; } ;
struct nft_meta {int key; int dreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct nft_meta* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int VAR_5 ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,unsigned int) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(const struct nft_ctx *VAR_6,
        const struct nft_expr *VAR_7,
        const struct nlattr * const VAR_8[])
{
 struct nft_meta *VAR_9 = FUNC_0(VAR_7);
 unsigned int VAR_10;

 VAR_9->key = FUNC_4(FUNC_3(VAR_8[VAR_3]));
 switch (VAR_9->key) {
 case 136:
 case 149:
 case 140:
  VAR_10 = sizeof(u16);
  break;
 case 145:
 case 148:
 case 147:
 case 137:
 case 146:
 case 153:
 case 144:
 case 131:
 case 132:






 case 139:
 case 154:
 case 152:
 case 143:



  VAR_10 = sizeof(u32);
  break;
 case 150:
 case 141:
 case 151:
 case 142:
  VAR_10 = VAR_1;
  break;
 case 138:
  FUNC_5(&VAR_5);
  VAR_10 = sizeof(u32);
  break;





 case 128:
  VAR_10 = sizeof(u64);
  break;
 case 130:
  VAR_10 = sizeof(u8);
  break;
 case 129:
  VAR_10 = sizeof(u32);
  break;
 default:
  return -VAR_0;
 }

 VAR_9->dreg = FUNC_1(VAR_8[VAR_2]);
 return FUNC_2(VAR_6, VAR_9->dreg, ((void*)0),
        VAR_4, VAR_10);
}
