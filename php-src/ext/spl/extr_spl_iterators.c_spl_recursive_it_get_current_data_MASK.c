
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {TYPE_2__* funcs; int data; } ;
typedef TYPE_3__ zend_object_iterator ;
struct TYPE_11__ {size_t level; TYPE_1__* iterators; } ;
typedef TYPE_4__ spl_recursive_it_object ;
struct TYPE_9__ {int * (* get_current_data ) (TYPE_3__*) ;} ;
struct TYPE_8__ {TYPE_3__* iterator; } ;


 TYPE_4__* FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static zval *FUNC_2(zend_object_iterator *VAR_0)
{
 spl_recursive_it_object *VAR_1 = FUNC_0(&VAR_0->data);
 zend_object_iterator *VAR_2 = VAR_1->iterators[VAR_1->level].iterator;

 return VAR_2->funcs->get_current_data(VAR_2);
}
