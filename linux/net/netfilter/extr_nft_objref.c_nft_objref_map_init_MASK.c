
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nlattr {int dummy; } ;
struct nft_set {int flags; int klen; } ;
struct TYPE_2__ {int flags; } ;
struct nft_objref_map {struct nft_set* set; TYPE_1__ binding; int sreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int table; int net; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nft_set*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nft_set*) ;
 int FUNC_2 (struct nft_ctx const*,struct nft_set*,TYPE_1__*) ;
 struct nft_objref_map* FUNC_3 (struct nft_expr const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nlattr const* const) ;
 struct nft_set* FUNC_6 (int ,int ,struct nlattr const* const,struct nlattr const* const,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(const struct nft_ctx *VAR_5,
          const struct nft_expr *VAR_6,
          const struct nlattr * const VAR_7[])
{
 struct nft_objref_map *VAR_8 = FUNC_3(VAR_6);
 u8 VAR_9 = FUNC_4(VAR_5->net);
 struct nft_set *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(VAR_5->net, VAR_5->table,
        VAR_7[VAR_2],
        VAR_7[VAR_1], VAR_9);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 if (!(VAR_10->flags & VAR_4))
  return -VAR_0;

 VAR_8->sreg = FUNC_5(VAR_7[VAR_3]);
 VAR_11 = FUNC_7(VAR_8->sreg, VAR_10->klen);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8->binding.flags = VAR_10->flags & VAR_4;

 VAR_11 = FUNC_2(VAR_5, VAR_10, &VAR_8->binding);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8->set = VAR_10;
 return 0;
}
