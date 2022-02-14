
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_29__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef int teReqs ;
struct TYPE_33__ {char* desc; int reqs; char* namespace; int tag; scalar_t__ created; int * copyStmt; scalar_t__ hadDumper; int * defn; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_34__ {scalar_t__ n_errors; TYPE_2__* ropt; } ;
struct TYPE_37__ {scalar_t__ outputKind; TYPE_29__ public; int (* PrintTocDataPtr ) (TYPE_4__*,TYPE_1__*) ;int connection; TYPE_1__* lastErrorTE; TYPE_1__* currentTE; } ;
struct TYPE_36__ {int data; } ;
struct TYPE_35__ {int dbname; scalar_t__ noDataForFailedTables; int dataOnly; int suppressDumpWarnings; } ;
typedef TYPE_2__ RestoreOptions ;
typedef TYPE_3__ PQExpBufferData ;
typedef TYPE_4__ ArchiveHandle ;


 int FUNC_0 (TYPE_29__*) ;
 int FUNC_1 (TYPE_29__*,int ) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_29__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_1__*,int) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (TYPE_4__*,char*,char*,...) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*,char*) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_18 (char*,char*,...) ;
 int FUNC_19 (char*,int *) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_23 (TYPE_4__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_24(ArchiveHandle *VAR_9, TocEntry *VAR_10, bool VAR_11)
{
 RestoreOptions *VAR_12 = VAR_9->public.ropt;
 int VAR_13 = VAR_8;
 teReqs VAR_14;
 bool VAR_15;

 VAR_9->currentTE = VAR_10;


 if (!VAR_12->suppressDumpWarnings && FUNC_20(VAR_10->desc, "WARNING") == 0)
 {
  if (!VAR_12->dataOnly && VAR_10->defn != ((void*)0) && FUNC_21(VAR_10->defn) != 0)
   FUNC_19("warning from original dump file: %s", VAR_10->defn);
  else if (VAR_10->copyStmt != ((void*)0) && FUNC_21(VAR_10->copyStmt) != 0)
   FUNC_19("warning from original dump file: %s", VAR_10->copyStmt);
 }


 VAR_14 = VAR_10->reqs;

 VAR_15 = 0;




 if ((VAR_14 & VAR_4) != 0)
 {

  if (VAR_10->namespace)
   FUNC_18("creating %s \"%s.%s\"",
      VAR_10->desc, VAR_10->namespace, VAR_10->tag);
  else
   FUNC_18("creating %s \"%s\"",
      VAR_10->desc, VAR_10->tag);

  FUNC_8(VAR_9, VAR_10, 0);
  VAR_15 = 1;

  if (FUNC_20(VAR_10->desc, "TABLE") == 0)
  {
   if (VAR_9->lastErrorTE == VAR_10)
   {
    if (VAR_12->noDataForFailedTables)
    {
     if (VAR_11)
      VAR_13 = VAR_7;
     else
      FUNC_15(VAR_9, VAR_10);
    }
   }
   else
   {







    if (VAR_11)
     VAR_13 = VAR_5;
    else
     FUNC_17(VAR_9, VAR_10);
   }
  }






  if (FUNC_20(VAR_10->desc, "DATABASE") == 0 ||
   FUNC_20(VAR_10->desc, "DATABASE PROPERTIES") == 0)
  {
   PQExpBufferData VAR_16;

   FUNC_16(&VAR_16);
   FUNC_13(&VAR_16, "dbname=");
   FUNC_12(&VAR_16, VAR_10->tag);


   FUNC_18("connecting to new database \"%s\"", VAR_10->tag);
   FUNC_9(VAR_9, VAR_10->tag);
   VAR_12->dbname = VAR_16.data;
  }
 }




 if ((VAR_14 & VAR_3) != 0)
 {





  if (VAR_10->hadDumper)
  {



   if (VAR_9->PrintTocDataPtr != ((void*)0))
   {
    FUNC_8(VAR_9, VAR_10, 1);

    if (FUNC_20(VAR_10->desc, "BLOBS") == 0 ||
     FUNC_20(VAR_10->desc, "BLOB COMMENTS") == 0)
    {
     FUNC_18("processing %s", VAR_10->desc);

     FUNC_10(VAR_9, "pg_catalog");


     if (FUNC_20(VAR_10->desc, "BLOB COMMENTS") == 0)
      VAR_9->outputKind = VAR_1;

     VAR_9->PrintTocDataPtr(VAR_9, VAR_10);

     VAR_9->outputKind = VAR_2;
    }
    else
    {
     FUNC_6(VAR_9, VAR_10);


     FUNC_5(VAR_9, VAR_10);
     FUNC_10(VAR_9, VAR_10->namespace);

     FUNC_18("processing data for table \"%s.%s\"",
        VAR_10->namespace, VAR_10->tag);
     if (VAR_11 && VAR_10->created)
     {




      FUNC_4(&VAR_9->public);






      FUNC_11(VAR_9, "TRUNCATE TABLE %s%s;\n\n",
         (FUNC_2(VAR_9->connection) >= 80400 ?
          "ONLY " : ""),
         FUNC_14(VAR_10->namespace, VAR_10->tag));
     }




     if (VAR_10->copyStmt && FUNC_21(VAR_10->copyStmt) > 0)
     {
      FUNC_11(VAR_9, "%s", VAR_10->copyStmt);
      VAR_9->outputKind = VAR_0;
     }
     else
      VAR_9->outputKind = VAR_1;

     VAR_9->PrintTocDataPtr(VAR_9, VAR_10);




     if (VAR_9->outputKind == VAR_0 &&
      FUNC_3(VAR_9))
      FUNC_1(&VAR_9->public, VAR_10->tag);
     VAR_9->outputKind = VAR_2;


     if (VAR_11 && VAR_10->created)
      FUNC_0(&VAR_9->public);

     FUNC_7(VAR_9, VAR_10);
    }
   }
  }
  else if (!VAR_15)
  {

   FUNC_18("executing %s %s", VAR_10->desc, VAR_10->tag);
   FUNC_8(VAR_9, VAR_10, 0);
  }
 }

 if (VAR_9->public.n_errors > 0 && VAR_13 == VAR_8)
  VAR_13 = VAR_6;

 return VAR_13;
}
