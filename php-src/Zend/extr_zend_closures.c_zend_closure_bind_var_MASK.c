
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_4__ {int static_variables_ptr; } ;
struct TYPE_5__ {TYPE_1__ op_array; } ;
struct TYPE_6__ {TYPE_2__ func; } ;
typedef TYPE_3__ zend_closure ;
typedef int HashTable ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;

void FUNC_3(zval *VAR_0, zend_string *VAR_1, zval *VAR_2)
{
 zend_closure *VAR_3 = (zend_closure *) FUNC_1(VAR_0);
 HashTable *VAR_4 = FUNC_0(VAR_3->func.op_array.static_variables_ptr);
 FUNC_2(VAR_4, VAR_1, VAR_2);
}
