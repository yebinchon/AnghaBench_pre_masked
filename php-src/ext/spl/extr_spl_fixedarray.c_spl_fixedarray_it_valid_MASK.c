
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_2__ zend_object_iterator ;
struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_9__ {int flags; scalar_t__ current; TYPE_1__ array; } ;
typedef TYPE_3__ spl_fixedarray_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(zend_object_iterator *VAR_3)
{
 spl_fixedarray_object *VAR_4 = FUNC_0(&VAR_3->data);

 if (VAR_4->flags & VAR_1) {
  return FUNC_1(VAR_3);
 }

 if (VAR_4->current >= 0 && VAR_4->current < VAR_4->array.size) {
  return VAR_2;
 }

 return VAR_0;
}
