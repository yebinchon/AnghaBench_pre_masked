
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ opcode; } ;
typedef TYPE_1__ zend_op ;
typedef int zend_bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static zend_bool FUNC_0(zend_op *VAR_3) {

 return VAR_3->opcode == VAR_2
  || VAR_3->opcode == VAR_0
  || VAR_3->opcode == VAR_1;
}
