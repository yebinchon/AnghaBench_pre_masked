
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct cr16_cmd {int operands; int instr; } ;
struct TYPE_3__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (int const*,struct cr16_cmd*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 struct cr16_cmd VAR_4;
 int VAR_5 = FUNC_0 (VAR_2, &VAR_4);
 FUNC_1 (&VAR_1->buf_asm, FUNC_2 ("%s %s", VAR_4.instr, VAR_4.operands));
 return VAR_1->size = VAR_5;
}
