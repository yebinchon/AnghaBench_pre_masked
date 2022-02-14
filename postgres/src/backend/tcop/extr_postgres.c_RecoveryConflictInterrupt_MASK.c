
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recoveryConflictPending; } ;
typedef int ProcSignalReason ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_8(ProcSignalReason VAR_11)
{
 int VAR_12 = VAR_9;




 if (!VAR_10)
 {
  VAR_7 = VAR_11;
  switch (VAR_11)
  {
   case 129:




    if (!FUNC_5())
     return;




   case 133:





    if (!FUNC_1())
     return;

    VAR_3->recoveryConflictPending = 1;




   case 131:
   case 128:
   case 130:




    if (!FUNC_4())
     return;
    if (!FUNC_3())
    {





     if (FUNC_2())
      return;

     VAR_6 = 1;
     VAR_5 = 1;
     VAR_1 = 1;
     break;
    }




   case 132:
    VAR_6 = 1;
    VAR_4 = 1;
    VAR_1 = 1;
    break;

   default:
    FUNC_7(VAR_0, "unrecognized conflict mode: %d",
      (int) VAR_11);
  }

  FUNC_0(VAR_6 && (VAR_5 || VAR_4));







  if (VAR_11 == 132)
   VAR_8 = 0;
 }






 FUNC_6(VAR_2);

 VAR_9 = VAR_12;
}
