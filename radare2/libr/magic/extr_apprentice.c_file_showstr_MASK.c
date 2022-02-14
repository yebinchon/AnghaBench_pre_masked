
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char) ;
 int FUNC_1 (char,int *) ;

void FUNC_2(FILE *VAR_0, const char *VAR_1, size_t VAR_2) {
 for (;;) {
  char VAR_3 = *VAR_1++;
  if (VAR_2 == ~0U) {
   if (VAR_3 == '\0') {
    break;
   }
  } else {
   if (VAR_2-- == 0) {
    break;
   }
  }
  if (VAR_3 >= 040 && VAR_3 <= 0176) {
   FUNC_1 (VAR_3, VAR_0);
  } else {
   FUNC_1 ('\\', VAR_0);
   switch (VAR_3) {
   case '\a': FUNC_1('a', VAR_0); break;
   case '\b': FUNC_1('b', VAR_0); break;
   case '\f': FUNC_1('f', VAR_0); break;
   case '\n': FUNC_1('n', VAR_0); break;
   case '\r': FUNC_1('r', VAR_0); break;
   case '\t': FUNC_1('t', VAR_0); break;
   case '\v': FUNC_1('v', VAR_0); break;
   default: FUNC_0(VAR_0, "%.3o", VAR_3 & 0377); break;
   }
  }
 }
}
