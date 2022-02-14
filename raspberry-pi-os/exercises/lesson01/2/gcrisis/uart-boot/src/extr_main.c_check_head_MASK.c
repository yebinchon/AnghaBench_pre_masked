
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 char FUNC_0 () ;
 int FUNC_1 (char*) ;

void FUNC_2(char *VAR_0,int VAR_1)
{
    uint8_t VAR_2=0;
    while(1)
 {
  char VAR_3=FUNC_0();
  if(VAR_3==VAR_0[VAR_2])
  {
   VAR_2++;
  }
  else
  {
   if(VAR_3==VAR_0[0])
    VAR_2=1;
   else
    VAR_2=0;
  }
  if(VAR_2==VAR_1)
   break;
 }
 FUNC_1("OK");
}
