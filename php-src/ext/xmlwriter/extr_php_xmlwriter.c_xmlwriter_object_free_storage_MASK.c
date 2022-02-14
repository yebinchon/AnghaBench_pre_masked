
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {int std; int * output; int * ptr; } ;
typedef TYPE_1__ ze_xmlwriter_object ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zend_object *VAR_0)
{
 ze_xmlwriter_object *VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) {
  return;
 }
 if (VAR_1->ptr) {
  FUNC_2(VAR_1->ptr);
  VAR_1->ptr = ((void*)0);
 }
 if (VAR_1->output) {
  FUNC_1(VAR_1->output);
  VAR_1->output = ((void*)0);
 }
 FUNC_3(&VAR_1->std);
}
