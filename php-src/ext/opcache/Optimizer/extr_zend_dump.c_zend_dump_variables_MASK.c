
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int last_var; } ;
typedef TYPE_1__ zend_op_array ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,int ,int) ;

void FUNC_3(const zend_op_array *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, "\nCV Variables for \"");
 FUNC_1(VAR_2);
 FUNC_0(VAR_1, "\"\n");
 for (VAR_3 = 0; VAR_3 < VAR_2->last_var; VAR_3++) {
  FUNC_0(VAR_1, "    ");
  FUNC_2(VAR_2, VAR_0, VAR_3);
  FUNC_0(VAR_1, "\n");
 }
}
