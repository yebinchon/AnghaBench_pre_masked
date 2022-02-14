
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int ut16 ;
struct winedbg_arm_insn {void* str_asm; } ;


 size_t FUNC_0 (int,int) ;
 void* FUNC_1 (void*,char*,int ,int ,int ,...) ;
 int * VAR_0 ;

__attribute__((used)) static ut32 FUNC_2(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 ut16 VAR_3 = (VAR_2 >> 20) & 0x07;
 ut16 VAR_4 = (VAR_2 >> 4) & 0x03;

 if (VAR_3) {
  return VAR_2;
 }

 if (VAR_4 == 0 && FUNC_0 (VAR_2, 3) != 0xf) {
  VAR_1->str_asm = FUNC_1 (VAR_1->str_asm, "mla %s, %s, %s, %s ", VAR_0[FUNC_0 (VAR_2, 2)],
    VAR_0[FUNC_0 (VAR_2, 4)],
    VAR_0[FUNC_0 (VAR_2, 0)],
    VAR_0[FUNC_0 (VAR_2, 3)]);
  return 0;
 }

 if (VAR_4 == 0 && FUNC_0 (VAR_2, 3) == 0xf) {
  VAR_1->str_asm = FUNC_1 (VAR_1->str_asm, "mul %s, %s, %s ", VAR_0[FUNC_0 (VAR_2, 2)],
    VAR_0[FUNC_0 (VAR_2, 4)],
    VAR_0[FUNC_0 (VAR_2, 0)]);
  return 0;
 }

 if (VAR_4 == 1) {
  VAR_1->str_asm = FUNC_1 (VAR_1->str_asm, "mls %s, %s, %s, %s ", VAR_0[FUNC_0 (VAR_2, 2)],
    VAR_0[FUNC_0 (VAR_2, 4)],
    VAR_0[FUNC_0 (VAR_2, 0)],
    VAR_0[FUNC_0 (VAR_2, 3)]);
  return 0;
 }

 return VAR_2;
}
