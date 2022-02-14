
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool FUNC_4(int VAR_0, const char *VAR_1[], char *VAR_2) {
 int VAR_3,VAR_4,VAR_5;
 struct {
  char *op;
  char *str;
 } VAR_6[] = {
  { "add", "A += B"},
  { "adc", "A += B + carry"},
  { "adiw", "A+1:A += B"},
  { "sub", "A -= B"},
  { "subi", "A -= B"},
  { "sbc", "A -= (B + carry)"},
  { "sbci", "A -= (B + carry)"},
  { "sbiw", "A+1:A -= B"},
  { "and", "A &= B"},
  { "andi", "A &= B"},
  { "or", "A |= B"},
  { "ori", "A |= B"},
  { "eor", "A ^= B"},
  { "com", "A = 0xff - A"},
  { "neg", "A = -A"},
  { "sbr", "A |= B"},
  { "cbr", "A &= (0xff - B)"},
  { "inc", "A++"},
  { "dec", "A--"},
  { "tst", "A &= A"},
  { "clr", "A ^= A"},
  { "ser", "A = 0xff"},
  { "mul", "r1:r0 = A * B"},
  { "rjmp", "goto A"},
  { "ijmp", "goto z"},
  { "jmp", "goto A"},
  { "rcall", "goto A"},
  { "icall", "goto z"},
  { "call", "goto A"},
  { "ret", "return"},
  { "iret", "return_interrupt()"},
  { "cp", "var = A - B"},
  { "cpc", "var = A - B - carry"},
  { "cpi", "var = A - B"},
  { "breq", "if(!var) goto A"},
  { "brne", "if(var) goto A"},
  { "brsh", "if(var >= 0) goto A"},
  { "brlo", "if(var < 0) goto A"},
  { "brmi", "if(var < 0) goto A"},
  { "brpl", "if(var > 0) goto A"},
  { "brge", "if(var >= 0) goto A"},
  { "brlt", "if(var < 0) goto A"},
  { "mov", "A = B"},
  { "movw", "A+1:A = B+1:B"},
  { "ldi", "A = B"},
  { "lds", "A = *(B)"},
  { "ld", "A = *(B)"},
  { "ldd", "A = *(B)"},
  { "lpm", "r0 = z"},
  { "in", "A = B"},
  { "out", "A = B"},
  { "push", "push(A)"},
  { "pop", "A = pop()"},
  { "lsl", "A <<= 1"},
  { "lsr", "A >>= 1"},
  { "rol", "A = (A << 1) | (A >> 7)"},
  { "ror", "A = (A << 7) | (A >> 1)"},
  { "asr", "A >>= 1"},
  { "swap", "A = ((A & 0xf0) >> 4) | ((A & 0x0f) << 4)"},
  { "sec", "c = 1"},
  { "clc", "c = 0"},
  { "sen", "n = 1"},
  { "cln", "n = 0"},
  { "sez", "z = 1"},
  { "clz", "z = 0"},
  { "sei", "i = 1"},
  { "cli", "i = 0"},
  { "ses", "s = 1"},
  { "cls", "s = 0"},
  { "sev", "v = 1"},
  { "clv", "v = 0"},
  { "set", "t = 1"},
  { "clt", "t = 0"},
  { "seh", "h = 1"},
  { "clh", "h = 0"},
  { "nop", ""},
  { "halt", "_halt()"},
  { "wdr", "_watchdog_reset()"},
  { "std", "*(A) = B"},
  { "st", "*(A) = B"},
  { "sts", "*(A) = B"},
  { ((void*)0) }
 };

 for (VAR_3 = 0; VAR_6[VAR_3].op != ((void*)0); VAR_3++) {
  if (!FUNC_1 (VAR_6[VAR_3].op, VAR_1[0])) {
   if (VAR_2 != ((void*)0)) {
    for (VAR_4 = VAR_5 = 0; VAR_6[VAR_3].str[VAR_4] != '\0'; VAR_4++, VAR_5++) {
     if (VAR_6[VAR_3].str[VAR_4] >= 'A' && VAR_6[VAR_3].str[VAR_4] <= 'J') {
      const char *VAR_7 = VAR_1[VAR_6[VAR_3].str[VAR_4] - '@'];
      if (VAR_7 != ((void*)0)) {
       FUNC_2 (VAR_2 + VAR_5, VAR_7);
       VAR_5 += FUNC_3(VAR_7) - 1;
      }
     } else {
      VAR_2[VAR_5] = VAR_6[VAR_3].str[VAR_4];
     }
    }
    VAR_2[VAR_5] = '\0';
   }
   return 1;
  }
 }


 if (VAR_2 != ((void*)0)) {
  VAR_2[0] = '\0';
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_0 (VAR_2, VAR_1[VAR_3]);
   FUNC_0 (VAR_2, (VAR_3 == 0 || VAR_3 == VAR_0 - 1) ? " ":", ");
  }
 }

 return 0;
}
