
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_exthdr {int offset; int len; int flags; int op; int sreg; int type; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct nft_exthdr* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nlattr const* const,int ,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct nlattr const* const) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_11,
       const struct nft_expr *VAR_12,
       const struct nlattr * const VAR_13[])
{
 struct nft_exthdr *VAR_14 = FUNC_0(VAR_12);
 u32 VAR_15, VAR_16, VAR_17 = 0, VAR_18 = VAR_9;
 int VAR_19;

 if (!VAR_13[VAR_7] ||
     !VAR_13[VAR_8] ||
     !VAR_13[VAR_5] ||
     !VAR_13[VAR_4])
  return -VAR_0;

 if (VAR_13[VAR_2] || VAR_13[VAR_3])
  return -VAR_0;

 VAR_19 = FUNC_2(VAR_13[VAR_5], VAR_10, &VAR_15);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_2(VAR_13[VAR_4], VAR_10, &VAR_16);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_15 < 2)
  return -VAR_1;

 switch (VAR_16) {
 case 2: break;
 case 4: break;
 default:
  return -VAR_1;
 }

 VAR_19 = FUNC_2(VAR_13[VAR_6], VAR_10, &VAR_18);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_14->type = FUNC_4(VAR_13[VAR_8]);
 VAR_14->offset = VAR_15;
 VAR_14->len = VAR_16;
 VAR_14->sreg = FUNC_1(VAR_13[VAR_7]);
 VAR_14->flags = VAR_17;
 VAR_14->op = VAR_18;

 return FUNC_3(VAR_14->sreg, VAR_14->len);
}
