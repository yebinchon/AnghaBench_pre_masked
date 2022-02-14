
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
struct winedbg_arm_insn {long long jmp; long long fail; void* str_hex; void* str_asm; int buf; int thumb; } ;
struct inst_thumb16 {int mask; int pattern; int (* func ) (struct winedbg_arm_insn*,int) ;} ;
struct inst_arm {int mask; int pattern; int (* func ) (struct winedbg_arm_insn*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (void*,char*,int,...) ;
 int FUNC_2 (struct winedbg_arm_insn*,int) ;
 int FUNC_3 (struct winedbg_arm_insn*,int) ;
 int FUNC_4 (struct winedbg_arm_insn*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_5(struct winedbg_arm_insn *VAR_6) {
 struct inst_arm *VAR_7 = (struct inst_arm *)&VAR_3;
 struct inst_thumb16 *VAR_8 = (struct inst_thumb16 *)&VAR_4;
 struct inst_arm *VAR_9 = (struct inst_arm *)&VAR_5;
 ut32 VAR_10;
 ut16 VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 VAR_6->jmp = VAR_6->fail = -1LL;
 if (!VAR_6->thumb) {
  VAR_12 = VAR_0;
  VAR_10 = FUNC_0(VAR_6->buf, VAR_12);
  while (VAR_7->func) {
   if ((VAR_10 & VAR_7->mask) == VAR_7->pattern) {
    VAR_13 = 1;
    break;
   }
   VAR_7++;
  }

  if (!VAR_13) {
   VAR_6->str_asm = FUNC_1 (VAR_6->str_asm, "Unknown ARM Instruction: %08x", VAR_10);
  }
  else {
   VAR_7->func(VAR_6, VAR_10);
  }
  VAR_6->str_hex = FUNC_1 (VAR_6->str_hex, "%02x%02x%02x%02x",
    *((ut8*)(&VAR_10)), *((ut8*)(&VAR_10)+1), *((ut8*)(&VAR_10)+2), *((ut8*)(&VAR_10)+3));
  return VAR_12;
 } else {
  VAR_11 = FUNC_0(VAR_6->buf, VAR_2);
  switch (VAR_11 & 0xf800) {
  case 0xe800:
  case 0xf000:
  case 0xf800:
   VAR_12 = VAR_1;
   VAR_10 = FUNC_0(VAR_6->buf+1, VAR_2);
   VAR_10 |= (VAR_11 << 16);

   while (VAR_9->func) {
    if ((VAR_10 & VAR_9->mask) == VAR_9->pattern) {
     VAR_13 = 1;
     break;
    }
    VAR_9++;
   }

   if (!VAR_13) {
    VAR_6->str_asm = FUNC_1 (VAR_6->str_asm, "Unknown Thumb2 Instruction: %08x", VAR_10);
   }
   else {
    VAR_9->func(VAR_6, VAR_10);
   }
   VAR_6->str_hex = FUNC_1 (VAR_6->str_hex, "%02x%02x%02x%02x",
     *((ut8*)(&VAR_10)), *((ut8*)(&VAR_10)+1), *((ut8*)(&VAR_10)+2), *((ut8*)(&VAR_10)+3));
   return VAR_12;
  default:
   break;
  }

  VAR_12 = VAR_2;
  while (VAR_8->func) {
   if ((VAR_11 & VAR_8->mask) == VAR_8->pattern) {
    VAR_13 = 1;
    break;
   }
   VAR_8++;
  }

  if (!VAR_13) {
   VAR_6->str_asm = FUNC_1 (VAR_6->str_asm, "Unknown Thumb Instruction: %04x", VAR_11);
  }
  else {
   VAR_8->func(VAR_6, VAR_11);
  }
  VAR_6->str_hex = FUNC_1 (VAR_6->str_hex, "%02x%02x", *((ut8*)(&VAR_11)), *((ut8*)(&VAR_11)+1));
  return VAR_12;
 }
 return VAR_12;
}
