
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_6, const char *VAR_7, char *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 const char *VAR_14;

 if (!VAR_7)
  VAR_7 = VAR_6 + FUNC_2(VAR_6);

 for (VAR_14 = VAR_6; VAR_14 != VAR_7; VAR_14++) {

  if (VAR_11 == (VAR_9 - 1))
   break;

  switch (*VAR_14) {
  case 'L':
   if (VAR_10 == VAR_3 || VAR_10 == VAR_1) {
    if (VAR_10 == VAR_1) {
     if (VAR_13)
      VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, ", ");
     VAR_13++;
    }
    VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, "class ");
    if (VAR_10 == VAR_3)
     VAR_10 = VAR_0;
   } else
    VAR_8[VAR_11++] = *VAR_14;
   break;
  case 'B':
  case 'C':
  case 'D':
  case 'F':
  case 'I':
  case 'J':
  case 'S':
  case 'Z':
   if (VAR_10 == VAR_4) {
    if (VAR_13)
     VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, ", ");
    VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, "%s", VAR_5[*VAR_14 - 'A']);
    while (VAR_12--)
     VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, "[]");
    VAR_12 = 0;
    VAR_13++;
   } else
    VAR_8[VAR_11++] = *VAR_14;
   break;
  case 'V':
   if (VAR_10 == VAR_4) {
    VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, "void");
    while (VAR_12--)
     VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, "[]");
    VAR_12 = 0;
   } else
    VAR_8[VAR_11++] = *VAR_14;
   break;
  case '[':
   if (VAR_10 != VAR_4)
    goto error;
   VAR_12++;
   break;
  case '(':
   if (VAR_10 != VAR_2)
    goto error;
   VAR_8[VAR_11++] = *VAR_14;
   VAR_10 = VAR_4;
   break;
  case ')':
   if (VAR_10 != VAR_4)
    goto error;
   VAR_8[VAR_11++] = *VAR_14;
   VAR_13 = 0;
   break;
  case ';':
   if (VAR_10 != VAR_0 && VAR_10 != VAR_1)
    goto error;

   if (FUNC_0(*(VAR_14 + 1)))
    VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, ".");
   if (VAR_10 == VAR_0)
    VAR_10 = VAR_2;
   else if (VAR_10 == VAR_1)
    VAR_10 = VAR_4;
   break;
  case '/':
   if (VAR_10 != VAR_0 && VAR_10 != VAR_1)
    goto error;
   VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_9 - VAR_11, ".");
   break;
  default :
   VAR_8[VAR_11++] = *VAR_14;
  }
 }
 VAR_8[VAR_11] = '\0';
 return VAR_8;
error:
 return ((void*)0);
}
