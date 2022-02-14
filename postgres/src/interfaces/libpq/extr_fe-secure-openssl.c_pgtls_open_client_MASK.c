
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ssl; } ;
typedef int PostgresPollingStatusType ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

PostgresPollingStatusType
FUNC_3(PGconn *VAR_1)
{

 if (VAR_1->ssl == ((void*)0))
 {




  if (FUNC_0(VAR_1) != 0)
  {

   FUNC_2(VAR_1);
   return VAR_0;
  }
 }


 return FUNC_1(VAR_1);
}
