
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int static_variables_ptr; } ;
struct TYPE_7__ {TYPE_1__ op_array; } ;
struct TYPE_8__ {TYPE_2__ func; } ;
typedef TYPE_3__ zend_closure ;
typedef int uint32_t ;
struct TYPE_9__ {scalar_t__ arData; } ;
typedef TYPE_4__ HashTable ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zval *VAR_0, uint32_t VAR_1, zval *VAR_2)
{
 zend_closure *VAR_3 = (zend_closure *) FUNC_2(VAR_0);
 HashTable *VAR_4 = FUNC_0(VAR_3->func.op_array.static_variables_ptr);
 zval *VAR_5 = (zval*)((char*)VAR_4->arData + VAR_1);
 FUNC_3(VAR_5);
 FUNC_1(VAR_5, VAR_2);
}
