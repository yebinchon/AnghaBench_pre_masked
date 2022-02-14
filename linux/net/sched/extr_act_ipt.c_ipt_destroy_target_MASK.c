
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgdtor_param {TYPE_3__* target; struct net* net; int family; int targinfo; } ;
struct TYPE_4__ {TYPE_3__* target; } ;
struct TYPE_5__ {TYPE_1__ kernel; } ;
struct xt_entry_target {int data; TYPE_2__ u; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int me; int (* destroy ) (struct xt_tgdtor_param*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xt_tgdtor_param*) ;

__attribute__((used)) static void FUNC_2(struct xt_entry_target *VAR_1, struct net *VAR_2)
{
 struct xt_tgdtor_param VAR_3 = {
  .target = VAR_1->u.kernel.target,
  .targinfo = VAR_1->data,
  .family = VAR_0,
  .net = VAR_2,
 };
 if (VAR_3.target->destroy != ((void*)0))
  VAR_3.target->destroy(&VAR_3);
 FUNC_0(VAR_3.target->me);
}
