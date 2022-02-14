
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(int VAR_0, const char *VAR_1[], char *VAR_2) {
 int VAR_3,VAR_4,VAR_5;
 struct {
  char *op;
  char *str;
  int max_operands;
 } VAR_6[] = {
  { "move", "2 = 1", 2},
  { "movea", "2 = 1", 2},
  { "moveq", "2 = 1", 2},
  { "movem", "2 = 1", 2},
  { "lea", "2 = 1", 2},
  { "bsr", "1()", 1},
  { "jsr", "1()", 1},
  { "beq", "if (==) jmp 1", 1},
  { "blt", "if (<) jmp 1", 1},
  { "ble", "if (<=) jmp 1", 1},
  { "bgt", "if (>) jmp 1", 1},
  { "bge", "if (>=) jmp 1", 1},
  { "bcs", "if (cs) jmp 1", 1},
  { "bcc", "if (cc) jmp 1", 1},
  { "bra", "jmp 1", 1},
  { "jmp", "jmp 1", 1},
  { "rts", "ret", 2},
  { "btst", "1 == 2", 2},
  { "cmp", "1 == 2", 2},
  { "cmpi", "2 == 1", 2},
  { "add", "1 += 2", 2},
  { "addi", "1 += 2", 2},
  { "adda", "1 += 2", 2},
  { "sub", "1 += 2", 2},
  { "subq", "1 += 2", 2},
  { "tst", "1 == 2", 2},
  { "ori", "2 |= 1", 2},
  { "or", "2 |= 1", 2},
  { "lsr", "2 >>= 1", 2},
  { "lsl", "2 <<= 1", 2},
  { "andi", "2 &= 1", 2},
  { "nop", ""},

  { ((void*)0) }
 };

 for (VAR_3=0; VAR_6[VAR_3].op != ((void*)0); VAR_3++) {
  if (!FUNC_2 (VAR_6[VAR_3].op, VAR_1[0])) {
   if (VAR_2 != ((void*)0)) {
    for (VAR_4=VAR_5=0;VAR_6[VAR_3].str[VAR_4]!='\0';VAR_4++,VAR_5++) {
     if (FUNC_0(VAR_6[VAR_3].str, VAR_4, VAR_6[VAR_3].max_operands)) {
      const char *VAR_7 = VAR_1[ VAR_6[VAR_3].str[VAR_4]-'0' ];
      if (VAR_7 != ((void*)0)) {
       FUNC_3 (VAR_2+VAR_5, VAR_7);
       VAR_5 += FUNC_4(VAR_7)-1;
      }
     } else {
      VAR_2[VAR_5] = VAR_6[VAR_3].str[VAR_4];
     }
    }
    VAR_2[VAR_5]='\0';
   }
   return 1;
  }
 }


 if (VAR_2 != ((void*)0)) {
  VAR_2[0] = '\0';
  for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
   FUNC_1 (VAR_2, VAR_1[VAR_3]);
   FUNC_1 (VAR_2, (VAR_3 == 0 || VAR_3== VAR_0 - 1)?" ":", ");
  }
 }

 return 0;
}
