
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {scalar_t__ opcode; } ;
typedef TYPE_1__ zend_op ;
typedef int zend_bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static zend_bool FUNC_1(zend_op *VAR_3, zval *VAR_4) {


 return (VAR_3->opcode == VAR_0 && FUNC_0(VAR_4) == 0)
  || (VAR_3->opcode == VAR_2 && FUNC_0(VAR_4) == 0)
  || (VAR_3->opcode == VAR_1 && FUNC_0(VAR_4) == 1);
}
