
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_op_array ;
struct TYPE_8__ {int num; } ;
struct TYPE_7__ {int num; } ;
struct TYPE_9__ {scalar_t__ opcode; TYPE_2__ op1; TYPE_1__ op2; } ;
typedef TYPE_3__ zend_op ;
struct TYPE_10__ {int parent; int cont; int brk; } ;
typedef TYPE_4__ zend_brk_cont_element ;
typedef int uint32_t ;
struct TYPE_11__ {TYPE_4__* brk_cont_array; } ;


 TYPE_6__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_1(const zend_op_array *VAR_2, const zend_op *VAR_3) {
 int VAR_4 = VAR_3->op2.num;
 int VAR_5 = VAR_3->op1.num;
 zend_brk_cont_element *VAR_6;
 do {
  VAR_6 = &FUNC_0(VAR_1).brk_cont_array[VAR_5];
  if (VAR_4 > 1) {
   VAR_5 = VAR_6->parent;
  }
 } while (--VAR_4 > 0);

 return VAR_3->opcode == VAR_0 ? VAR_6->brk : VAR_6->cont;
}
