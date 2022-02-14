
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* ropt; scalar_t__ n_errors; } ;
struct TYPE_18__ {scalar_t__ mode; int * connection; int (* ClonePtr ) (TYPE_4__*) ;TYPE_1__ public; scalar_t__ savedPassword; int * currTablespace; int * currSchema; int * currUser; int * connCancel; int sqlparse; } ;
struct TYPE_17__ {int data; } ;
struct TYPE_16__ {char* pghost; char* pgport; char* username; int promptPassword; int dbname; } ;
typedef TYPE_2__ RestoreOptions ;
typedef TYPE_3__ PQExpBufferData ;
typedef TYPE_4__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,char*,char*,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_11 (int *,int ,int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_3__*) ;

ArchiveHandle *
FUNC_16(ArchiveHandle *VAR_2)
{
 ArchiveHandle *VAR_3;


 VAR_3 = (ArchiveHandle *) FUNC_12(sizeof(ArchiveHandle));
 FUNC_10(VAR_3, VAR_2, sizeof(ArchiveHandle));


 FUNC_11(&(VAR_3->sqlparse), 0, sizeof(VAR_3->sqlparse));


 VAR_3->connection = ((void*)0);
 VAR_3->connCancel = ((void*)0);
 VAR_3->currUser = ((void*)0);
 VAR_3->currSchema = ((void*)0);
 VAR_3->currTablespace = ((void*)0);


 if (VAR_3->savedPassword)
  VAR_3->savedPassword = FUNC_13(VAR_3->savedPassword);


 VAR_3->public.n_errors = 0;







 if (VAR_2->mode == VAR_1)
 {
  RestoreOptions *VAR_4 = VAR_2->public.ropt;

  FUNC_0(VAR_2->connection == ((void*)0));


  FUNC_1((Archive *) VAR_3, VAR_4->dbname,
      VAR_4->pghost, VAR_4->pgport, VAR_4->username,
      VAR_4->promptPassword);


  FUNC_6(VAR_3);
 }
 else
 {
  PQExpBufferData VAR_5;
  char *VAR_6;
  char *VAR_7;
  char *VAR_8;

  FUNC_0(VAR_2->connection != ((void*)0));







  FUNC_9(&VAR_5);
  FUNC_8(&VAR_5, "dbname=");
  FUNC_7(&VAR_5, FUNC_2(VAR_2->connection));
  VAR_6 = FUNC_3(VAR_2->connection);
  VAR_7 = FUNC_4(VAR_2->connection);
  VAR_8 = FUNC_5(VAR_2->connection);


  FUNC_1((Archive *) VAR_3, VAR_5.data,
      VAR_6, VAR_7, VAR_8, VAR_0);

  FUNC_15(&VAR_5);

 }


 VAR_3->ClonePtr(VAR_3);

 FUNC_0(VAR_3->connection != ((void*)0));
 return VAR_3;
}
