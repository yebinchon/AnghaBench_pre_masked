
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset_sign; int * scale; int offset; int type; int reg; int * regs; } ;
typedef int RAsm ;
typedef TYPE_1__ Operand ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static void FUNC_2(RAsm *VAR_1, const char *VAR_2, size_t *VAR_3,
  Operand *VAR_4, int VAR_5) {
 int VAR_6 = *VAR_3;
 char *VAR_7 = FUNC_1 (VAR_2 + VAR_6, ':');
 if (VAR_7) {
  VAR_6 ++;
  VAR_7 = FUNC_1 (VAR_2 + VAR_6, '[');
  if (VAR_7) {VAR_6 ++;}


  VAR_4->regs[VAR_5] = VAR_4->reg;
  VAR_4->type |= VAR_0;
  VAR_4->offset_sign = 1;
  char *VAR_8 = FUNC_1 (VAR_2 + VAR_6, '-');
  if (VAR_8) {
   VAR_4->offset_sign = -1;
   VAR_6 ++;
  }
  VAR_4->scale[VAR_5] = FUNC_0 (VAR_1, VAR_2 + VAR_6);
  VAR_4->offset = VAR_4->scale[VAR_5];
 }
}
