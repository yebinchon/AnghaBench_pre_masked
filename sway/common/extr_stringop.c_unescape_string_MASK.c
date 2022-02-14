
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int FUNC_1(char *VAR_0) {

 int VAR_1 = FUNC_0(VAR_0);
 int VAR_2;
 for (VAR_2 = 0; VAR_0[VAR_2]; ++VAR_2) {
  if (VAR_0[VAR_2] == '\\') {
   switch (VAR_0[++VAR_2]) {
   case '0':
    VAR_0[VAR_2 - 1] = '\0';
    return VAR_2 - 1;
   case 'a':
    VAR_0[VAR_2 - 1] = '\a';
    VAR_0[VAR_2] = '\0';
    break;
   case 'b':
    VAR_0[VAR_2 - 1] = '\b';
    VAR_0[VAR_2] = '\0';
    break;
   case 'f':
    VAR_0[VAR_2 - 1] = '\f';
    VAR_0[VAR_2] = '\0';
    break;
   case 'n':
    VAR_0[VAR_2 - 1] = '\n';
    VAR_0[VAR_2] = '\0';
    break;
   case 'r':
    VAR_0[VAR_2 - 1] = '\r';
    VAR_0[VAR_2] = '\0';
    break;
   case 't':
    VAR_0[VAR_2 - 1] = '\t';
    VAR_0[VAR_2] = '\0';
    break;
   case 'v':
    VAR_0[VAR_2 - 1] = '\v';
    VAR_0[VAR_2] = '\0';
    break;
   case '\\':
    VAR_0[VAR_2] = '\0';
    break;
   case '\'':
    VAR_0[VAR_2 - 1] = '\'';
    VAR_0[VAR_2] = '\0';
    break;
   case '\"':
    VAR_0[VAR_2 - 1] = '\"';
    VAR_0[VAR_2] = '\0';
    break;
   case '?':
    VAR_0[VAR_2 - 1] = '?';
    VAR_0[VAR_2] = '\0';
    break;
   case 'x':
    {
     unsigned char VAR_3 = 0;
     if (VAR_0[VAR_2+1] >= '0' && VAR_0[VAR_2+1] <= '9') {
      VAR_3 = VAR_0[VAR_2+1] - '0';
      if (VAR_0[VAR_2+2] >= '0' && VAR_0[VAR_2+2] <= '9') {
       VAR_3 *= 0x10;
       VAR_3 += VAR_0[VAR_2+2] - '0';
       VAR_0[VAR_2+2] = '\0';
      }
      VAR_0[VAR_2+1] = '\0';
     }
     VAR_0[VAR_2] = '\0';
     VAR_0[VAR_2 - 1] = VAR_3;
    }
   }
  }
 }

 int VAR_4 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  if (VAR_0[VAR_2] == 0) {
   VAR_4++;
   continue;
  }
  VAR_0[VAR_2-VAR_4] = VAR_0[VAR_2];
 }
 VAR_0[VAR_1 - VAR_4] = 0;
 return VAR_1 - VAR_4;
}
