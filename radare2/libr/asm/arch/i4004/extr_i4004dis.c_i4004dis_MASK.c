
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int const ut16 ;
struct TYPE_3__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;


 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char*,int const,...) ;

__attribute__((used)) static int FUNC_3 (RAsmOp *VAR_2, const ut8 *VAR_3, int VAR_4) {
 int VAR_5 = FUNC_0 (*VAR_3);
 ut8 VAR_6 = (*VAR_3 & 0xf0) >> 4;
 ut8 VAR_7 = (*VAR_3 & 0xf);
 const char *VAR_8 = "invalid";
 if (VAR_5 > VAR_4) {
  return VAR_2->size = 0;
 }
 switch (VAR_6) {
 case 0: VAR_8 = VAR_7? "invalid": "nop"; break;
 case 1: VAR_8 = FUNC_2 ("jcn %d 0x%02x", VAR_7, VAR_3[1]); break;
 case 2:
  if (VAR_5 == 1) {
   VAR_8 = FUNC_2 ("src r%d", (VAR_7 & 0xe));
  } else {
   VAR_8 = FUNC_2 ("fim r%d, 0x%02x", (VAR_7 & 0xe), VAR_3[1]);
  }
  break;
 case 3:
  if ((VAR_7 & 1) == 1) {
   VAR_8 = FUNC_2 ("jin r%d", (VAR_7 & 0xe));
  } else {
   VAR_8 = FUNC_2 ("fin r%d", (VAR_7 & 0xe));
  }
  break;
 case 4: VAR_8 = FUNC_2 ("jun 0x%03x", ((ut16)(VAR_7<<8) | VAR_3[1])); break;
 case 5: VAR_8 = FUNC_2 ("jms 0x%03x", ((ut16)(VAR_7<<8) | VAR_3[1])); break;
 case 6: VAR_8 = FUNC_2 ("inc r%d", VAR_7); break;
 case 7: VAR_8 = FUNC_2 ("isz r%d, 0x%02x", VAR_7, VAR_3[1]); break;
 case 8: VAR_8 = FUNC_2 ("add r%d", VAR_7); break;
 case 9: VAR_8 = FUNC_2 ("sub r%d", VAR_7); break;
 case 10: VAR_8 = FUNC_2 ("ld r%d", VAR_7); break;
 case 11: VAR_8 = FUNC_2 ("xch r%d", VAR_7); break;
 case 12: VAR_8 = FUNC_2 ("bbl %d", VAR_7); break;
 case 13: VAR_8 = FUNC_2 ("ldm %d", VAR_7); break;
 case 14: VAR_8 = VAR_0[VAR_7]; break;
 case 15: VAR_8 = VAR_1[VAR_7]; break;
 }
 FUNC_1 (&VAR_2->buf_asm, VAR_8);
 return VAR_2->size = VAR_5;
}
