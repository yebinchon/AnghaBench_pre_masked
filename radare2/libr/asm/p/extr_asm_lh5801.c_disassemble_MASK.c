
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct lh5801_insn {int member_0; } ;
typedef int buf_asm ;
struct TYPE_3__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (struct lh5801_insn*,int const*,int) ;
 int FUNC_1 (char*,int,struct lh5801_insn*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 struct lh5801_insn VAR_4 = {0};
 if (!VAR_1) {
  return 0;
 }
 int VAR_5 = FUNC_0 (&VAR_4, VAR_2, VAR_3);
 if (VAR_5 == -1 || VAR_5 == 0) {
  FUNC_2 (&VAR_1->buf_asm, "invalid");
  VAR_1->size = 1;
  return 0;
 }
 char VAR_6[128] = {0};
 FUNC_1 (VAR_6, sizeof (VAR_6), &VAR_4);
 FUNC_2 (&VAR_1->buf_asm, VAR_6);
 VAR_1->size = VAR_5;


 return VAR_1->size;
}
