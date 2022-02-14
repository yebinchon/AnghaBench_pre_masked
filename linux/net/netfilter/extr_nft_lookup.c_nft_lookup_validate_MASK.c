
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nft_set_iter {scalar_t__ err; int fn; scalar_t__ count; scalar_t__ skip; int genmask; } ;
struct nft_lookup {TYPE_2__* set; } ;
struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int net; } ;
struct TYPE_4__ {int flags; scalar_t__ dtype; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* walk ) (struct nft_ctx const*,TYPE_2__*,struct nft_set_iter*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct nft_lookup* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct nft_ctx const*,TYPE_2__*,struct nft_set_iter*) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_3,
          const struct nft_expr *VAR_4,
          const struct nft_data **VAR_5)
{
 const struct nft_lookup *VAR_6 = FUNC_0(VAR_4);
 struct nft_set_iter VAR_7;

 if (!(VAR_6->set->flags & VAR_1) ||
     VAR_6->set->dtype != VAR_0)
  return 0;

 VAR_7.genmask = FUNC_1(VAR_3->net);
 VAR_7.skip = 0;
 VAR_7.count = 0;
 VAR_7.err = 0;
 VAR_7.fn = VAR_2;

 VAR_6->set->ops->walk(VAR_3, VAR_6->set, &VAR_7);
 if (VAR_7.err < 0)
  return VAR_7.err;

 return 0;
}
