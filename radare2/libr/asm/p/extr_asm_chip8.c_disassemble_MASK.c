
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut16 ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 ut16 VAR_4 = FUNC_0 (VAR_2);
 uint8_t VAR_5 = (VAR_4 >> 8) & 0x0F;
 uint8_t VAR_6 = (VAR_4 >> 4) & 0x0F;
 uint8_t VAR_7 = VAR_4 & 0x0F;
 uint16_t VAR_8 = VAR_4 & 0x0FFF;
 uint8_t VAR_9 = VAR_4 & 0xFF;
 const char *VAR_10 = "invalid";
 switch (VAR_4 & 0xF000) {
 case 0x0000:
  if (VAR_4 == 0x00E0) {
   VAR_10 = "cls";
  } else if (VAR_4 == 0x00EE) {
   VAR_10 = "ret";
  } else if ((VAR_4 & 0xFFF0) == 0x00C0) {
   VAR_10 = FUNC_2 ("scd 0x%01x", VAR_7);
  } else if (VAR_4 == 0x00FB) {
   VAR_10 = "scr";
  } else if (VAR_4 == 0x00FC) {
   VAR_10 = "scl";
  } else if (VAR_4 == 0x00FD) {
   VAR_10 = "exit";
  } else if (VAR_4 == 0x00FE) {
   VAR_10 = "low";
  } else if (VAR_4 == 0x00FF) {
   VAR_10 = "high";
  }
  break;
 case 0x1000: VAR_10 = FUNC_2 ("jp 0x%03x", VAR_8); break;
 case 0x2000: VAR_10 = FUNC_2 ("call 0x%03x", VAR_8); break;
 case 0x3000: VAR_10 = FUNC_2 ("se v%1x, 0x%02x", VAR_5, VAR_9); break;
 case 0x4000: VAR_10 = FUNC_2 ("sne v%1x, 0x%02x", VAR_5, VAR_9); break;
 case 0x5000: VAR_10 = FUNC_2 ("se v%1x, v%1x", VAR_5, VAR_6); break;
 case 0x6000: VAR_10 = FUNC_2 ("ld v%1x, 0x%02x", VAR_5, VAR_9); break;
 case 0x7000: VAR_10 = FUNC_2 ("add v%1x, 0x%02x", VAR_5, VAR_9); break;
 case 0x8000: {
  switch (VAR_7) {
  case 0x0: VAR_10 = FUNC_2 ("ld v%1x, v%1x", VAR_5, VAR_6); break;
  case 0x1: VAR_10 = FUNC_2 ("or v%1x, v%1x", VAR_5, VAR_6); break;
  case 0x2: VAR_10 = FUNC_2 ("and v%1x, v%1x", VAR_5, VAR_6); break;
  case 0x3: VAR_10 = FUNC_2 ("xor v%1x, v%1x", VAR_5, VAR_6); break;
  case 0x4: VAR_10 = FUNC_2 ("add v%1x, v%1x", VAR_5, VAR_6); break;
  case 0x5: VAR_10 = FUNC_2 ("sub v%1x, v%1x", VAR_5, VAR_6); break;
  case 0x6: VAR_10 = FUNC_2 ("shr v%1x, v%1x", VAR_5, VAR_6); break;
  case 0x7: VAR_10 = FUNC_2 ("subn v%1x, v%1x", VAR_5, VAR_6); break;
  case 0xE: VAR_10 = FUNC_2 ("shl v%1x, v%1x", VAR_5, VAR_6); break;
  }
 } break;
 case 0x9000: VAR_10 = FUNC_2 ("sne v%1x, v%1x", VAR_5, VAR_6); break;
 case 0xA000: VAR_10 = FUNC_2 ("ld i, 0x%03x", VAR_8); break;
 case 0xB000: VAR_10 = FUNC_2 ("jp v0, 0x%03x", VAR_8); break;
 case 0xC000: VAR_10 = FUNC_2 ("rnd v%1x, 0x%02x", VAR_5, VAR_9); break;
 case 0xD000: VAR_10 = FUNC_2 ("drw v%1x, v%1x, 0x%01x", VAR_5, VAR_6, VAR_7); break;
 case 0xE000: {
  if (VAR_9 == 0x9E) {
   VAR_10 = FUNC_2 ("skp v%1x", VAR_5);
  } else if (VAR_9 == 0xA1) {
   VAR_10 = FUNC_2 ("sknp v%1x", VAR_5);
  }
 } break;
 case 0xF000: {
  switch (VAR_9) {
  case 0x07: VAR_10 = FUNC_2 ("ld v%1x, dt", VAR_5); break;
  case 0x0A: VAR_10 = FUNC_2 ("ld v%1x, k", VAR_5); break;
  case 0x15: VAR_10 = FUNC_2 ("ld dt, v%1x", VAR_5); break;
  case 0x18: VAR_10 = FUNC_2 ("ld st, v%1x", VAR_5); break;
  case 0x1E: VAR_10 = FUNC_2 ("add i, v%1x", VAR_5); break;
  case 0x29: VAR_10 = FUNC_2 ("ld f, v%1x", VAR_5); break;
  case 0x33: VAR_10 = FUNC_2 ("ld b, v%1x", VAR_5); break;
  case 0x55: VAR_10 = FUNC_2 ("ld [i], v%1x", VAR_5); break;
  case 0x65: VAR_10 = FUNC_2 ("ld v%1x, [i]", VAR_5); break;
  case 0x30: VAR_10 = FUNC_2 ("ld hf, v%1x", VAR_5); break;
  case 0x75: VAR_10 = FUNC_2 ("ld r, v%1x", VAR_5); break;
  case 0x85: VAR_10 = FUNC_2 ("ld v%1x, r", VAR_5); break;
  }
 } break;
 }
 FUNC_1 (&VAR_1->buf_asm, VAR_10);
 VAR_1->size = 2;
 return VAR_1->size;
}
