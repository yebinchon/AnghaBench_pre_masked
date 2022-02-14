
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgdtor_param {struct xt_target* target; int family; void* targinfo; int net; } ;
struct xt_target {int (* destroy ) (struct xt_tgdtor_param*) ;struct module* me; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct nft_ctx {int family; int net; } ;
struct module {int dummy; } ;
struct TYPE_2__ {struct xt_target* data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct module*) ;
 void* FUNC_2 (struct nft_expr const*) ;
 int FUNC_3 (struct xt_tgdtor_param*) ;

__attribute__((used)) static void
FUNC_4(const struct nft_ctx *VAR_0, const struct nft_expr *VAR_1)
{
 struct xt_target *VAR_2 = VAR_1->ops->data;
 void *VAR_3 = FUNC_2(VAR_1);
 struct module *VAR_4 = VAR_2->me;
 struct xt_tgdtor_param VAR_5;

 VAR_5.net = VAR_0->net;
 VAR_5.target = VAR_2;
 VAR_5.targinfo = VAR_3;
 VAR_5.family = VAR_0->family;
 if (VAR_5.target->destroy != ((void*)0))
  VAR_5.target->destroy(&VAR_5);

 FUNC_1(VAR_4);
 FUNC_0(VAR_1->ops);
}
