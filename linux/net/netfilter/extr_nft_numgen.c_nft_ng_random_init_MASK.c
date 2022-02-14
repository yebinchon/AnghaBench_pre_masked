
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_ng_random {int offset; int modulus; int dreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct nft_ng_random* FUNC_0 (struct nft_expr const*) ;
 int VAR_6 ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,int) ;
 int FUNC_3 (struct nlattr const* const) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const struct nft_ctx *VAR_7,
         const struct nft_expr *VAR_8,
         const struct nlattr * const VAR_9[])
{
 struct nft_ng_random *VAR_10 = FUNC_0(VAR_8);

 if (VAR_9[VAR_4])
  VAR_10->offset = FUNC_4(FUNC_3(VAR_9[VAR_4]));

 VAR_10->modulus = FUNC_4(FUNC_3(VAR_9[VAR_3]));
 if (VAR_10->modulus == 0)
  return -VAR_1;

 if (VAR_10->offset + VAR_10->modulus - 1 < VAR_10->offset)
  return -VAR_0;

 FUNC_5(&VAR_6);

 VAR_10->dreg = FUNC_1(VAR_9[VAR_2]);

 return FUNC_2(VAR_7, VAR_10->dreg, ((void*)0),
        VAR_5, sizeof(u32));
}
