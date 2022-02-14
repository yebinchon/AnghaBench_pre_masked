
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_dup_netdev {int sreg_dev; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct nft_dup_netdev* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_2,
          const struct nft_expr *VAR_3,
          const struct nlattr * const VAR_4[])
{
 struct nft_dup_netdev *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4[VAR_1] == ((void*)0))
  return -VAR_0;

 VAR_5->sreg_dev = FUNC_1(VAR_4[VAR_1]);
 return FUNC_2(VAR_5->sreg_dev, sizeof(int));
}
