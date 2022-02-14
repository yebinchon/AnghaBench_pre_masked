
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int op_array; int size; } ;
typedef TYPE_1__ zend_extension_persist_data ;
struct TYPE_6__ {scalar_t__ (* op_array_persist_calc ) (int ) ;} ;
typedef TYPE_2__ zend_extension ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(zend_extension *VAR_0, zend_extension_persist_data *VAR_1)
{
 if (VAR_0->op_array_persist_calc) {
  VAR_1->size += VAR_0->op_array_persist_calc(VAR_1->op_array);
 }
}
