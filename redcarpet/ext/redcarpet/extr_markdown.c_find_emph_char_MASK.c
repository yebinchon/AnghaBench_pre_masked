
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static size_t
FUNC_0(uint8_t *VAR_0, size_t VAR_1, uint8_t VAR_2)
{
 size_t VAR_3 = 1;

 while (VAR_3 < VAR_1) {
  while (VAR_3 < VAR_1 && VAR_0[VAR_3] != VAR_2 && VAR_0[VAR_3] != '[')
   VAR_3++;

  if (VAR_3 == VAR_1)
   return 0;


  if (VAR_3 && VAR_0[VAR_3 - 1] == '\\') {
   VAR_3++; continue;
  }

  if (VAR_0[VAR_3] == VAR_2)
   return VAR_3;

  if (VAR_0[VAR_3] == '`') {
   size_t VAR_4 = 0, VAR_5;
   size_t VAR_6 = 0;


   while (VAR_3 < VAR_1 && VAR_0[VAR_3] == '`') {
    VAR_3++; VAR_4++;
   }

   if (VAR_3 >= VAR_1) return 0;


   VAR_5 = 0;
   while (VAR_3 < VAR_1 && VAR_5 < VAR_4) {
    if (!VAR_6 && VAR_0[VAR_3] == VAR_2) VAR_6 = VAR_3;
    if (VAR_0[VAR_3] == '`') VAR_5++;
    else VAR_5 = 0;
    VAR_3++;
   }

   if (VAR_3 >= VAR_1) return VAR_6;
  }

  else if (VAR_0[VAR_3] == '[') {
   size_t VAR_7 = 0;
   uint8_t VAR_8;

   VAR_3++;
   while (VAR_3 < VAR_1 && VAR_0[VAR_3] != ']') {
    if (!VAR_7 && VAR_0[VAR_3] == VAR_2) VAR_7 = VAR_3;
    VAR_3++;
   }

   VAR_3++;
   while (VAR_3 < VAR_1 && (VAR_0[VAR_3] == ' ' || VAR_0[VAR_3] == '\n'))
    VAR_3++;

   if (VAR_3 >= VAR_1)
    return VAR_7;

   switch (VAR_0[VAR_3]) {
   case '[':
    VAR_8 = ']'; break;

   case '(':
    VAR_8 = ')'; break;

   default:
    if (VAR_7)
     return VAR_7;
    else
     continue;
   }

   VAR_3++;
   while (VAR_3 < VAR_1 && VAR_0[VAR_3] != VAR_8) {
    if (!VAR_7 && VAR_0[VAR_3] == VAR_2) VAR_7 = VAR_3;
    VAR_3++;
   }

   if (VAR_3 >= VAR_1)
    return VAR_7;

   VAR_3++;
  }
 }

 return 0;
}
