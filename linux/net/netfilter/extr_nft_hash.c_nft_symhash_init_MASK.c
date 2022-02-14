
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_symhash {int offset; int modulus; int dreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct nft_symhash* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,int) ;
 int FUNC_3 (struct nlattr const* const) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_7,
       const struct nft_expr *VAR_8,
       const struct nlattr * const VAR_9[])
{
 struct nft_symhash *VAR_10 = FUNC_0(VAR_8);

 if (!VAR_9[VAR_3] ||
     !VAR_9[VAR_4])
  return -VAR_0;

 if (VAR_9[VAR_5])
  VAR_10->offset = FUNC_4(FUNC_3(VAR_9[VAR_5]));

 VAR_10->dreg = FUNC_1(VAR_9[VAR_3]);

 VAR_10->modulus = FUNC_4(FUNC_3(VAR_9[VAR_4]));
 if (VAR_10->modulus < 1)
  return -VAR_2;

 if (VAR_10->offset + VAR_10->modulus - 1 < VAR_10->offset)
  return -VAR_1;

 return FUNC_2(VAR_7, VAR_10->dreg, ((void*)0),
        VAR_6, sizeof(u32));
}
