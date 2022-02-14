
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
 if (!VAR_0[1]) {
  switch (VAR_0[0]) {
  case '~':
  case '!':
   return 4;
  case '*':
  case '/':
  case '%':
   return 6;
  case '+':
  case '-':
   return 7;

  case '<':
  case '>':
   return 9;

  case '&':
   return 11;
  case '^':
   return 12;
  case '|':
   return 13;
  case '?':
   return 16;
  default:
   FUNC_0("unknown op '%c'", VAR_0[0]);
   return -1;
  }
 } else {
  if (FUNC_1(VAR_0, "++") == 0 ||
      FUNC_1(VAR_0, "--") == 0) {
   return 3;
  } else if (FUNC_1(VAR_0, ">>") == 0 ||
      FUNC_1(VAR_0, "<<") == 0) {
   return 8;
  } else if (FUNC_1(VAR_0, ">=") == 0 ||
      FUNC_1(VAR_0, "<=") == 0) {
   return 9;
  } else if (FUNC_1(VAR_0, "==") == 0 ||
      FUNC_1(VAR_0, "!=") == 0) {
   return 10;
  } else if (FUNC_1(VAR_0, "&&") == 0) {
   return 14;
  } else if (FUNC_1(VAR_0, "||") == 0) {
   return 15;
  } else {
   FUNC_0("unknown op '%s'", VAR_0);
   return -1;
  }
 }
}
