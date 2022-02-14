
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ status; int errorMessage; int asyncStatus; int pversion; } ;
struct TYPE_8__ {scalar_t__ resultStatus; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGconn ;
typedef scalar_t__ ExecStatusType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static bool
FUNC_6(PGconn *VAR_5)
{
 PGresult *VAR_6;

 if (!VAR_5)
  return 0;





 while ((VAR_6 = FUNC_2(VAR_5)) != ((void*)0))
 {
  ExecStatusType VAR_7 = VAR_6->resultStatus;

  FUNC_1(VAR_6);
  if (VAR_7 == VAR_3)
  {
   if (FUNC_0(VAR_5->pversion) >= 3)
   {

    if (FUNC_3(VAR_5,
         FUNC_4("COPY terminated by new PQexec")) < 0)
     return 0;

   }
   else
   {

    FUNC_5(&VAR_5->errorMessage,
          FUNC_4("COPY IN state must be terminated first\n"));
    return 0;
   }
  }
  else if (VAR_7 == VAR_4)
  {
   if (FUNC_0(VAR_5->pversion) >= 3)
   {





    VAR_5->asyncStatus = VAR_1;

   }
   else
   {

    FUNC_5(&VAR_5->errorMessage,
          FUNC_4("COPY OUT state must be terminated first\n"));
    return 0;
   }
  }
  else if (VAR_7 == VAR_2)
  {

   FUNC_5(&VAR_5->errorMessage,
         FUNC_4("PQexec not allowed during COPY BOTH\n"));
   return 0;
  }

  if (VAR_5->status == VAR_0)
   return 0;
 }


 return 1;
}
