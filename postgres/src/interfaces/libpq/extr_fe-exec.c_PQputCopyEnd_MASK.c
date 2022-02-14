
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ asyncStatus; scalar_t__ queryclass; int errorMessage; int pversion; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (char,int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*,int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char const*,TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(PGconn *VAR_5, const char *VAR_6)
{
 if (!VAR_5)
  return -1;
 if (VAR_5->asyncStatus != VAR_2 &&
  VAR_5->asyncStatus != VAR_1)
 {
  FUNC_7(&VAR_5->errorMessage,
        FUNC_1("no COPY in progress\n"));
  return -1;
 }





 if (FUNC_0(VAR_5->pversion) >= 3)
 {
  if (VAR_6)
  {

   if (FUNC_4('f', 0, VAR_5) < 0 ||
    FUNC_6(VAR_6, VAR_5) < 0 ||
    FUNC_3(VAR_5) < 0)
    return -1;
  }
  else
  {

   if (FUNC_4('c', 0, VAR_5) < 0 ||
    FUNC_3(VAR_5) < 0)
    return -1;
  }





  if (VAR_5->queryclass != VAR_4)
  {
   if (FUNC_4('S', 0, VAR_5) < 0 ||
    FUNC_3(VAR_5) < 0)
    return -1;
  }
 }
 else
 {
  if (VAR_6)
  {

   FUNC_7(&VAR_5->errorMessage,
         FUNC_1("function requires at least protocol version 3.0\n"));
   return -1;
  }
  else
  {

   if (FUNC_4(0, 0, VAR_5) < 0 ||
    FUNC_5("\\.\n", 3, VAR_5) < 0 ||
    FUNC_3(VAR_5) < 0)
    return -1;
  }
 }


 if (VAR_5->asyncStatus == VAR_1)
  VAR_5->asyncStatus = VAR_3;
 else
  VAR_5->asyncStatus = VAR_0;
 FUNC_8(&VAR_5->errorMessage);


 if (FUNC_2(VAR_5) < 0)
  return -1;

 return 1;
}
