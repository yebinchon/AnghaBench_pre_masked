
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_38__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_41__ {int oid; } ;
struct TYPE_42__ {int reqs; char* desc; char* dropStmt; struct TYPE_42__* next; TYPE_1__ catalogId; int namespace; int tag; struct TYPE_42__* prev; scalar_t__ hadDumper; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_47__ {int maxRemoteVersion; scalar_t__ minRemoteVersion; } ;
struct TYPE_43__ {int numWorkers; scalar_t__ verbose; TYPE_3__* ropt; } ;
struct TYPE_46__ {scalar_t__ version; scalar_t__ compression; int noTocComments; TYPE_38__ public; int stage; int * connection; TYPE_2__* toc; int (* PrepParallelRestorePtr ) (TYPE_5__*) ;int * currSchema; TYPE_2__* currentTE; int createDate; scalar_t__ archiveDumpVersion; scalar_t__ archiveRemoteVersion; int * tocsByDumpId; int * PrintTocDataPtr; int (* ReopenPtr ) (TYPE_5__*) ;int * ClonePtr; } ;
struct TYPE_45__ {int data; } ;
struct TYPE_44__ {int dataOnly; scalar_t__ useDB; scalar_t__ compression; scalar_t__ filename; scalar_t__ single_txn; int if_exists; scalar_t__ createDB; scalar_t__ dropSchema; int promptPassword; int username; int pgport; int pghost; int dbname; } ;
typedef TYPE_3__ RestoreOptions ;
typedef int ParallelState ;
typedef TYPE_4__* PQExpBuffer ;
typedef int OutputContext ;
typedef TYPE_5__ ArchiveHandle ;
typedef TYPE_6__ Archive ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_38__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int * FUNC_6 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_7 (TYPE_5__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int const FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_5__*,char*,...) ;
 int FUNC_16 (TYPE_4__*,char*,char*,char*,char*) ;
 int FUNC_17 (TYPE_4__*,char*) ;
 int FUNC_18 (TYPE_5__*) ;
 TYPE_4__* FUNC_19 () ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_5__*,char*,int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (char*,char*) ;
 char* FUNC_28 (char*) ;
 int FUNC_29 (TYPE_5__*,int *,TYPE_2__*) ;
 int FUNC_30 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_31 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_32 (TYPE_5__*,TYPE_2__*,int) ;
 int FUNC_33 (char*,int,char*,char*) ;
 scalar_t__ FUNC_34 (char*,char*) ;
 int FUNC_35 (char*,char*) ;
 int FUNC_36 (char*) ;
 scalar_t__ FUNC_37 (char*,char*,int) ;
 char* FUNC_38 (char*,char*) ;
 int FUNC_39 (TYPE_5__*) ;
 int FUNC_40 (TYPE_5__*) ;
 int FUNC_41 (int *) ;

void
FUNC_42(Archive *VAR_7)
{
 ArchiveHandle *VAR_8 = (ArchiveHandle *) VAR_7;
 RestoreOptions *VAR_9 = VAR_8->public.ropt;
 bool VAR_10;
 TocEntry *VAR_11;
 OutputContext VAR_12;

 VAR_8->stage = VAR_5;




 VAR_10 = (VAR_8->public.numWorkers > 1 && VAR_9->useDB);
 if (VAR_10)
 {

  if (VAR_8->ClonePtr == ((void*)0) || VAR_8->ReopenPtr == ((void*)0))
   FUNC_22("parallel restore is not supported with this archive file format");


  if (VAR_8->version < VAR_1)
   FUNC_22("parallel restore is not supported with archives made by pre-8.0 pg_dump");





  VAR_8->ReopenPtr(VAR_8);
 }





 if (VAR_8->compression != 0 && VAR_8->PrintTocDataPtr != ((void*)0))
 {
  for (VAR_11 = VAR_8->toc->next; VAR_11 != VAR_8->toc; VAR_11 = VAR_11->next)
  {
   if (VAR_11->hadDumper && (VAR_11->reqs & VAR_2) != 0)
    FUNC_22("cannot restore from compressed archive (compression not supported in this installation)");
  }
 }






 if (VAR_8->tocsByDumpId == ((void*)0))
  FUNC_18(VAR_8);




 if (VAR_9->useDB)
 {
  FUNC_26("connecting to database for restore");
  if (VAR_8->version < VAR_0)
   FUNC_22("direct database connections are not supported in pre-1.3 archives");






  VAR_7->minRemoteVersion = 0;
  VAR_7->maxRemoteVersion = 9999999;

  FUNC_2(VAR_7, VAR_9->dbname,
      VAR_9->pghost, VAR_9->pgport, VAR_9->username,
      VAR_9->promptPassword);





  VAR_8->noTocComments = 1;
 }
 if (!VAR_9->dataOnly)
 {
  int VAR_13 = 1;

  for (VAR_11 = VAR_8->toc->next; VAR_11 != VAR_8->toc; VAR_11 = VAR_11->next)
  {
   if ((VAR_11->reqs & VAR_3) != 0)
   {
    VAR_13 = 0;
    break;
   }
  }
  if (VAR_13)
  {
   VAR_9->dataOnly = VAR_13;
   FUNC_26("implied data-only restore");
  }
 }




 VAR_12 = FUNC_8(VAR_8);
 if (VAR_9->filename || VAR_9->compression)
  FUNC_9(VAR_8, VAR_9->filename, VAR_9->compression);

 FUNC_15(VAR_8, "--\n-- PostgreSQL database dump\n--\n\n");

 if (VAR_8->archiveRemoteVersion)
  FUNC_15(VAR_8, "-- Dumped from database version %s\n",
     VAR_8->archiveRemoteVersion);
 if (VAR_8->archiveDumpVersion)
  FUNC_15(VAR_8, "-- Dumped by pg_dump version %s\n",
     VAR_8->archiveDumpVersion);

 FUNC_15(VAR_8, "\n");

 if (VAR_8->public.verbose)
  FUNC_21(VAR_8, "Started on", VAR_8->createDate);

 if (VAR_9->single_txn)
 {
  if (VAR_8->connection)
   FUNC_10(VAR_7);
  else
   FUNC_15(VAR_8, "BEGIN;\n\n");
 }




 FUNC_12(VAR_8);

 VAR_8->stage = VAR_6;




 if (VAR_9->dropSchema)
 {
  for (VAR_11 = VAR_8->toc->prev; VAR_11 != VAR_8->toc; VAR_11 = VAR_11->prev)
  {
   VAR_8->currentTE = VAR_11;
   if (VAR_9->createDB)
   {
    if (FUNC_34(VAR_11->desc, "DATABASE") != 0 &&
     FUNC_34(VAR_11->desc, "DATABASE PROPERTIES") != 0)
     continue;
   }


   if (((VAR_11->reqs & (VAR_3 | VAR_2)) != 0) && VAR_11->dropStmt)
   {
    FUNC_26("dropping %s %s", VAR_11->desc, VAR_11->tag);

    FUNC_11(VAR_8, VAR_11);
    FUNC_13(VAR_8, VAR_11->namespace);






    if (*VAR_11->dropStmt != '\0')
    {
     if (!VAR_9->if_exists)
     {

      FUNC_15(VAR_8, "%s", VAR_11->dropStmt);
     }
     else
     {







      if (FUNC_37(VAR_11->desc, "BLOB", 4) == 0)
      {
       FUNC_4(VAR_8, VAR_11->catalogId.oid);
      }
      else
      {
       char *VAR_14 = FUNC_28(VAR_11->dropStmt);
       char *VAR_15 = VAR_14;
       PQExpBuffer VAR_16 = FUNC_19();





       if (FUNC_37(VAR_14, "ALTER TABLE", 11) == 0)
       {
        FUNC_17(VAR_16,
              "ALTER TABLE IF EXISTS");
        VAR_14 = VAR_14 + 11;
       }
       if (FUNC_34(VAR_11->desc, "DEFAULT") == 0 ||
        FUNC_34(VAR_11->desc, "DATABASE PROPERTIES") == 0 ||
        FUNC_37(VAR_14, "CREATE OR REPLACE VIEW", 22) == 0)
        FUNC_17(VAR_16, VAR_14);
       else
       {
        char VAR_17[40];
        char *VAR_18;

        if (FUNC_34(VAR_11->desc, "CONSTRAINT") == 0 ||
         FUNC_34(VAR_11->desc, "CHECK CONSTRAINT") == 0 ||
         FUNC_34(VAR_11->desc, "FK CONSTRAINT") == 0)
         FUNC_35(VAR_17, "DROP CONSTRAINT");
        else
         FUNC_33(VAR_17, sizeof(VAR_17), "DROP %s",
            VAR_11->desc);

        VAR_18 = FUNC_38(VAR_14, VAR_17);

        if (VAR_18)
        {
         *VAR_18 = '\0';
         FUNC_16(VAR_16, "%s%s IF EXISTS%s",
               VAR_14, VAR_17,
               VAR_18 + FUNC_36(VAR_17));
        }
        else
        {

         FUNC_27("could not find where to insert IF EXISTS in statement \"%s\"",
               VAR_15);
         FUNC_17(VAR_16, VAR_14);
        }
       }

       FUNC_15(VAR_8, "%s", VAR_16->data);

       FUNC_20(VAR_16);
       FUNC_25(VAR_15);
      }
     }
    }
   }
  }
  if (VAR_8->currSchema)
   FUNC_23(VAR_8->currSchema);
  VAR_8->currSchema = ((void*)0);
 }

 if (VAR_10)
 {



  ParallelState *VAR_19;
  TocEntry VAR_20;


  if (VAR_8->PrepParallelRestorePtr)
   VAR_8->PrepParallelRestorePtr(VAR_8);

  FUNC_24(&VAR_20);


  FUNC_31(VAR_8, &VAR_20);
  FUNC_0(VAR_8->connection == ((void*)0));


  VAR_19 = FUNC_6(VAR_8);
  FUNC_29(VAR_8, VAR_19, &VAR_20);
  FUNC_5(VAR_8, VAR_19);


  FUNC_30(VAR_8, &VAR_20);
  FUNC_0(VAR_8->connection != ((void*)0));
 }
 else
 {





  bool VAR_21 = 0;
  bool VAR_22 = 0;

  for (VAR_11 = VAR_8->toc->next; VAR_11 != VAR_8->toc; VAR_11 = VAR_11->next)
  {
   if ((VAR_11->reqs & (VAR_3 | VAR_2)) == 0)
    continue;

   switch (FUNC_14(VAR_11))
   {
    case 129:
     (void) FUNC_32(VAR_8, VAR_11, 0);
     break;
    case 130:
     VAR_21 = 1;
     break;
    case 128:
     VAR_22 = 1;
     break;
   }
  }

  if (VAR_21)
  {
   for (VAR_11 = VAR_8->toc->next; VAR_11 != VAR_8->toc; VAR_11 = VAR_11->next)
   {
    if ((VAR_11->reqs & (VAR_3 | VAR_2)) != 0 &&
     FUNC_14(VAR_11) == 130)
     (void) FUNC_32(VAR_8, VAR_11, 0);
   }
  }

  if (VAR_22)
  {
   for (VAR_11 = VAR_8->toc->next; VAR_11 != VAR_8->toc; VAR_11 = VAR_11->next)
   {
    if ((VAR_11->reqs & (VAR_3 | VAR_2)) != 0 &&
     FUNC_14(VAR_11) == 128)
     (void) FUNC_32(VAR_8, VAR_11, 0);
   }
  }
 }

 if (VAR_9->single_txn)
 {
  if (VAR_8->connection)
   FUNC_1(VAR_7);
  else
   FUNC_15(VAR_8, "COMMIT;\n\n");
 }

 if (VAR_8->public.verbose)
  FUNC_21(VAR_8, "Completed on", FUNC_41(((void*)0)));

 FUNC_15(VAR_8, "--\n-- PostgreSQL database dump complete\n--\n\n");




 VAR_8->stage = VAR_4;

 if (VAR_9->filename || VAR_9->compression)
  FUNC_7(VAR_8, VAR_12);

 if (VAR_9->useDB)
  FUNC_3(&VAR_8->public);
}
