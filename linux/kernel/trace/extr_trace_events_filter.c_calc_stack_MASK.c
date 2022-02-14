
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6)
{
 bool VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 1;
 int VAR_10 = 0;
 int VAR_11 = 1;
 int VAR_12 = 0;
 int VAR_13;

 *VAR_6 = 0;

 for (VAR_13 = 0; VAR_3[VAR_13]; VAR_13++) {
  if (FUNC_0(VAR_3[VAR_13]))
   continue;
  if (VAR_12) {
   if (VAR_3[VAR_13] == VAR_12)
          VAR_12 = 0;
   continue;
  }

  switch (VAR_3[VAR_13]) {
  case '\'':
  case '"':
   VAR_12 = VAR_3[VAR_13];
   VAR_10 = VAR_13;
   break;
  case '|':
  case '&':
   if (VAR_3[VAR_13+1] != VAR_3[VAR_13])
    break;
   VAR_7 = 0;
   continue;
  case '(':
   VAR_7 = 0;
   VAR_9++;
   if (VAR_9 > VAR_11)
    VAR_11 = VAR_9;
   continue;
  case ')':
   VAR_7 = 0;
   if (VAR_9 == 1) {
    *VAR_6 = VAR_13;
    return VAR_1;
   }
   VAR_9--;
   continue;
  }
  if (!VAR_7) {
   VAR_8++;
   VAR_7 = 1;
  }
 }

 if (VAR_12) {
  *VAR_6 = VAR_10;
  return VAR_0;
 }

 if (VAR_9 != 1) {
  int VAR_14 = VAR_9;


  for (VAR_13--; VAR_13; VAR_13--) {
   if (VAR_12) {
    if (VAR_3[VAR_13] == VAR_12)
     VAR_12 = 0;
    continue;
   }
   switch (VAR_3[VAR_13]) {
   case '(':
    if (VAR_14 == VAR_9) {
     *VAR_6 = VAR_13;
     return VAR_2;
    }
    VAR_14--;
    break;
   case ')':
    VAR_14++;
    break;
   case '\'':
   case '"':
    VAR_12 = VAR_3[VAR_13];
    break;
   }
  }

  *VAR_6 = 0;
  return VAR_2;
 }


 *VAR_4 = VAR_11;
 *VAR_5 = VAR_8;
 return 0;
}
