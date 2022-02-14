
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int len; char* data; } ;
struct TYPE_15__ {scalar_t__ asyncStatus; scalar_t__ queryclass; TYPE_3__ errorMessage; int noticeHooks; } ;
struct TYPE_14__ {scalar_t__ resultStatus; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,char*,char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (char,int,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;

int
FUNC_11(PGconn *VAR_6)
{
 PGresult *VAR_7;

 if (VAR_6->asyncStatus != VAR_2 &&
  VAR_6->asyncStatus != VAR_3 &&
  VAR_6->asyncStatus != VAR_1)
 {
  FUNC_9(&VAR_6->errorMessage,
        FUNC_3("no COPY in progress\n"));
  return 1;
 }


 if (VAR_6->asyncStatus == VAR_2 ||
  VAR_6->asyncStatus == VAR_1)
 {
  if (FUNC_8('c', 0, VAR_6) < 0 ||
   FUNC_7(VAR_6) < 0)
   return 1;





  if (VAR_6->queryclass != VAR_4)
  {
   if (FUNC_8('S', 0, VAR_6) < 0 ||
    FUNC_7(VAR_6) < 0)
    return 1;
  }
 }





 if (FUNC_4(VAR_6) && FUNC_6(VAR_6))
  return 1;


 VAR_6->asyncStatus = VAR_0;
 FUNC_10(&VAR_6->errorMessage);
 if (FUNC_6(VAR_6) && FUNC_2(VAR_6))
  return 1;


 VAR_7 = FUNC_1(VAR_6);


 if (VAR_7 && VAR_7->resultStatus == VAR_5)
 {
  FUNC_0(VAR_7);
  return 0;
 }
 if (VAR_6->errorMessage.len > 0)
 {

  char VAR_8 = VAR_6->errorMessage.data[VAR_6->errorMessage.len - 1];

  if (VAR_8 == '\n')
   VAR_6->errorMessage.data[VAR_6->errorMessage.len - 1] = '\0';
  FUNC_5(&VAR_6->noticeHooks, "%s", VAR_6->errorMessage.data);
  VAR_6->errorMessage.data[VAR_6->errorMessage.len - 1] = VAR_8;
 }

 FUNC_0(VAR_7);

 return 1;
}
