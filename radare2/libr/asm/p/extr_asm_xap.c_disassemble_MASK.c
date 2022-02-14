
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct r_asm_op_t {int size; int buf_asm; } ;
struct TYPE_3__ {int pc; } ;
typedef TYPE_1__ RAsm ;


 int FUNC_0 (char*,int const*,int ) ;
 char* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_0, struct r_asm_op_t *VAR_1, const ut8 *VAR_2, int VAR_3) {
 char *VAR_4 = FUNC_1 (&VAR_1->buf_asm);
 FUNC_0 (VAR_4, VAR_2, VAR_0->pc);
 return (VAR_1->size = 2);
}
