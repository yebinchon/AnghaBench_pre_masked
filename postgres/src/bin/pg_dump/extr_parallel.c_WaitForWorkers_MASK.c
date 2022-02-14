
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WFW_WaitOption ;
typedef int ParallelState ;
typedef int ArchiveHandle ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int VAR_0 ;





void
FUNC_4(ArchiveHandle *VAR_1, ParallelState *VAR_2, WFW_WaitOption VAR_3)
{
 bool VAR_4 = 0;






 if (VAR_3 == 130)
 {

  FUNC_0(!FUNC_2(VAR_2));
  VAR_4 = 1;
 }

 for (;;)
 {





  if (FUNC_3(VAR_1, VAR_2, VAR_4))
  {





   if (VAR_3 != 131)
    return;
  }


  switch (VAR_3)
  {
   case 129:
    return;
   case 130:
    FUNC_0(0);
    break;
   case 128:
    if (FUNC_1(VAR_2) != VAR_0)
     return;
    break;
   case 131:
    if (FUNC_2(VAR_2))
     return;
    break;
  }


  VAR_4 = 1;
 }
}
