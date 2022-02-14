
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* iterator; } ;
struct TYPE_8__ {scalar_t__ pos; } ;
struct TYPE_11__ {TYPE_3__ inner; TYPE_1__ current; } ;
typedef TYPE_4__ spl_dual_it_object ;
struct TYPE_12__ {TYPE_2__* funcs; } ;
struct TYPE_9__ {int (* rewind ) (TYPE_5__*) ;} ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static inline void FUNC_2(spl_dual_it_object *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->current.pos = 0;
 if (VAR_0->inner.iterator && VAR_0->inner.iterator->funcs->rewind) {
  VAR_0->inner.iterator->funcs->rewind(VAR_0->inner.iterator);
 }
}
