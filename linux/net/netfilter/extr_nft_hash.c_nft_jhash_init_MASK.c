
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct nft_jhash {int offset; int modulus; int autogen_seed; void* dreg; void* sreg; void* seed; scalar_t__ len; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void**,int) ;
 struct nft_jhash* FUNC_1 (struct nft_expr const*) ;
 void* FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (struct nlattr const* const,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (void*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct nft_ctx const*,void*,int *,int ,int) ;
 int FUNC_6 (struct nlattr const* const) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct nft_ctx *VAR_11,
     const struct nft_expr *VAR_12,
     const struct nlattr * const VAR_13[])
{
 struct nft_jhash *VAR_14 = FUNC_1(VAR_12);
 u32 VAR_15;
 int VAR_16;

 if (!VAR_13[VAR_8] ||
     !VAR_13[VAR_3] ||
     !VAR_13[VAR_4] ||
     !VAR_13[VAR_5])
  return -VAR_0;

 if (VAR_13[VAR_6])
  VAR_14->offset = FUNC_7(FUNC_6(VAR_13[VAR_6]));

 VAR_14->sreg = FUNC_2(VAR_13[VAR_8]);
 VAR_14->dreg = FUNC_2(VAR_13[VAR_3]);

 VAR_16 = FUNC_3(VAR_13[VAR_4], VAR_10, &VAR_15);
 if (VAR_16 < 0)
  return VAR_16;
 if (VAR_15 == 0)
  return -VAR_2;

 VAR_14->len = VAR_15;

 VAR_14->modulus = FUNC_7(FUNC_6(VAR_13[VAR_5]));
 if (VAR_14->modulus < 1)
  return -VAR_2;

 if (VAR_14->offset + VAR_14->modulus - 1 < VAR_14->offset)
  return -VAR_1;

 if (VAR_13[VAR_7]) {
  VAR_14->seed = FUNC_7(FUNC_6(VAR_13[VAR_7]));
 } else {
  VAR_14->autogen_seed = 1;
  FUNC_0(&VAR_14->seed, sizeof(VAR_14->seed));
 }

 return FUNC_4(VAR_14->sreg, VAR_15) &&
        FUNC_5(VAR_11, VAR_14->dreg, ((void*)0),
        VAR_9, sizeof(u32));
}
