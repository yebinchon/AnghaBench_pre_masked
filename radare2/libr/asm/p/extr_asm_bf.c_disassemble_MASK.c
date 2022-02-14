
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (char const*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,char) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 const ut8 *VAR_4;
 int VAR_5 = 1;


 if (*VAR_2 != 0x00 && *VAR_2 != 0xff) {
  for (VAR_4 = &VAR_2[1]; VAR_4 < VAR_2 + VAR_3 && *VAR_4 == *VAR_2; VAR_4++) {
   VAR_5++;
  }
 }
 const char *VAR_6 = "invalid";
 switch (*VAR_2) {
 case '[':
  VAR_6 = "while [ptr]";
  break;
 case ']':
  VAR_6 = "loop";
  break;
 case '>':
  VAR_6 = (VAR_5 > 1)? "add ptr": "inc ptr";
  break;
 case '<':
  VAR_6 = (VAR_5 > 1)? "sub ptr": "dec ptr";
  break;
 case '+':
  VAR_6 = (VAR_5 > 1)? "add [ptr]": "inc [ptr]";
  break;
 case '-':
  VAR_6 = (VAR_5 > 1)? "sub [ptr]": "dec [ptr]";
  break;
 case ',':
  VAR_6 = "in [ptr]";
  break;
 case '.':
  VAR_6 = "out [ptr]";
  break;
 case 0xff:
 case 0x00:
  VAR_6 = "trap";
  break;
 default:
  VAR_6 = "nop";
  break;
 }

 if (VAR_5 > 1) {


  const char *VAR_7 = FUNC_2 (VAR_6, ' ')? "%s, %d": "%s %d";
  VAR_6 = FUNC_1 (VAR_7, VAR_6, VAR_5);
 }
 FUNC_0 (&VAR_1->buf_asm, VAR_6);
 VAR_1->size = VAR_5;
 return VAR_5;
}
