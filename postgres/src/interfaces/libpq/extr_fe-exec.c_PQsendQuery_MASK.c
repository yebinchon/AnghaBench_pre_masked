
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int asyncStatus; scalar_t__ last_query; int queryclass; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char,int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char const*,TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (char const*) ;

int
FUNC_9(PGconn *VAR_2, const char *VAR_3)
{
 if (!FUNC_0(VAR_2))
  return 0;


 if (!VAR_3)
 {
  FUNC_7(&VAR_2->errorMessage,
        FUNC_2("command string is a null pointer\n"));
  return 0;
 }


 if (FUNC_5('Q', 0, VAR_2) < 0 ||
  FUNC_6(VAR_3, VAR_2) < 0 ||
  FUNC_4(VAR_2) < 0)
 {

  return 0;
 }


 VAR_2->queryclass = VAR_1;



 if (VAR_2->last_query)
  FUNC_1(VAR_2->last_query);
 VAR_2->last_query = FUNC_8(VAR_3);





 if (FUNC_3(VAR_2) < 0)
 {

  return 0;
 }


 VAR_2->asyncStatus = VAR_0;
 return 1;
}
