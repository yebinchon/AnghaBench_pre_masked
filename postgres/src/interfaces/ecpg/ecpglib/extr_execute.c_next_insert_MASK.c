
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, int VAR_1, bool VAR_2, bool VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5 = VAR_1;

 for (; VAR_0[VAR_5] != '\0'; VAR_5++)
 {
  if (VAR_4 && !VAR_3 && VAR_0[VAR_5] == '\\')
   VAR_5++;
  else if (VAR_0[VAR_5] == '\'')
   VAR_4 = VAR_4 ? 0 : 1;
  else if (!VAR_4)
  {
   if (VAR_0[VAR_5] == '$' && FUNC_2((unsigned char) VAR_0[VAR_5 + 1]))
   {

    int VAR_6;

    for (VAR_6 = VAR_5 + 1; FUNC_2((unsigned char) VAR_0[VAR_6]); VAR_6++)
                            ;
    if (!FUNC_0((unsigned char) VAR_0[VAR_6]) &&
     FUNC_1((unsigned char) VAR_0[VAR_6]) &&VAR_0[VAR_6] != '_')

     return VAR_5;
   }
   else if (VAR_2 && VAR_0[VAR_5] == '?')
   {

    return VAR_5;
   }
  }
 }

 return -1;
}
