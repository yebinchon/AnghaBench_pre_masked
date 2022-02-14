
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ xactStatus; int errorMessage; TYPE_3__* result; } ;
struct TYPE_18__ {int noticeRecArg; int (* noticeRec ) (int ,TYPE_3__*) ;} ;
struct TYPE_20__ {TYPE_1__ noticeHooks; int errMsg; int resultStatus; } ;
struct TYPE_19__ {char* data; int len; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef TYPE_3__ PGresult ;
typedef TYPE_4__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (TYPE_3__*,int ,char*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (char*,char) ;
 char* FUNC_14 (char*,char*) ;
 int FUNC_15 (int ,TYPE_3__*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_17(PGconn *VAR_9, bool VAR_10)
{
 PGresult *VAR_11 = ((void*)0);
 PQExpBufferData VAR_12;
 char *VAR_13;
 char *VAR_14;






 if (VAR_10)
  FUNC_7(VAR_9);






 FUNC_4(&VAR_12);
 if (FUNC_8(&VAR_12, VAR_9))
  goto failure;
 VAR_11 = FUNC_2(VAR_9, VAR_1);
 if (VAR_11)
 {
  VAR_11->resultStatus = VAR_10 ? VAR_2 : VAR_3;
  VAR_11->errMsg = FUNC_9(VAR_11, VAR_12.data);
 }
 while (VAR_12.len > 0 && VAR_12.data[VAR_12.len - 1] == '\n')
  VAR_12.data[--VAR_12.len] = '\0';
 VAR_14 = FUNC_14(VAR_12.data, ":  ");
 if (VAR_14)
 {

  *VAR_14 = '\0';
  FUNC_10(VAR_11, VAR_6, VAR_12.data);
  VAR_13 = VAR_14 + 3;
 }
 else
 {

  VAR_13 = VAR_12.data;
 }
 VAR_14 = FUNC_13(VAR_13, '\n');
 if (VAR_14)
 {

  *VAR_14++ = '\0';
  FUNC_10(VAR_11, VAR_5, VAR_13);

  while (*VAR_14 && FUNC_5((unsigned char) *VAR_14))
   VAR_14++;
  FUNC_10(VAR_11, VAR_4, VAR_14);
 }
 else
 {

  FUNC_10(VAR_11, VAR_5, VAR_13);
 }






 if (VAR_10)
 {
  FUNC_7(VAR_9);
  VAR_9->result = VAR_11;
  FUNC_12(&VAR_9->errorMessage);
  if (VAR_11 && !FUNC_0(VAR_12) && VAR_11->errMsg)
   FUNC_3(&VAR_9->errorMessage, VAR_11->errMsg);
  else
   FUNC_11(&VAR_9->errorMessage,
         FUNC_6("out of memory"));
  if (VAR_9->xactStatus == VAR_8)
   VAR_9->xactStatus = VAR_7;
 }
 else
 {
  if (VAR_11)
  {
   if (VAR_11->noticeHooks.noticeRec != ((void*)0))
    VAR_11->noticeHooks.noticeRec(VAR_11->noticeHooks.noticeRecArg, VAR_11);
   FUNC_1(VAR_11);
  }
 }

 FUNC_16(&VAR_12);
 return 0;

failure:
 if (VAR_11)
  FUNC_1(VAR_11);
 FUNC_16(&VAR_12);
 return VAR_0;
}
