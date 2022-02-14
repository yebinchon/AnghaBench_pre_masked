
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_tunnel {int key; scalar_t__ mode; int dreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

 struct nft_tunnel* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,int) ;
 int FUNC_3 (struct nlattr const* const) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_8,
          const struct nft_expr *VAR_9,
          const struct nlattr * const VAR_10[])
{
 struct nft_tunnel *VAR_11 = FUNC_0(VAR_9);
 u32 VAR_12;

 if (!VAR_10[VAR_3] &&
     !VAR_10[VAR_2])
  return -VAR_0;

 VAR_11->key = FUNC_4(FUNC_3(VAR_10[VAR_3]));
 switch (VAR_11->key) {
 case 128:
  VAR_12 = sizeof(u8);
  break;
 case 129:
  VAR_12 = sizeof(u32);
  break;
 default:
  return -VAR_1;
 }

 VAR_11->dreg = FUNC_1(VAR_10[VAR_2]);

 if (VAR_10[VAR_4]) {
  VAR_11->mode = FUNC_4(FUNC_3(VAR_10[VAR_4]));
  if (VAR_11->mode > VAR_6)
   return -VAR_1;
 } else {
  VAR_11->mode = VAR_7;
 }

 return FUNC_2(VAR_8, VAR_11->dreg, ((void*)0),
        VAR_5, VAR_12);
}
