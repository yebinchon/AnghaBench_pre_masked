
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_set {int flags; int dlen; int dtype; int klen; } ;
struct TYPE_2__ {int flags; } ;
struct nft_lookup {int invert; struct nft_set* set; TYPE_1__ binding; void* dreg; void* sreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int table; int net; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nft_set*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct nft_set*) ;
 int FUNC_2 (struct nft_ctx const*,struct nft_set*,TYPE_1__*) ;
 struct nft_lookup* FUNC_3 (struct nft_expr const*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct nlattr const* const) ;
 struct nft_set* FUNC_6 (int ,int ,struct nlattr const* const,struct nlattr const* const,int ) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (struct nft_ctx const*,void*,int *,int ,int ) ;
 int FUNC_9 (struct nlattr const* const) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(const struct nft_ctx *VAR_8,
      const struct nft_expr *VAR_9,
      const struct nlattr * const VAR_10[])
{
 struct nft_lookup *VAR_11 = FUNC_3(VAR_9);
 u8 VAR_12 = FUNC_4(VAR_8->net);
 struct nft_set *VAR_13;
 u32 VAR_14;
 int VAR_15;

 if (VAR_10[VAR_3] == ((void*)0) ||
     VAR_10[VAR_5] == ((void*)0))
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_8->net, VAR_8->table, VAR_10[VAR_3],
        VAR_10[VAR_4], VAR_12);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_11->sreg = FUNC_5(VAR_10[VAR_5]);
 VAR_15 = FUNC_7(VAR_11->sreg, VAR_13->klen);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_10[VAR_2]) {
  VAR_14 = FUNC_10(FUNC_9(VAR_10[VAR_2]));

  if (VAR_14 & ~VAR_6)
   return -VAR_0;

  if (VAR_14 & VAR_6) {
   if (VAR_13->flags & VAR_7)
    return -VAR_0;
   VAR_11->invert = 1;
  }
 }

 if (VAR_10[VAR_1] != ((void*)0)) {
  if (VAR_11->invert)
   return -VAR_0;
  if (!(VAR_13->flags & VAR_7))
   return -VAR_0;

  VAR_11->dreg = FUNC_5(VAR_10[VAR_1]);
  VAR_15 = FUNC_8(VAR_8, VAR_11->dreg, ((void*)0),
        VAR_13->dtype, VAR_13->dlen);
  if (VAR_15 < 0)
   return VAR_15;
 } else if (VAR_13->flags & VAR_7)
  return -VAR_0;

 VAR_11->binding.flags = VAR_13->flags & VAR_7;

 VAR_15 = FUNC_2(VAR_8, VAR_13, &VAR_11->binding);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_11->set = VAR_13;
 return 0;
}
