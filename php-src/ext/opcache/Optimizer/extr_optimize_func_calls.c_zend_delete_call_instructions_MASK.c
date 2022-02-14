
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int var; } ;
struct TYPE_6__ {int opcode; TYPE_1__ result; int extended_value; int op1_type; } ;
typedef TYPE_2__ zend_op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;




 int VAR_3 ;
__attribute__((used)) static void FUNC_1(zend_op *VAR_4)
{
 int VAR_5 = 0;

 while (1) {
  switch (VAR_4->opcode) {
   case 135:
   case 133:
   case 132:
   case 134:
   case 136:
    if (VAR_5 == 0) {
     FUNC_0(VAR_4);
     return;
    }

   case 130:
   case 137:
   case 131:
    VAR_5--;
    break;
   case 141:
   case 139:
   case 138:
   case 140:
    VAR_5++;
    break;
   case 129:
   case 128:
    if (VAR_5 == 0) {
     if (VAR_4->op1_type == VAR_0) {
      FUNC_0(VAR_4);
     } else if (VAR_4->op1_type == VAR_1) {
      VAR_4->opcode = VAR_2;
      VAR_4->extended_value = 0;
      VAR_4->result.var = 0;
     } else {
      VAR_4->opcode = VAR_3;
      VAR_4->extended_value = 0;
      VAR_4->result.var = 0;
     }
    }
    break;
  }
  VAR_4--;
 }
}
