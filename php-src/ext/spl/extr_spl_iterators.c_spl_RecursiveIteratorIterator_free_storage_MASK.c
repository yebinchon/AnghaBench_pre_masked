
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {int * postfix; int * prefix; int std; scalar_t__ level; int * iterators; } ;
typedef TYPE_1__ spl_recursive_it_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zend_object *VAR_0)
{
 spl_recursive_it_object *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->iterators) {
  FUNC_0(VAR_1->iterators);
  VAR_1->iterators = ((void*)0);
  VAR_1->level = 0;
 }

 FUNC_3(&VAR_1->std);
 FUNC_1(&VAR_1->prefix[0]);
 FUNC_1(&VAR_1->prefix[1]);
 FUNC_1(&VAR_1->prefix[2]);
 FUNC_1(&VAR_1->prefix[3]);
 FUNC_1(&VAR_1->prefix[4]);
 FUNC_1(&VAR_1->prefix[5]);

 FUNC_1(&VAR_1->postfix[0]);
}
