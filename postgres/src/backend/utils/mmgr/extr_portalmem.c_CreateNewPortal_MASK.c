
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Portal ;


 int FUNC_0 (char*,int,int) ;
 int * FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,unsigned int) ;

Portal
FUNC_3(void)
{
 static unsigned int VAR_1 = 0;

 char VAR_2[VAR_0];


 for (;;)
 {
  VAR_1++;
  FUNC_2(VAR_2, "<unnamed portal %u>", VAR_1);
  if (FUNC_1(VAR_2) == ((void*)0))
   break;
 }

 return FUNC_0(VAR_2, 0, 0);
}
