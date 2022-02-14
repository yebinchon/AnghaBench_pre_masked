
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * pDestructor; } ;
struct TYPE_6__ {scalar_t__ filename; TYPE_3__ class_table; TYPE_3__ function_table; } ;
struct TYPE_7__ {TYPE_1__ script; } ;
typedef TYPE_2__ zend_persistent_script ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(zend_persistent_script *VAR_0, int VAR_1)
{
 if (!VAR_1) {
  VAR_0->script.function_table.pDestructor = ((void*)0);
  VAR_0->script.class_table.pDestructor = ((void*)0);
 }

 FUNC_1(&VAR_0->script.function_table);
 FUNC_1(&VAR_0->script.class_table);

 if (VAR_0->script.filename) {
  FUNC_2(VAR_0->script.filename, 0);
 }

 FUNC_0(VAR_0);
}
