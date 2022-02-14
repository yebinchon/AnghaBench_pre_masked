
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int CString ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(CString *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 const uint8_t *VAR_6;

 VAR_6 = VAR_2;
 for (;;) {
  VAR_4 = *VAR_6;
  if (VAR_4 == '\0') {
   break;
  }
  if (VAR_4 == '\\') {
   VAR_6++;

   VAR_4 = *VAR_6;
   switch (VAR_4) {
   case '0': case '1': case '2': case '3':
   case '4': case '5': case '6': case '7':

    VAR_5 = VAR_4 - '0';
    VAR_6++;
    VAR_4 = *VAR_6;
    if (FUNC_3 (VAR_4)) {
     VAR_5 = VAR_5 * 8 + VAR_4 - '0';
     VAR_6++;
     VAR_4 = *VAR_6;
     if (FUNC_3 (VAR_4)) {
      VAR_5 = VAR_5 * 8 + VAR_4 - '0';
      VAR_6++;
     }
    }
    VAR_4 = VAR_5;
    goto add_char_nonext;
   case 'x':
   case 'u':
   case 'U':
    VAR_6++;
    VAR_5 = 0;
    for (;;) {
     VAR_4 = *VAR_6;
     if (VAR_4 >= 'a' && VAR_4 <= 'f') {
      VAR_4 = VAR_4 - 'a' + 10;
     } else if (VAR_4 >= 'A' && VAR_4 <= 'F') {
      VAR_4 = VAR_4 - 'A' + 10;
     } else if (FUNC_2 (VAR_4)) {
      VAR_4 = VAR_4 - '0';
     } else {
      break;
     }
     VAR_5 = VAR_5 * 16 + VAR_4;
     VAR_6++;
    }
    VAR_4 = VAR_5;
    goto add_char_nonext;
   case 'a':
    VAR_4 = '\a';
    break;
   case 'b':
    VAR_4 = '\b';
    break;
   case 'f':
    VAR_4 = '\f';
    break;
   case 'n':
    VAR_4 = '\n';
    break;
   case 'r':
    VAR_4 = '\r';
    break;
   case 't':
    VAR_4 = '\t';
    break;
   case 'v':
    VAR_4 = '\v';
    break;
   case 'e':
    if (!VAR_0) {
     goto invalid_escape;
    }
    VAR_4 = 27;
    break;
   case '\'':
   case '\"':
   case '\\':
   case '?':
    break;
   default:
invalid_escape:
    if (VAR_4 >= '!' && VAR_4 <= '~') {
     FUNC_4 ("unknown escape sequence: \'\\%c\'", VAR_4);
    } else {
     FUNC_4 ("unknown escape sequence: \'\\x%x\'", VAR_4);
    }
    break;
   }
  }
  VAR_6++;
add_char_nonext:
  if (!VAR_3) {
   FUNC_0 (VAR_1, VAR_4);
  } else {
   FUNC_1 (VAR_1, VAR_4);
  }
 }

 if (!VAR_3) {
  FUNC_0 (VAR_1, '\0');
 } else {
  FUNC_1 (VAR_1, '\0');
 }
}
