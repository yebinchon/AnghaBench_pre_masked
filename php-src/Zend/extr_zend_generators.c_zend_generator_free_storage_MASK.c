
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_5__ {int ht; } ;
struct TYPE_6__ {int children; TYPE_1__ child; } ;
struct TYPE_7__ {scalar_t__ iterator; int std; TYPE_2__ node; int retval; int key; int value; } ;
typedef TYPE_3__ zend_generator ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(zend_object *VAR_0)
{
 zend_generator *VAR_1 = (zend_generator*) VAR_0;

 FUNC_4(VAR_1, 0);


 FUNC_8(&VAR_1->value);
 FUNC_8(&VAR_1->key);

 if (FUNC_0(!FUNC_2(VAR_1->retval))) {
  FUNC_8(&VAR_1->retval);
 }

 if (FUNC_1(VAR_1->node.children > 1)) {
  FUNC_5(VAR_1->node.child.ht);
  FUNC_3(VAR_1->node.child.ht);
 }

 FUNC_7(&VAR_1->std);

 if (VAR_1->iterator) {
  FUNC_6(VAR_1->iterator);
 }
}
