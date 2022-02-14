
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_10__ {int invhex; int pc; } ;
struct TYPE_9__ {int value; int addr; int member_0; } ;
struct TYPE_8__ {int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsmLm32Instruction ;
typedef TYPE_3__ RAsm ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 RAsmLm32Instruction VAR_4 = {0};
 VAR_4.value = VAR_2[0] << 24 | VAR_2[1] << 16 | VAR_2[2] << 8 | VAR_2[3];
 VAR_4.addr = VAR_0->pc;
 if (FUNC_0 (&VAR_4)) {
  FUNC_3 (&VAR_1->buf_asm, "invalid");
  VAR_0->invhex = 1;
  return -1;
 }

 if (FUNC_1 (&VAR_4, FUNC_2 (&VAR_1->buf_asm))) {
  FUNC_3 (&VAR_1->buf_asm, "invalid");
  VAR_0->invhex = 1;
  return -1;
 }
 return 4;
}
