
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 scalar_t__ FUNC_0 (char) ;
 int * FUNC_1 (char*,char) ;

__attribute__((used)) static size_t
FUNC_2(uint8_t *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
 uint8_t VAR_4, VAR_5 = 0;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
  if (VAR_0[VAR_6] == '<') {
   VAR_1 = VAR_6;
   break;
  }

 while (VAR_1 > 0) {
  if (FUNC_1("?!.,", VAR_0[VAR_1 - 1]) != ((void*)0))
   VAR_1--;

  else if (VAR_0[VAR_1 - 1] == ';') {
   size_t VAR_7 = VAR_1 - 2;

   while (VAR_7 > 0 && FUNC_0(VAR_0[VAR_7]))
    VAR_7--;

   if (VAR_7 < VAR_1 - 2 && VAR_0[VAR_7] == '&')
    VAR_1 = VAR_7;
   else
    VAR_1--;
  }
  else break;
 }

 if (VAR_1 == 0)
  return 0;

 VAR_4 = VAR_0[VAR_1 - 1];

 switch (VAR_4) {
 case '"': VAR_5 = '"'; break;
 case '\'': VAR_5 = '\''; break;
 case ')': VAR_5 = '('; break;
 case ']': VAR_5 = '['; break;
 case '}': VAR_5 = '{'; break;
 }

 if (VAR_5 != 0) {
  size_t VAR_8 = 0;
  size_t VAR_9 = 0;
  size_t VAR_10 = 0;
  while (VAR_10 < VAR_1) {
   if (VAR_0[VAR_10] == VAR_5)
    VAR_9++;
   else if (VAR_0[VAR_10] == VAR_4)
    VAR_8++;

   VAR_10++;
  }

  if (VAR_8 != VAR_9)
   VAR_1--;
 }

 return VAR_1;
}
