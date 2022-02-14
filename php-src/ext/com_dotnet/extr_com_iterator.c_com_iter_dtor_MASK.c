
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct php_com_iterator {int zdata; int safe_array; int v; scalar_t__ ev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zend_object_iterator *VAR_0)
{
 struct php_com_iterator *VAR_1 = (struct php_com_iterator*)FUNC_2(VAR_0->data);

 if (VAR_1->ev) {
  FUNC_0(VAR_1->ev);
 }
 FUNC_1(&VAR_1->v);
 FUNC_1(&VAR_1->safe_array);
 FUNC_3(&VAR_1->zdata);
}
