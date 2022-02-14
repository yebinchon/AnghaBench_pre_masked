
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {int rate; int nsecs; } ;
struct nft_limit_pkts {TYPE_1__ limit; int cost; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct nft_limit_pkts* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (TYPE_1__*,struct nlattr const* const*,int) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_0,
          const struct nft_expr *VAR_1,
          const struct nlattr * const VAR_2[])
{
 struct nft_limit_pkts *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_3->limit, VAR_2, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->cost = FUNC_0(VAR_3->limit.nsecs, VAR_3->limit.rate);
 return 0;
}
