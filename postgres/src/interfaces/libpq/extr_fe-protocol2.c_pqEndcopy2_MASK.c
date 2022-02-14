
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int len; char* data; } ;
struct TYPE_15__ {scalar_t__ asyncStatus; int noticeHooks; TYPE_3__ errorMessage; } ;
struct TYPE_14__ {scalar_t__ resultStatus; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,char*,...) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;

int
FUNC_11(PGconn *VAR_4)
{
 PGresult *VAR_5;

 if (VAR_4->asyncStatus != VAR_1 &&
  VAR_4->asyncStatus != VAR_2)
 {
  FUNC_9(&VAR_4->errorMessage,
        FUNC_5("no COPY in progress\n"));
  return 1;
 }





 if (FUNC_6(VAR_4) && FUNC_8(VAR_4))
  return 1;


 if (FUNC_8(VAR_4) && FUNC_2(VAR_4))
  return 1;


 VAR_4->asyncStatus = VAR_0;
 FUNC_10(&VAR_4->errorMessage);


 VAR_5 = FUNC_1(VAR_4);


 if (VAR_5 && VAR_5->resultStatus == VAR_3)
 {
  FUNC_0(VAR_5);
  return 0;
 }
 if (VAR_4->errorMessage.len > 0)
 {

  char VAR_6 = VAR_4->errorMessage.data[VAR_4->errorMessage.len - 1];

  if (VAR_6 == '\n')
   VAR_4->errorMessage.data[VAR_4->errorMessage.len - 1] = '\0';
  FUNC_7(&VAR_4->noticeHooks, "%s", VAR_4->errorMessage.data);
  VAR_4->errorMessage.data[VAR_4->errorMessage.len - 1] = VAR_6;
 }

 FUNC_0(VAR_5);






 FUNC_7(&VAR_4->noticeHooks,
      "lost synchronization with server, resetting connection");






 if (FUNC_8(VAR_4))
  FUNC_4(VAR_4);
 else
  FUNC_3(VAR_4);

 return 1;
}
