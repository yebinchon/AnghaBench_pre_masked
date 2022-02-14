
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_mtdtor_param {struct xt_match* match; int family; void* matchinfo; int net; } ;
struct xt_match {int (* destroy ) (struct xt_mtdtor_param*) ;struct module* me; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct nft_ctx {int family; int net; } ;
struct module {int dummy; } ;
struct TYPE_2__ {struct xt_match* data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (struct xt_mtdtor_param*) ;

__attribute__((used)) static void
FUNC_3(const struct nft_ctx *VAR_0, const struct nft_expr *VAR_1,
      void *VAR_2)
{
 struct xt_match *VAR_3 = VAR_1->ops->data;
 struct module *VAR_4 = VAR_3->me;
 struct xt_mtdtor_param VAR_5;

 VAR_5.net = VAR_0->net;
 VAR_5.match = VAR_3;
 VAR_5.matchinfo = VAR_2;
 VAR_5.family = VAR_0->family;
 if (VAR_5.match->destroy != ((void*)0))
  VAR_5.match->destroy(&VAR_5);

 FUNC_1(VAR_4);
 FUNC_0(VAR_1->ops);
}
