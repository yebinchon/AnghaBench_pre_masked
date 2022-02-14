
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int asyncStatus; int * last_query; int queryclass; int errorMessage; int pversion; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char,int,TYPE_1__*) ;
 scalar_t__ FUNC_7 (char,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*,TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int
FUNC_10(PGconn *VAR_2, char VAR_3, const char *VAR_4)
{

 if (!VAR_4)
  VAR_4 = "";

 if (!FUNC_1(VAR_2))
  return 0;


 if (FUNC_0(VAR_2->pversion) < 3)
 {
  FUNC_9(&VAR_2->errorMessage,
        FUNC_3("function requires at least protocol version 3.0\n"));
  return 0;
 }


 if (FUNC_6('D', 0, VAR_2) < 0 ||
  FUNC_7(VAR_3, VAR_2) < 0 ||
  FUNC_8(VAR_4, VAR_2) < 0 ||
  FUNC_5(VAR_2) < 0)
  goto sendFailed;


 if (FUNC_6('S', 0, VAR_2) < 0 ||
  FUNC_5(VAR_2) < 0)
  goto sendFailed;


 VAR_2->queryclass = VAR_1;


 if (VAR_2->last_query)
 {
  FUNC_2(VAR_2->last_query);
  VAR_2->last_query = ((void*)0);
 }





 if (FUNC_4(VAR_2) < 0)
  goto sendFailed;


 VAR_2->asyncStatus = VAR_0;
 return 1;

sendFailed:

 return 0;
}
