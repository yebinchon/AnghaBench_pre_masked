
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int asyncStatus; scalar_t__ last_query; int queryclass; int errorMessage; int pversion; } ;
typedef TYPE_1__ PGconn ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int const,int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (char,int,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*,TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (char const*) ;

int
FUNC_11(PGconn *VAR_2,
     const char *VAR_3, const char *VAR_4,
     int VAR_5, const Oid *VAR_6)
{
 if (!FUNC_1(VAR_2))
  return 0;


 if (!VAR_3)
 {
  FUNC_9(&VAR_2->errorMessage,
        FUNC_3("statement name is a null pointer\n"));
  return 0;
 }
 if (!VAR_4)
 {
  FUNC_9(&VAR_2->errorMessage,
        FUNC_3("command string is a null pointer\n"));
  return 0;
 }
 if (VAR_5 < 0 || VAR_5 > 65535)
 {
  FUNC_9(&VAR_2->errorMessage,
        FUNC_3("number of parameters must be between 0 and 65535\n"));
  return 0;
 }


 if (FUNC_0(VAR_2->pversion) < 3)
 {
  FUNC_9(&VAR_2->errorMessage,
        FUNC_3("function requires at least protocol version 3.0\n"));
  return 0;
 }


 if (FUNC_7('P', 0, VAR_2) < 0 ||
  FUNC_8(VAR_3, VAR_2) < 0 ||
  FUNC_8(VAR_4, VAR_2) < 0)
  goto sendFailed;

 if (VAR_5 > 0 && VAR_6)
 {
  int VAR_7;

  if (FUNC_5(VAR_5, 2, VAR_2) < 0)
   goto sendFailed;
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  {
   if (FUNC_5(VAR_6[VAR_7], 4, VAR_2) < 0)
    goto sendFailed;
  }
 }
 else
 {
  if (FUNC_5(0, 2, VAR_2) < 0)
   goto sendFailed;
 }
 if (FUNC_6(VAR_2) < 0)
  goto sendFailed;


 if (FUNC_7('S', 0, VAR_2) < 0 ||
  FUNC_6(VAR_2) < 0)
  goto sendFailed;


 VAR_2->queryclass = VAR_1;



 if (VAR_2->last_query)
  FUNC_2(VAR_2->last_query);
 VAR_2->last_query = FUNC_10(VAR_4);





 if (FUNC_4(VAR_2) < 0)
  goto sendFailed;


 VAR_2->asyncStatus = VAR_0;
 return 1;

sendFailed:

 return 0;
}
