
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int count; scalar_t__ offset; } ;
struct TYPE_9__ {TYPE_2__ limit; } ;
struct TYPE_7__ {scalar_t__ pos; } ;
struct TYPE_10__ {TYPE_3__ u; TYPE_1__ current; } ;
typedef TYPE_4__ spl_dual_it_object ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static inline int FUNC_1(spl_dual_it_object *VAR_1)
{

 if (VAR_1->u.limit.count != -1 && VAR_1->current.pos >= VAR_1->u.limit.offset + VAR_1->u.limit.count) {
  return VAR_0;
 } else {
  return FUNC_0(VAR_1);
 }
}
