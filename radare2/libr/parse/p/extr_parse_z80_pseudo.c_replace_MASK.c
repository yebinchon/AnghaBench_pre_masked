
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(int VAR_0, const char *VAR_1[], char *VAR_2) {
 int VAR_3,VAR_4,VAR_5;
 struct {
  char *op;
  char *str;
 } VAR_6[] = {
  { "adc", "1 = 1 + 2"},
  { "add", "1 = 1 + 2"},
  { "and", "1 = 1 & 2"},
  { "cpl", "1 = ~1"},
  { "ex", "swap(1, 2)"},
  { "in", "1 = [2]"},
  { "jp", "goto [1]"},
  { "jp", "goto 1"},
  { "jr", "goto +1"},
  { "ld", "1 = 2"},
  { "ldd", "1 = 2--"},
  { "neg", "1 = -1"},
  { "nop", ""},
  { "or", "1 = 1 | 2"},
  { "pop", "pop 1"},
  { "push", "push 1"},
  { "rr", "1 = 1 << 2"},
  { "sbc", "1 = 1 - 2"},
  { "sla", "1 = 1 << 2"},
  { "sra", "1 = 1 >> 2"},
  { "srl", "1 = 1 >> 2"},
  { "sub", "1 = 1 - 2"},
  { "xor", "1 = 1 ^ 2"},
  { ((void*)0) }
 };

 for (VAR_3=0; VAR_6[VAR_3].op != ((void*)0); VAR_3++) {
  if (!FUNC_1 (VAR_6[VAR_3].op, VAR_1[0])) {
   if (VAR_2 != ((void*)0)) {
    for (VAR_4=VAR_5=0;VAR_6[VAR_3].str[VAR_4]!='\0';VAR_4++,VAR_5++) {
     if (VAR_6[VAR_3].str[VAR_4]>='1' && VAR_6[VAR_3].str[VAR_4]<='9') {
      const char *VAR_7 = VAR_1[ VAR_6[VAR_3].str[VAR_4]-'0' ];
      if (VAR_7 != ((void*)0)) {
       FUNC_2 (VAR_2+VAR_5, VAR_7);
       VAR_5 += FUNC_3(VAR_7)-1;
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
   FUNC_0 (VAR_2, VAR_1[VAR_3]);
   FUNC_0 (VAR_2, (VAR_3 == 0 || VAR_3== VAR_0 - 1)?" ":", ");
  }
 }

 return 0;
}
