
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_6__ {scalar_t__ corrupted; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(zval *VAR_2)
{
 zend_op_array *VAR_3 = FUNC_4(VAR_2);

 FUNC_3(VAR_3->type == VAR_0);
 FUNC_1(sizeof(zend_op_array));
 FUNC_5(FUNC_4(VAR_2));
 if (FUNC_2(VAR_1)->corrupted) {
  FUNC_0(sizeof(void*));
 }
}
