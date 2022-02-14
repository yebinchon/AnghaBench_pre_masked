
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_op_array ;
struct TYPE_3__ {int (* op_array_handler ) (int *) ;} ;
typedef TYPE_1__ zend_extension ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(zend_extension *VAR_0, zend_op_array *VAR_1)
{
 if (VAR_0->op_array_handler) {
  VAR_0->op_array_handler(VAR_1);
 }
}
