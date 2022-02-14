
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object_iterator ;
typedef int zend_object ;
struct TYPE_4__ {size_t level; TYPE_3__* iterators; } ;
typedef TYPE_1__ spl_recursive_it_object ;
struct TYPE_5__ {int zobject; int * iterator; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_0)
{
 spl_recursive_it_object *VAR_1 = FUNC_1(VAR_0);
 zend_object_iterator *VAR_2;


 FUNC_3(VAR_0);

 if (VAR_1->iterators) {
  while (VAR_1->level >= 0) {
   VAR_2 = VAR_1->iterators[VAR_1->level].iterator;
   FUNC_2(VAR_2);
   FUNC_4(&VAR_1->iterators[VAR_1->level--].zobject);
  }
  FUNC_0(VAR_1->iterators);
  VAR_1->iterators = ((void*)0);
 }
}
