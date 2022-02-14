
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int extended; int sign; int is_good_flag; scalar_t__ immediate; void** regs; void* reg; scalar_t__ type; } ;
struct TYPE_4__ {int has_bnd; char const* mnemonic; int is_short; int operands_count; TYPE_2__* operands; } ;
typedef int RAsm ;
typedef TYPE_1__ Opcode ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,char*,TYPE_2__*,int) ;
 int FUNC_1 (char*,char*,int) ;
 char const* FUNC_2 (char const*,int) ;
 char* FUNC_3 (char const*,char) ;
 char const* FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_6(RAsm *VAR_2, const char *VAR_3, Opcode *VAR_4) {
 VAR_4->has_bnd = 0;
 bool VAR_5 = 0;
 if (!FUNC_5 (VAR_3, "bnd ", 4)) {
  VAR_4->has_bnd = 1;
  VAR_3 += 4;
 }
 char *VAR_6 = FUNC_3 (VAR_3, ' ');
 VAR_4->mnemonic = VAR_6 ? FUNC_2 (VAR_3, VAR_6 - VAR_3) : FUNC_4 (VAR_3);
 VAR_4->operands[0].type = VAR_4->operands[1].type = 0;
 VAR_4->operands[0].extended = VAR_4->operands[1].extended = 0;
 VAR_4->operands[0].reg = VAR_4->operands[0].regs[0] = VAR_4->operands[0].regs[1] = VAR_1;
 VAR_4->operands[1].reg = VAR_4->operands[1].regs[0] = VAR_4->operands[1].regs[1] = VAR_1;
 VAR_4->operands[0].immediate = VAR_4->operands[1].immediate = 0;
 VAR_4->operands[0].sign = VAR_4->operands[1].sign = 1;
 VAR_4->operands[0].is_good_flag = VAR_4->operands[1].is_good_flag = 1;
 VAR_4->is_short = 0;
 VAR_4->operands_count = 0;
 if (VAR_6) {
  VAR_6++;
 } else {
  return 1;
 }
 if (!FUNC_1 (VAR_6, "short", 5)) {
  VAR_4->is_short = 1;
  VAR_6 += 5;
 }
 if (!FUNC_5 (VAR_4->mnemonic, "rep", 3)) {
  VAR_5 = 1;
 }
 FUNC_0 (VAR_2, VAR_6, &(VAR_4->operands[0]), VAR_5);
 VAR_4->operands_count = 1;
 while (VAR_4->operands_count < VAR_0) {
  VAR_6 = FUNC_3 (VAR_6, ',');
  if (!VAR_6) {
   break;
  }
  VAR_6++;
  FUNC_0 (VAR_2, VAR_6, &(VAR_4->operands[VAR_4->operands_count]), VAR_5);
  VAR_4->operands_count++;
 }
 return 0;
}
