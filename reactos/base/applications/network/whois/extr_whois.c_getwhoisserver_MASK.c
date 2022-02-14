
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;

void FUNC_1(int VAR_3, char **VAR_4)
{
 int VAR_5 = 1;

    while(VAR_5 < VAR_3)
 {
  if (!FUNC_0(VAR_4[VAR_5], "-h"))
  {
   if (VAR_5 + 2 < VAR_3)
   {
    VAR_1 = VAR_4[VAR_5 +1];
    VAR_2 = VAR_5 + 1;
   }
   else
   {
    VAR_2 = VAR_3;
   }
   return;
  }
  VAR_5++;
 }
 VAR_1 = VAR_0;
 VAR_2 = 1;
}
