
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* iterator; } ;
struct TYPE_12__ {TYPE_2__ append; } ;
struct TYPE_13__ {TYPE_3__ u; } ;
typedef TYPE_4__ spl_dual_it_object ;
struct TYPE_14__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int (* move_forward ) (TYPE_5__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*) ;

void FUNC_4(spl_dual_it_object *VAR_1)
{
 while (FUNC_2(VAR_1) != VAR_0) {
  VAR_1->u.append.iterator->funcs->move_forward(VAR_1->u.append.iterator);
  if (FUNC_0(VAR_1) != VAR_0) {
   return;
  }
 }
 FUNC_1(VAR_1, 0);
}
