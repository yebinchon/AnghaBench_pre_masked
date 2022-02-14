
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct msp430_cmd {int instr; scalar_t__* operands; } ;
struct TYPE_6__ {scalar_t__ syntax; } ;
struct TYPE_5__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*,int,struct msp430_cmd*) ;
 int FUNC_1 (char*,char,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int FUNC_5(RAsm *VAR_1, RAsmOp *VAR_2, const ut8 *VAR_3, int VAR_4) {
 struct msp430_cmd VAR_5;
 int VAR_6 = FUNC_0 (VAR_3, VAR_4, &VAR_5);
 if (VAR_6 > 0) {
  if (VAR_5.operands[0]) {
   FUNC_3 (&VAR_2->buf_asm, FUNC_4 ("%s %s", VAR_5.instr, VAR_5.operands));
  } else {
   FUNC_3 (&VAR_2->buf_asm, FUNC_4 ("%s", VAR_5.instr));
  }
 }
 if (VAR_1->syntax != VAR_0) {
  char *VAR_7 = (char *)FUNC_2 (&VAR_2->buf_asm);
  FUNC_1 (VAR_7, '#', 0, 1);

  FUNC_1 (VAR_7, '&', 0, 1);
  FUNC_1 (VAR_7, '%', 0, 1);
 }

 return VAR_2->size = VAR_6;
}
