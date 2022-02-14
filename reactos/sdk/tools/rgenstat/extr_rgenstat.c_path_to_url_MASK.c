
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char*
FUNC_0(char* VAR_0)
{
   int VAR_1;

   VAR_1 = 0;
   while (VAR_0[VAR_1] != 0)
     {
 if (VAR_0[VAR_1] == '\\')
   {
      VAR_0[VAR_1] = '/';
   }
 VAR_1++;
     }
   return(VAR_0);
}
