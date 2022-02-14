
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nlattr {int dummy; } ;
struct nft_rt {int key; int dreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;





 struct nft_rt* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,unsigned int) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_5,
      const struct nft_expr *VAR_6,
      const struct nlattr * const VAR_7[])
{
 struct nft_rt *VAR_8 = FUNC_0(VAR_6);
 unsigned int VAR_9;

 if (VAR_7[VAR_3] == ((void*)0) ||
     VAR_7[VAR_2] == ((void*)0))
  return -VAR_0;

 VAR_8->key = FUNC_4(FUNC_3(VAR_7[VAR_3]));
 switch (VAR_8->key) {



 case 131:
  VAR_9 = sizeof(u32);
  break;
 case 130:
  VAR_9 = sizeof(struct in6_addr);
  break;
 case 129:
  VAR_9 = sizeof(u16);
  break;





 default:
  return -VAR_1;
 }

 VAR_8->dreg = FUNC_1(VAR_7[VAR_2]);
 return FUNC_2(VAR_5, VAR_8->dreg, ((void*)0),
        VAR_4, VAR_9);
}
