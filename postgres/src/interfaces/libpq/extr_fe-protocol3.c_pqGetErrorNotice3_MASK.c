
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int errorMessage; TYPE_3__* result; int show_context; int verbosity; void* last_query; int last_sqlstate; } ;
struct TYPE_22__ {int noticeRecArg; int (* noticeRec ) (int ,TYPE_3__*) ;} ;
struct TYPE_24__ {TYPE_1__ noticeHooks; void* errMsg; void* errQuery; int resultStatus; } ;
struct TYPE_23__ {void* data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef TYPE_3__ PGresult ;
typedef TYPE_4__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (char*,TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_4__*) ;
 void* FUNC_10 (TYPE_3__*,void*) ;
 int FUNC_11 (TYPE_3__*,char,void*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,void*,int) ;
 int FUNC_15 (int ,TYPE_3__*) ;
 int FUNC_16 (TYPE_2__*) ;

int
FUNC_17(PGconn *VAR_6, bool VAR_7)
{
 PGresult *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 PQExpBufferData VAR_10;
 char VAR_11;






 if (VAR_7)
  FUNC_7(VAR_6);







 FUNC_4(&VAR_10);
 VAR_8 = FUNC_2(VAR_6, VAR_1);
 if (VAR_8)
  VAR_8->resultStatus = VAR_7 ? VAR_2 : VAR_3;







 for (;;)
 {
  if (FUNC_8(&VAR_11, VAR_6))
   goto fail;
  if (VAR_11 == '\0')
   break;
  if (FUNC_9(&VAR_10, VAR_6))
   goto fail;
  FUNC_11(VAR_8, VAR_11, VAR_10.data);
  if (VAR_11 == VAR_4)
   FUNC_14(VAR_6->last_sqlstate, VAR_10.data,
     sizeof(VAR_6->last_sqlstate));
  else if (VAR_11 == VAR_5)
   VAR_9 = 1;
 }






 if (VAR_9 && VAR_6->last_query && VAR_8)
  VAR_8->errQuery = FUNC_10(VAR_8, VAR_6->last_query);




 FUNC_13(&VAR_10);
 FUNC_6(&VAR_10, VAR_8, VAR_6->verbosity, VAR_6->show_context);




 if (VAR_7)
 {
  if (VAR_8)
   VAR_8->errMsg = FUNC_10(VAR_8, VAR_10.data);
  FUNC_7(VAR_6);
  VAR_6->result = VAR_8;
  if (FUNC_0(VAR_10))
   FUNC_12(&VAR_6->errorMessage,
         FUNC_5("out of memory"));
  else
   FUNC_3(&VAR_6->errorMessage, VAR_10.data);
 }
 else
 {

  if (VAR_8)
  {

   VAR_8->errMsg = VAR_10.data;
   if (VAR_8->noticeHooks.noticeRec != ((void*)0))
    VAR_8->noticeHooks.noticeRec(VAR_8->noticeHooks.noticeRecArg, VAR_8);
   FUNC_1(VAR_8);
  }
 }

 FUNC_16(&VAR_10);
 return 0;

fail:
 FUNC_1(VAR_8);
 FUNC_16(&VAR_10);
 return VAR_0;
}
