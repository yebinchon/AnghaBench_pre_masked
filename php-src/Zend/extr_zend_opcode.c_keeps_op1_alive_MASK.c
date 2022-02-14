
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ opcode; } ;
typedef TYPE_1__ zend_op ;
typedef int zend_bool ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static zend_bool FUNC_1(zend_op *VAR_11) {


 if (VAR_11->opcode == VAR_1
  || VAR_11->opcode == VAR_8
  || VAR_11->opcode == VAR_3
  || VAR_11->opcode == VAR_2) {
  return 1;
 }
 FUNC_0(VAR_11->opcode != VAR_9
  && VAR_11->opcode != VAR_5
  && VAR_11->opcode != VAR_6
  && VAR_11->opcode != VAR_4
  && VAR_11->opcode != VAR_10
  && VAR_11->opcode != VAR_0
  && VAR_11->opcode != VAR_7);
 return 0;
}
