
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_object_iterator ;
typedef int spl_sub_iterator ;
struct TYPE_8__ {size_t level; TYPE_4__* iterators; } ;
typedef TYPE_2__ spl_recursive_it_object ;
struct TYPE_7__ {int data; } ;
struct TYPE_9__ {TYPE_1__ intern; } ;
typedef TYPE_3__ spl_recursive_it_iterator ;
struct TYPE_10__ {int zobject; int * iterator; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_object_iterator *VAR_0)
{
 spl_recursive_it_iterator *VAR_1 = (spl_recursive_it_iterator*)VAR_0;
 spl_recursive_it_object *VAR_2 = FUNC_1(&VAR_1->intern.data);
 zend_object_iterator *VAR_3;

 while (VAR_2->level > 0) {
  if (!FUNC_0(VAR_2->iterators[VAR_2->level].zobject)) {
   VAR_3 = VAR_2->iterators[VAR_2->level].iterator;
   FUNC_3(VAR_3);
   FUNC_4(&VAR_2->iterators[VAR_2->level].zobject);
  }
  VAR_2->level--;
 }
 VAR_2->iterators = FUNC_2(VAR_2->iterators, sizeof(spl_sub_iterator));
 VAR_2->level = 0;

 FUNC_4(&VAR_1->intern.data);
}
