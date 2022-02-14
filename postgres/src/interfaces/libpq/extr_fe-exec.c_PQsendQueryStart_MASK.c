
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; scalar_t__ asyncStatus; int singleRowMode; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool
FUNC_4(PGconn *VAR_2)
{
 if (!VAR_2)
  return 0;


 FUNC_3(&VAR_2->errorMessage);


 if (VAR_2->status != VAR_0)
 {
  FUNC_2(&VAR_2->errorMessage,
        FUNC_0("no connection to the server\n"));
  return 0;
 }

 if (VAR_2->asyncStatus != VAR_1)
 {
  FUNC_2(&VAR_2->errorMessage,
        FUNC_0("another command is already in progress\n"));
  return 0;
 }


 FUNC_1(VAR_2);


 VAR_2->singleRowMode = 0;


 return 1;
}
