
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pos; } ;
struct TYPE_9__ {TYPE_5__* iterator; } ;
struct TYPE_11__ {TYPE_3__ current; TYPE_2__ inner; } ;
typedef TYPE_4__ spl_dual_it_object ;
struct TYPE_12__ {TYPE_1__* funcs; } ;
struct TYPE_8__ {int (* move_forward ) (TYPE_5__*) ;} ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static inline void FUNC_3(spl_dual_it_object *VAR_0, int VAR_1)
{
 if (VAR_1) {
  FUNC_0(VAR_0);
 } else if (!VAR_0->inner.iterator) {
  FUNC_2(((void*)0), "The inner constructor wasn't initialized with an iterator instance");
  return;
 }
 VAR_0->inner.iterator->funcs->move_forward(VAR_0->inner.iterator);
 VAR_0->current.pos++;
}
