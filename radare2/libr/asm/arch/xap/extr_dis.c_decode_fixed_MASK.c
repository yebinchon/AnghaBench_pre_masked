
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int s_u; int s_nop; int s_prefix; } ;
struct directive {char* d_asm; int d_inst; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct state *VAR_0, struct directive *VAR_1) {
 *VAR_1->d_asm = '\0';
 switch (FUNC_0 (&VAR_1->d_inst)) {
 case 132:
  if (VAR_0->s_prefix) {
   return 0;
  }
  VAR_0->s_nop++;
  FUNC_1(VAR_1->d_asm, "nop");
  break;
 case 134: FUNC_1(VAR_1->d_asm, "brk"); break;
 case 129: FUNC_1(VAR_1->d_asm, "sleep"); break;
 case 130: FUNC_1(VAR_1->d_asm, "sif"); break;
 case 135: FUNC_1(VAR_1->d_asm, "bc"); break;
 case 133: FUNC_1(VAR_1->d_asm, "brxl"); break;
 case 128: FUNC_1(VAR_1->d_asm, ""); VAR_0->s_u = 1; break;
 case 131: FUNC_1(VAR_1->d_asm, "rts"); break;
 }
 return VAR_1->d_asm[0]!=0;
}
