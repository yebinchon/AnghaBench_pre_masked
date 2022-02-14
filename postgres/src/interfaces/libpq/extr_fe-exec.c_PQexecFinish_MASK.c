
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ status; int errorMessage; } ;
struct TYPE_9__ {scalar_t__ resultStatus; int errMsg; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PGresult *
FUNC_5(PGconn *VAR_5)
{
 PGresult *VAR_6;
 PGresult *VAR_7;
 VAR_7 = ((void*)0);
 while ((VAR_6 = FUNC_1(VAR_5)) != ((void*)0))
 {
  if (VAR_7)
  {
   if (VAR_7->resultStatus == VAR_4 &&
    VAR_6->resultStatus == VAR_4)
   {
    FUNC_3(VAR_7, VAR_6->errMsg);
    FUNC_0(VAR_6);
    VAR_6 = VAR_7;




    FUNC_4(&VAR_5->errorMessage);
    FUNC_2(&VAR_5->errorMessage, VAR_6->errMsg);
   }
   else
    FUNC_0(VAR_7);
  }
  VAR_7 = VAR_6;
  if (VAR_6->resultStatus == VAR_2 ||
   VAR_6->resultStatus == VAR_3 ||
   VAR_6->resultStatus == VAR_1 ||
   VAR_5->status == VAR_0)
   break;
 }

 return VAR_7;
}
