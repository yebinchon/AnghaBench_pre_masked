
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ asyncStatus; int outBufSize; int outCount; int pversion; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (char,int,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*,int,TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10(PGconn *VAR_2, const char *VAR_3, int VAR_4)
{
 if (!VAR_2)
  return -1;
 if (VAR_2->asyncStatus != VAR_1 &&
  VAR_2->asyncStatus != VAR_0)
 {
  FUNC_9(&VAR_2->errorMessage,
        FUNC_1("no COPY in progress\n"));
  return -1;
 }
 FUNC_2(VAR_2);

 if (VAR_4 > 0)
 {







  if ((VAR_2->outBufSize - VAR_2->outCount - 5) < VAR_4)
  {
   if (FUNC_4(VAR_2) < 0)
    return -1;
   if (FUNC_3(VAR_2->outCount + 5 + (size_t) VAR_4,
           VAR_2))
    return FUNC_5(VAR_2) ? 0 : -1;
  }

  if (FUNC_0(VAR_2->pversion) >= 3)
  {
   if (FUNC_7('d', 0, VAR_2) < 0 ||
    FUNC_8(VAR_3, VAR_4, VAR_2) < 0 ||
    FUNC_6(VAR_2) < 0)
    return -1;
  }
  else
  {
   if (FUNC_7(0, 0, VAR_2) < 0 ||
    FUNC_8(VAR_3, VAR_4, VAR_2) < 0 ||
    FUNC_6(VAR_2) < 0)
    return -1;
  }
 }
 return 1;
}
