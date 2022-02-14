
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ADDR_TYPE ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(int VAR_0, const char *VAR_1[], char *VAR_2, ADDR_TYPE VAR_3) {
 int VAR_4, VAR_5, VAR_6;
 struct {
  int narg;
  char *op;
  char *str;
 } VAR_7[] = {
  {1, "lda", "a = 1"},
  {2, "lda", "a = (1+2)"},
  {1, "ldx", "x = 1"},
  {2, "ldx", "x = (1+2)"},
  {1, "ldy", "y = 1"},
  {2, "ldy", "y = (1+2)"},
  {1, "sta", "[1] = a"},
  {2, "sta", "[1+2 ] = a"},
  {1, "stx", "[1] = x"},
  {2, "stx", "[1+2] = x"},
  {1, "sty", "[1] = y"},
  {2, "sty", "[1+2] = y"},
  {1, "dec", "1--"},
  {2, "dec", "(1+2)--"},
  {0, "dcx", "x--"},
  {0, "dcy", "y--"},
  {1, "inc", "1++"},
  {2, "inc", "(1+2)++"},
  {0, "inx", "x++"},
  {0, "iny", "y++"},
  {1, "adc", "a += 1"},
  {2, "adc", "a += (1+2)"},
  {1, "sbc", "a -= 1"},
  {2, "sbc", "a -= (1+2)"},
  {0, "pha", "push a"},
  {1, "and", "a &= 1"},
  {2, "and", "a &= (1+2)"},
  {1, "eor", "a ^= 1"},
  {2, "eor", "a ^= (1+2)"},
  {1, "ora", "a |= 1"},
  {2, "ora", "a |= (1+2)"},
  {0, "tax", "x = a"},
  {0, "tay", "y = a"},
  {0, "txa", "a = x"},
  {0, "tya", "a = y"},
  {0, "tsx", "x = s"},
  {0, "txs", "s = x"},
  {0, "brk", "break"},
  {0, "clc", "clear_carry"},
  {0, "cld", "clear_decimal"},
  {0, "cli", "clear_interrupt"},
  {0, "clv", "clear_overflow"},
  {0, "sec", "set_carry"},
  {0, "sed", "set_decimal"},
  {0, "sei", "set_interrupt"},
  {1, "jsr", "1()"},
  {0, ((void*)0)}};
 if (!VAR_2) {
  return 0;
 }

 for (VAR_4 = 0; VAR_7[VAR_4].op != ((void*)0); VAR_4++) {
  if (VAR_7[VAR_4].narg) {
   if (VAR_0 - 1 != VAR_7[VAR_4].narg) {
    continue;
   }
  }
  if (!FUNC_2(VAR_7[VAR_4].op, VAR_1[0])) {
   for (VAR_5 = VAR_6 = 0; VAR_7[VAR_4].str[VAR_5] != '\0'; VAR_5++, VAR_6++) {
    if (FUNC_0(VAR_7[VAR_4].str[VAR_5])) {
     const char *VAR_8 = VAR_1[VAR_7[VAR_4].str[VAR_5] - '0'];
     if (VAR_8 != ((void*)0)) {
      FUNC_3(VAR_2 + VAR_6, VAR_8);
      VAR_6 += FUNC_4(VAR_8) - 1;
     }
    } else {
     VAR_2[VAR_6] = VAR_7[VAR_4].str[VAR_5];
    }
   }
   VAR_2[VAR_6] = '\0';
   if (VAR_0 == 4 && VAR_1[2][0] == '[') {
    FUNC_1 (VAR_2 + VAR_6, "+");
    FUNC_1 (VAR_2 + VAR_6 + 3, VAR_1[2]);
   }
   return 1;
  }
 }


 VAR_2[0] = '\0';
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_1 (VAR_2, VAR_1[VAR_4]);
  FUNC_1 (VAR_2, (VAR_4 == 0 || VAR_4 == VAR_0 - 1) ? " " : ",");
 }
 return 0;
}
