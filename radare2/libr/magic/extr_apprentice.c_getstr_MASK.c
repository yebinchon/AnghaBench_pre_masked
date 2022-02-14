
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RMagic ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static const char * FUNC_5(RMagic *VAR_1, const char *VAR_2, char *VAR_3, int VAR_4, int *VAR_5, int VAR_6) {
 const char *VAR_7 = VAR_2;
 char *VAR_8 = VAR_3;
 char *VAR_9 = VAR_3 + VAR_4 - 1;
 int VAR_10, VAR_11;

 while ((VAR_10 = *VAR_2++) != '\0') {
  if (FUNC_4 ((ut8)VAR_10)) {
   break;
  }
  if (VAR_3 >= VAR_9) {
   FUNC_0(VAR_1, 0, "string too long: `%s'", VAR_7);
   return ((void*)0);
  }
  if (VAR_10 == '\\') {
   switch ((VAR_10 = *VAR_2++)) {
   case '\0':
    if (VAR_6 == VAR_0) {
     FUNC_1 (VAR_1, "incomplete escape");
    }
    goto out;
   case '\t':
    if (VAR_6 == VAR_0) {
     FUNC_1(VAR_1,
         "escaped tab found, use \\t instead");
     VAR_6++;
    }

   default:
    if (VAR_6 == VAR_0) {
     if (FUNC_3 ((ut8)VAR_10)) {
      FUNC_1 (VAR_1,
       "no need to escape `%c'", VAR_10);
     } else {
      FUNC_1 (VAR_1,
       "unknown escape sequence: \\%03o", VAR_10);
     }
    }


   case ' ':
   case '>':
   case '<':
   case '&':
   case '^':
   case '=':
   case '!':

   case '\\':
    *VAR_3++ = (char) VAR_10;
    break;
   case 'a': *VAR_3++ = '\a'; break;
   case 'b': *VAR_3++ = '\b'; break;
   case 'f': *VAR_3++ = '\f'; break;
   case 'n': *VAR_3++ = '\n'; break;
   case 'r': *VAR_3++ = '\r'; break;
   case 't': *VAR_3++ = '\t'; break;
   case 'v': *VAR_3++ = '\v'; break;

   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
    VAR_11 = VAR_10 - '0';
    VAR_10 = *VAR_2++;
    if (VAR_10 >= '0' && VAR_10 <= '7') {
     VAR_11 = (VAR_11 << 3) | (VAR_10 - '0');
     VAR_10 = *VAR_2++;
     if (VAR_10 >= '0' && VAR_10 <= '7') {
      VAR_11 = (VAR_11 << 3) | (VAR_10-'0');
     } else {
      --VAR_2;
     }
    } else {
     --VAR_2;
    }
    *VAR_3++ = (char)VAR_11;
    break;


   case 'x':
    VAR_11 = 'x';
    VAR_10 = FUNC_2(*VAR_2++);
    if (VAR_10 >= 0) {
     VAR_11 = VAR_10;
     VAR_10 = FUNC_2(*VAR_2++);
     if (VAR_10 >= 0) {
      VAR_11 = (VAR_11 << 4) + VAR_10;
     } else {
      --VAR_2;
     }
    } else {
     --VAR_2;
    }
    *VAR_3++ = (char)VAR_11;
    break;
   }
  } else {
   *VAR_3++ = (char)VAR_10;
  }
 }
out:
 *VAR_3 = '\0';
 *VAR_5 = VAR_3 - VAR_8;
 return VAR_2;
}
