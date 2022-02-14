
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {int index; TYPE_2__* funcs; int data; } ;
typedef TYPE_3__ zend_object_iterator ;
struct TYPE_11__ {size_t level; TYPE_1__* iterators; } ;
typedef TYPE_4__ spl_recursive_it_object ;
struct TYPE_9__ {int (* get_current_key ) (TYPE_3__*,int *) ;} ;
struct TYPE_8__ {TYPE_3__* iterator; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_0, zval *VAR_1)
{
 spl_recursive_it_object *VAR_2 = FUNC_1(&VAR_0->data);
 zend_object_iterator *VAR_3 = VAR_2->iterators[VAR_2->level].iterator;

 if (VAR_3->funcs->get_current_key) {
  VAR_3->funcs->get_current_key(VAR_3, VAR_1);
 } else {
  FUNC_0(VAR_1, VAR_0->index);
 }
}
