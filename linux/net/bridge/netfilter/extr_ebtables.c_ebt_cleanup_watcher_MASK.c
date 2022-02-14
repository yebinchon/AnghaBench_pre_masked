
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgdtor_param {TYPE_1__* target; int family; int targinfo; struct net* net; } ;
struct net {int dummy; } ;
struct TYPE_4__ {TYPE_1__* watcher; } ;
struct ebt_entry_watcher {int data; TYPE_2__ u; } ;
struct TYPE_3__ {int me; int (* destroy ) (struct xt_tgdtor_param*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xt_tgdtor_param*) ;

__attribute__((used)) static inline int
FUNC_2(struct ebt_entry_watcher *VAR_1, struct net *VAR_2, unsigned int *VAR_3)
{
 struct xt_tgdtor_param VAR_4;

 if (VAR_3 && (*VAR_3)-- == 0)
  return 1;

 VAR_4.net = VAR_2;
 VAR_4.target = VAR_1->u.watcher;
 VAR_4.targinfo = VAR_1->data;
 VAR_4.family = VAR_0;
 if (VAR_4.target->destroy != ((void*)0))
  VAR_4.target->destroy(&VAR_4);
 FUNC_0(VAR_4.target->me);
 return 0;
}
