
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int ut16 ;
struct winedbg_arm_insn {void* str_asm; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int) ;
 void* FUNC_2 (void*,char*,...) ;
 int * VAR_0 ;

__attribute__((used)) static ut32 FUNC_3(struct winedbg_arm_insn *VAR_1, ut32 VAR_2) {
 ut16 VAR_3 = (VAR_2 >> 8) & 0x0f;
 ut16 VAR_4 = (VAR_2 >> 12) & 0x0f;
 ut16 VAR_5 = (VAR_2 >> 20) & 0x01;
 ut16 VAR_6 = (VAR_2 >> 21) & 0x01;
 ut16 VAR_7 = (VAR_2 >> 22) & 0x01;
 ut16 VAR_8 = (VAR_2 >> 23) & 0x01;
 ut16 VAR_9 = (VAR_2 >> 24) & 0x01;
 short VAR_10 = (VAR_2 & 0xff) << 2;

 if (!VAR_8) {
  VAR_10 *= -1;
 }

 VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, "%s%s%s", VAR_5 ? "ldc" : "stc", VAR_7 ? "l" : "", FUNC_0 (VAR_2));
 if (VAR_9) {
  VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, " %u, cr%u, [%s, #%d]%s", VAR_3, VAR_4, VAR_0[FUNC_1 (VAR_2, 4)],
   VAR_10, VAR_6 ? "!" : "");
 } else {
  VAR_1->str_asm = FUNC_2 (VAR_1->str_asm, " %u, cr%u, [%s], #%d", VAR_3, VAR_4, VAR_0[FUNC_1 (VAR_2, 4)],
   VAR_10);
 }
 return 0;
}
