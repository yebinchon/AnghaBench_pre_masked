
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* iterator; } ;
struct TYPE_8__ {TYPE_2__ inner; } ;
typedef TYPE_3__ spl_dual_it_object ;
struct TYPE_9__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {int (* valid ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static inline int FUNC_1(spl_dual_it_object *VAR_1)
{
 if (!VAR_1->inner.iterator) {
  return VAR_0;
 }

 return VAR_1->inner.iterator->funcs->valid(VAR_1->inner.iterator);
}
