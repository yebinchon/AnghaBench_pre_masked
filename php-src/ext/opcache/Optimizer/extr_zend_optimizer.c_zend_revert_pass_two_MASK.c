
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int fn_flags; int last; int last_literal; int * literals; TYPE_2__* opcodes; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_7__ {int op1_type; int op2_type; int result_type; int op2; int op1; } ;
typedef TYPE_2__ zend_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static void FUNC_4(zend_op_array *VAR_5)
{
 zend_op *VAR_6, *VAR_7;

 FUNC_0((VAR_5->fn_flags & VAR_4) != 0);

 VAR_6 = VAR_5->opcodes;
 VAR_7 = VAR_6 + VAR_5->last;
 while (VAR_6 < VAR_7) {
  if (VAR_6->op1_type == VAR_0) {
   FUNC_1(VAR_5, VAR_6, VAR_6->op1);
  }
  if (VAR_6->op2_type == VAR_0) {
   FUNC_1(VAR_5, VAR_6, VAR_6->op2);
  }

  VAR_6->result_type &= (VAR_2|VAR_3|VAR_1|VAR_0);
  VAR_6++;
 }

 if (VAR_5->literals) {
  zval *VAR_8 = FUNC_2(sizeof(zval) * VAR_5->last_literal);
  FUNC_3(VAR_8, VAR_5->literals, sizeof(zval) * VAR_5->last_literal);
  VAR_5->literals = VAR_8;
 }


 VAR_5->fn_flags &= ~VAR_4;
}
