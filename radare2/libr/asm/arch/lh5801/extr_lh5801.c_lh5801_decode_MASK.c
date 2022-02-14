
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct lh5801_insn_desc {unsigned int format; int opcode; int iclass; } ;
struct lh5801_insn {int type; int fd; int opcode; int* imm; int iclass; } ;


 unsigned int FUNC_0 (struct lh5801_insn_desc*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (unsigned int,int) ;
 struct lh5801_insn_desc* VAR_5 ;

int FUNC_3(struct lh5801_insn *VAR_6, const ut8 *VAR_7, int VAR_8) {
 int VAR_9 = (VAR_7[0] == 0xfd);
 int VAR_10 = -1;
 unsigned VAR_11;
 struct lh5801_insn_desc VAR_12;

 if (VAR_9) {
  VAR_7++;
  VAR_8--;
 }

 if (VAR_8 == 0)
  return 0;


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  ut8 VAR_13 = *VAR_7;
  unsigned VAR_14;
  unsigned VAR_15;

  VAR_12 = VAR_5[VAR_11];
  VAR_14 = VAR_12.format;
  VAR_15 = VAR_14 & VAR_2;

  if(!FUNC_2(VAR_14, VAR_9))
   continue;


  if (VAR_15 == VAR_3 && (VAR_13 >> 4) % 4 == 3)
   continue;


  if (VAR_15 == VAR_3)
   VAR_13 &= 0xcf;
  if (VAR_14 & VAR_1)
   VAR_13 &= 0xf1;
  if (VAR_14 & VAR_0)
   VAR_13 &= 0xef;

  if (VAR_13 == VAR_12.opcode) {
   VAR_10 = VAR_11;
   break;
  }



  if (VAR_14 & VAR_4) {
   if (!(VAR_13 & 1) && VAR_13 >= 0xc0 && VAR_13 <= 0xf6) {
    VAR_10 = VAR_11;
    break;
   }
  }
 }
 if (VAR_10 == -1)
  return -1;


 VAR_6->iclass = VAR_12.iclass;
 VAR_6->type = VAR_10;
 VAR_6->fd = VAR_9;
 VAR_6->opcode = VAR_7[0];
 switch (FUNC_1(VAR_12.format)) {
 case 3: VAR_6->imm[2] = VAR_7[3];
 case 2: VAR_6->imm[1] = VAR_7[2];
 case 1: VAR_6->imm[0] = VAR_7[1];
 }


 return VAR_9 + 1 + FUNC_1(VAR_12.format);
}
