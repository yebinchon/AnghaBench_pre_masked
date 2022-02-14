
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nft_rule {int dummy; } ;
struct TYPE_4__ {int l3num; int type; } ;
struct nft_offload_ctx {TYPE_2__ dep; struct net* net; } ;
struct nft_flow_rule {int proto; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int offload_flags; int (* offload ) (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_expr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct nft_flow_rule* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nft_offload_ctx*) ;
 struct nft_offload_ctx* FUNC_2 (int,int ) ;
 struct nft_expr* FUNC_3 (struct nft_rule const*) ;
 struct nft_expr* FUNC_4 (struct nft_rule const*) ;
 struct nft_expr* FUNC_5 (struct nft_expr*) ;
 struct nft_flow_rule* FUNC_6 (int) ;
 int FUNC_7 (struct nft_flow_rule*) ;
 int FUNC_8 (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_expr*) ;

struct nft_flow_rule *FUNC_9(struct net *VAR_5,
        const struct nft_rule *VAR_6)
{
 struct nft_offload_ctx *VAR_7;
 struct nft_flow_rule *VAR_8;
 int VAR_9 = 0, VAR_10;
 struct nft_expr *VAR_11;

 VAR_11 = FUNC_3(VAR_6);
 while (VAR_11->ops && VAR_11 != FUNC_4(VAR_6)) {
  if (VAR_11->ops->offload_flags & VAR_4)
   VAR_9++;

  VAR_11 = FUNC_5(VAR_11);
 }

 VAR_8 = FUNC_6(VAR_9);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_3(VAR_6);

 VAR_7 = FUNC_2(sizeof(struct nft_offload_ctx), VAR_2);
 if (!VAR_7) {
  VAR_10 = -VAR_0;
  goto err_out;
 }
 VAR_7->net = VAR_5;
 VAR_7->dep.type = VAR_3;

 while (VAR_11->ops && VAR_11 != FUNC_4(VAR_6)) {
  if (!VAR_11->ops->offload) {
   VAR_10 = -VAR_1;
   goto err_out;
  }
  VAR_10 = VAR_11->ops->offload(VAR_7, VAR_8, VAR_11);
  if (VAR_10 < 0)
   goto err_out;

  VAR_11 = FUNC_5(VAR_11);
 }
 VAR_8->proto = VAR_7->dep.l3num;
 FUNC_1(VAR_7);

 return VAR_8;
err_out:
 FUNC_1(VAR_7);
 FUNC_7(VAR_8);

 return FUNC_0(VAR_10);
}
