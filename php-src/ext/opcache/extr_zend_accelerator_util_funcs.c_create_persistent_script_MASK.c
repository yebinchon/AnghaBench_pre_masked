
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int class_table; int function_table; } ;
struct TYPE_6__ {TYPE_1__ script; } ;
typedef TYPE_2__ zend_persistent_script ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *,int ,int *,int ,int ) ;

zend_persistent_script* FUNC_3(void)
{
 zend_persistent_script *VAR_2 = (zend_persistent_script *) FUNC_0(sizeof(zend_persistent_script));
 FUNC_1(VAR_2, 0, sizeof(zend_persistent_script));

 FUNC_2(&VAR_2->script.function_table, 0, ((void*)0), VAR_1, 0);




 FUNC_2(&VAR_2->script.class_table, 0, ((void*)0), VAR_0, 0);

 return VAR_2;
}
