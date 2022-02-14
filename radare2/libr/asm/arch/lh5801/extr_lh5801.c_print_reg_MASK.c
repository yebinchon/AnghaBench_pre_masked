
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lh5801_insn_desc {int format; } ;
struct lh5801_insn {size_t type; int opcode; int fd; } ;



 int VAR_0 ;

 int VAR_1 ;




 int FUNC_0 (int) ;

 struct lh5801_insn_desc* VAR_2 ;

__attribute__((used)) static char *FUNC_1(char *VAR_3, const struct lh5801_insn *VAR_4) {
 const struct lh5801_insn_desc VAR_5 = VAR_2[VAR_4->type];
 unsigned VAR_6 = (VAR_4->opcode >> 4) & 3;
 const char VAR_7[] = "xyu";
 char *VAR_8 = VAR_3;


 switch(VAR_5.format & VAR_1) {
  case 134: return "a";
  case 128: return "s";
  case 133: return "p";
 }

 if (VAR_6 == 3)
  return "invalid";
 else switch (FUNC_0(VAR_5.format)) {
 case 132:
  VAR_3[0] = VAR_7[VAR_6];
  VAR_3[1] = '\0';
  break;
 case 130:
 case 131:
  VAR_3[0] = VAR_7[VAR_6];
  VAR_3[1] = (VAR_5.format & 130)? 'l':'h';
  VAR_3[2] = '\0';
  break;
 case 129:
  if (VAR_5.format & VAR_0) {
   if (VAR_4->fd)
    *(VAR_3++) = '#';
   VAR_3[0] = '(';
   VAR_3[1] = VAR_7[VAR_6];
   VAR_3[2] = ')';
   VAR_3[3] = '\0';
  } else {
   return ((void*)0);
  }
  break;
 default:
  return ((void*)0);
 }
 return VAR_8;
}
