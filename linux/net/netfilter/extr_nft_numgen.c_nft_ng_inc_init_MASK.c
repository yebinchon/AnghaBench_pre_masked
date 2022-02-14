
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_ng_inc {int offset; int modulus; int dreg; int counter; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 struct nft_ng_inc* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (struct nft_ctx const*,int ,int *,int ,int) ;
 int FUNC_4 (struct nlattr const* const) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct nft_ctx *VAR_6,
      const struct nft_expr *VAR_7,
      const struct nlattr * const VAR_8[])
{
 struct nft_ng_inc *VAR_9 = FUNC_1(VAR_7);

 if (VAR_8[VAR_4])
  VAR_9->offset = FUNC_5(FUNC_4(VAR_8[VAR_4]));

 VAR_9->modulus = FUNC_5(FUNC_4(VAR_8[VAR_3]));
 if (VAR_9->modulus == 0)
  return -VAR_1;

 if (VAR_9->offset + VAR_9->modulus - 1 < VAR_9->offset)
  return -VAR_0;

 VAR_9->dreg = FUNC_2(VAR_8[VAR_2]);
 FUNC_0(&VAR_9->counter, VAR_9->modulus - 1);

 return FUNC_3(VAR_6, VAR_9->dreg, ((void*)0),
        VAR_5, sizeof(u32));
}
