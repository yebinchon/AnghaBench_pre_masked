
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct nft_flowtable {int use; } ;
struct nft_flow_offload {struct nft_flowtable* flowtable; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int family; int net; int table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nft_flowtable*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct nft_flowtable*) ;
 int FUNC_2 (int ,int ) ;
 struct nft_flow_offload* FUNC_3 (struct nft_expr const*) ;
 struct nft_flowtable* FUNC_4 (int ,struct nlattr const* const,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct nft_ctx *VAR_2,
     const struct nft_expr *VAR_3,
     const struct nlattr * const VAR_4[])
{
 struct nft_flow_offload *VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6 = FUNC_5(VAR_2->net);
 struct nft_flowtable *VAR_7;

 if (!VAR_4[VAR_1])
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_2->table, VAR_4[VAR_1],
      VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_5->flowtable = VAR_7;
 VAR_7->use++;

 return FUNC_2(VAR_2->net, VAR_2->family);
}
