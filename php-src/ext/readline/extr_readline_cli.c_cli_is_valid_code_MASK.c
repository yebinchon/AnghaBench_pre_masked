
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int php_code_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * FUNC_2 (char*,char) ;







 int VAR_1 ;


 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, size_t VAR_3, zend_string **VAR_4)
{
 int VAR_5 = 1, VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 size_t VAR_9;
 php_code_type VAR_10 = VAR_0;
 char *VAR_11 = ((void*)0);
 size_t VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
  switch(VAR_10) {
   default:
    switch(VAR_2[VAR_9]) {
     case '{':
      VAR_7++;
      VAR_5 = 0;
      break;
     case '}':
      if (VAR_7 > 0) {
       VAR_7--;
      }
      VAR_5 = VAR_7 ? 0 : 1;
      break;
     case '(':
      VAR_8++;
      VAR_5 = 0;
      break;
     case ')':
      if (VAR_8 > 0) {
       VAR_8--;
      }
      VAR_5 = 0;
      break;
     case ';':
      VAR_5 = VAR_8 == 0 && VAR_7 == 0;
      break;
     case ' ':
     case '\r':
     case '\n':
     case '\t':
      break;
     case '\'':
      VAR_10 = 129;
      break;
     case '"':
      VAR_10 = 134;
      break;
     case '#':
      VAR_10 = 135;
      break;
     case '/':
      if (VAR_2[VAR_9+1] == '/') {
       VAR_9++;
       VAR_10 = 135;
       break;
      }
      if (VAR_2[VAR_9+1] == '*') {
       VAR_6 = VAR_5;
       VAR_5 = 0;
       VAR_10 = 136;
       VAR_9++;
       break;
      }
      VAR_5 = 0;
      break;
     case '?':
      if (VAR_2[VAR_9+1] == '>') {
       VAR_9++;
       VAR_10 = 130;
       break;
      }
      VAR_5 = 0;
      break;
     case '<':
      VAR_5 = 0;
      if (VAR_9 + 2 < VAR_3 && VAR_2[VAR_9+1] == '<' && VAR_2[VAR_9+2] == '<') {
       VAR_9 += 2;
       VAR_10 = 131;
       VAR_11 = ((void*)0);
       VAR_12 = 0;
      }
      break;
     default:
      VAR_5 = 0;
      break;
    }
    break;
   case 129:
    if (VAR_2[VAR_9] == '\\') {
     VAR_10 = 128;
    } else {
     if (VAR_2[VAR_9] == '\'') {
      VAR_10 = VAR_0;
     }
    }
    break;
   case 128:
    VAR_10 = 129;
    break;
   case 134:
    if (VAR_2[VAR_9] == '\\') {
     VAR_10 = 133;
    } else {
     if (VAR_2[VAR_9] == '"') {
      VAR_10 = VAR_0;
     }
    }
    break;
   case 133:
    VAR_10 = 134;
    break;
   case 135:
    if (VAR_2[VAR_9] == '\n') {
     VAR_10 = VAR_0;
    }
    break;
   case 136:
    if (VAR_2[VAR_9-1] == '*' && VAR_2[VAR_9] == '/') {
     VAR_10 = VAR_0;
     VAR_5 = VAR_6;
    }
    break;
   case 131:
    switch(VAR_2[VAR_9]) {
     case ' ':
     case '\t':
     case '\'':
      break;
     case '\r':
     case '\n':
      if (VAR_11) {
       VAR_10 = 132;
      } else {

       VAR_10 = VAR_0;
      }
      break;
     default:
      if (!VAR_11) {
       VAR_11 = VAR_2+VAR_9;
      }
      VAR_12++;
      break;
    }
    break;
   case 132:
    FUNC_1(VAR_11);
    if (!FUNC_3(VAR_2 + VAR_9 - VAR_12 + 1, VAR_11, VAR_12)) {
     unsigned char VAR_13 = VAR_2[VAR_9 + 1];
     char *VAR_14 = VAR_2 + VAR_9 - VAR_12;

     if ((VAR_13 >= 'A' && VAR_13 <= 'Z') || (VAR_13 >= 'a' && VAR_13 <= 'z') || (VAR_13 >= '0' && VAR_13 <= '9') || VAR_13 == '_' || VAR_13 >= 0x80) break;
     while (*VAR_14 == ' ' || *VAR_14 == '\t') VAR_14--;
     if (*VAR_14 != '\n') break;
     VAR_10 = VAR_0;
    }
    break;
   case 130:
    if ((FUNC_0(VAR_1) && !FUNC_3(VAR_2+VAR_9-1, "<?", 2))
    || (VAR_9 > 3 && !FUNC_3(VAR_2+VAR_9-4, "<?php", 5))
    ) {
     VAR_10 = VAR_0;
    }
    break;
  }
 }

 switch (VAR_10) {
  default:
   if (VAR_8) {
    *VAR_4 = FUNC_2("php", '(');
   } else if (VAR_7) {
    *VAR_4 = FUNC_2("php", '{');
   } else {
    *VAR_4 = FUNC_2("php", '>');
   }
   break;
  case 129:
  case 128:
   *VAR_4 = FUNC_2("php", '\'');
   break;
  case 134:
  case 133:
   *VAR_4 = FUNC_2("php", '"');
   break;
  case 136:
   *VAR_4 = FUNC_2("/* ", '>');
   break;
  case 132:
   *VAR_4 = FUNC_2("<<<", '>');
   break;
  case 130:
   *VAR_4 = FUNC_2("   ", '>');
   break;
 }

 if (!VAR_5 || VAR_7) {
  return 0;
 } else {
  return 1;
 }
}
