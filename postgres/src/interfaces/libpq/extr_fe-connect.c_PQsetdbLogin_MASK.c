
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int errorMessage; int status; void* pgpass; void* pguser; void* pgtty; void* pgoptions; void* pgport; void* pghost; void* dbName; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (char const*) ;
 void* FUNC_9 (char const*) ;

PGconn *
FUNC_10(const char *VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5, const char *VAR_6,
    const char *VAR_7)
{
 PGconn *VAR_8;




 VAR_8 = FUNC_6();
 if (VAR_8 == ((void*)0))
  return ((void*)0);





 if (VAR_5 && FUNC_8(VAR_5))
 {
  if (!FUNC_2(VAR_8, VAR_5))
   return VAR_8;
 }
 else
 {




  if (!FUNC_2(VAR_8, ""))
   return VAR_8;


  if (VAR_5 && VAR_5[0] != '\0')
  {
   if (VAR_8->dbName)
    FUNC_4(VAR_8->dbName);
   VAR_8->dbName = FUNC_9(VAR_5);
   if (!VAR_8->dbName)
    goto oom_error;
  }
 }





 if (VAR_1 && VAR_1[0] != '\0')
 {
  if (VAR_8->pghost)
   FUNC_4(VAR_8->pghost);
  VAR_8->pghost = FUNC_9(VAR_1);
  if (!VAR_8->pghost)
   goto oom_error;
 }

 if (VAR_2 && VAR_2[0] != '\0')
 {
  if (VAR_8->pgport)
   FUNC_4(VAR_8->pgport);
  VAR_8->pgport = FUNC_9(VAR_2);
  if (!VAR_8->pgport)
   goto oom_error;
 }

 if (VAR_3 && VAR_3[0] != '\0')
 {
  if (VAR_8->pgoptions)
   FUNC_4(VAR_8->pgoptions);
  VAR_8->pgoptions = FUNC_9(VAR_3);
  if (!VAR_8->pgoptions)
   goto oom_error;
 }

 if (VAR_4 && VAR_4[0] != '\0')
 {
  if (VAR_8->pgtty)
   FUNC_4(VAR_8->pgtty);
  VAR_8->pgtty = FUNC_9(VAR_4);
  if (!VAR_8->pgtty)
   goto oom_error;
 }

 if (VAR_6 && VAR_6[0] != '\0')
 {
  if (VAR_8->pguser)
   FUNC_4(VAR_8->pguser);
  VAR_8->pguser = FUNC_9(VAR_6);
  if (!VAR_8->pguser)
   goto oom_error;
 }

 if (VAR_7 && VAR_7[0] != '\0')
 {
  if (VAR_8->pgpass)
   FUNC_4(VAR_8->pgpass);
  VAR_8->pgpass = FUNC_9(VAR_7);
  if (!VAR_8->pgpass)
   goto oom_error;
 }




 if (!FUNC_3(VAR_8))
  return VAR_8;




 if (FUNC_1(VAR_8))
  (void) FUNC_0(VAR_8);

 return VAR_8;

oom_error:
 VAR_8->status = VAR_0;
 FUNC_7(&VAR_8->errorMessage,
       FUNC_5("out of memory\n"));
 return VAR_8;
}
