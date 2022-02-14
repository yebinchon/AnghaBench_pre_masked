
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int const ut8 ;
struct winedbg_arm_insn {int dummy; } ;
struct TYPE_7__ {int bits; scalar_t__ big_endian; int pc; } ;
struct TYPE_6__ {int size; int buf; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int FUNC_0 (struct winedbg_arm_insn*) ;
 int FUNC_1 (struct winedbg_arm_insn*) ;
 struct winedbg_arm_insn* FUNC_2 () ;
 int FUNC_3 (struct winedbg_arm_insn*,int const*) ;
 int FUNC_4 (struct winedbg_arm_insn*,int ) ;
 int FUNC_5 (struct winedbg_arm_insn*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int const*,int const*,int) ;
 int FUNC_8 (int *,char const*) ;
 char* FUNC_9 (struct winedbg_arm_insn*) ;
 int FUNC_10 (struct winedbg_arm_insn*) ;

__attribute__((used)) static int FUNC_11(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 ut8 VAR_4[4];
 struct winedbg_arm_insn *VAR_5 = FUNC_2();
 FUNC_4 (VAR_5, VAR_0->pc);
 FUNC_5 (VAR_5, VAR_0->bits == 16);
 if (VAR_0->big_endian && VAR_0->bits == 32) {
  FUNC_7 (VAR_4, VAR_2, 4);
  FUNC_3 (VAR_5, VAR_4);
 } else {
  FUNC_3 (VAR_5, VAR_2);
 }
 VAR_1->size = FUNC_0 (VAR_5);
 const char *VAR_6 = FUNC_9 (VAR_5);
 if (VAR_6) {
  FUNC_8 (&VAR_1->buf_asm, VAR_6);
  FUNC_6(VAR_1, FUNC_10 (VAR_5));
 } else {
  FUNC_8 (&VAR_1->buf_asm, "invalid");
  FUNC_8 (&VAR_1->buf, "");
 }
 FUNC_1 (VAR_5);
 return VAR_1->size;
}
