
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {char* use_role; int remoteVersion; int numWorkers; int * sync_snapshot_id; scalar_t__ isStandby; int std_strings; int encoding; TYPE_2__* dopt; } ;
struct TYPE_15__ {int no_synchronized_snapshots; scalar_t__ serializable_deferrable; scalar_t__ enable_row_security; } ;
struct TYPE_14__ {char* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGconn ;
typedef TYPE_2__ DumpOptions ;
typedef TYPE_3__ Archive ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int * FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,int *,int *) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 int * FUNC_14 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 void* FUNC_15 (char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_16 (char const*,char*) ;

__attribute__((used)) static void
FUNC_17(Archive *VAR_4, const char *VAR_5,
     const char *VAR_6, char *VAR_7)
{
 DumpOptions *VAR_8 = VAR_4->dopt;
 PGconn *VAR_9 = FUNC_2(VAR_4);
 const char *VAR_10;

 FUNC_3(FUNC_0(VAR_4, VAR_0));




 if (VAR_5)
 {
  if (FUNC_6(VAR_9, VAR_5) < 0)
   FUNC_12("invalid client encoding \"%s\" specified",
      VAR_5);
 }





 VAR_4->encoding = FUNC_4(VAR_9);

 VAR_10 = FUNC_5(VAR_9, "standard_conforming_strings");
 VAR_4->std_strings = (VAR_10 && FUNC_16(VAR_10, "on") == 0);






 if (!VAR_7 && VAR_4->use_role)
  VAR_7 = VAR_4->use_role;


 if (VAR_7 && VAR_4->remoteVersion >= 80100)
 {
  PQExpBuffer VAR_11 = FUNC_10();

  FUNC_7(VAR_11, "SET ROLE %s", FUNC_13(VAR_7));
  FUNC_1(VAR_4, VAR_11->data);
  FUNC_11(VAR_11);


  if (!VAR_4->use_role)
   VAR_4->use_role = FUNC_15(VAR_7);
 }


 FUNC_1(VAR_4, "SET DATESTYLE = ISO");


 if (VAR_4->remoteVersion >= 80400)
  FUNC_1(VAR_4, "SET INTERVALSTYLE = POSTGRES");






 if (VAR_2)
 {
  PQExpBuffer VAR_12 = FUNC_10();

  FUNC_7(VAR_12, "SET extra_float_digits TO %d",
        VAR_1);
  FUNC_1(VAR_4, VAR_12->data);
  FUNC_11(VAR_12);
 }
 else if (VAR_4->remoteVersion >= 90000)
  FUNC_1(VAR_4, "SET extra_float_digits TO 3");
 else
  FUNC_1(VAR_4, "SET extra_float_digits TO 2");





 if (VAR_4->remoteVersion >= 80300)
  FUNC_1(VAR_4, "SET synchronize_seqscans TO off");




 FUNC_1(VAR_4, "SET statement_timeout = 0");
 if (VAR_4->remoteVersion >= 90300)
  FUNC_1(VAR_4, "SET lock_timeout = 0");
 if (VAR_4->remoteVersion >= 90600)
  FUNC_1(VAR_4, "SET idle_in_transaction_session_timeout = 0");




 if (VAR_3 && VAR_4->remoteVersion >= 90100)
  FUNC_1(VAR_4, "SET quote_all_identifiers = true");




 if (VAR_4->remoteVersion >= 90500)
 {
  if (VAR_8->enable_row_security)
   FUNC_1(VAR_4, "SET row_security = on");
  else
   FUNC_1(VAR_4, "SET row_security = off");
 }




 FUNC_1(VAR_4, "BEGIN");
 if (VAR_4->remoteVersion >= 90100)
 {
  if (VAR_8->serializable_deferrable && VAR_4->sync_snapshot_id == ((void*)0))
   FUNC_1(VAR_4,
        "SET TRANSACTION ISOLATION LEVEL "
        "SERIALIZABLE, READ ONLY, DEFERRABLE");
  else
   FUNC_1(VAR_4,
        "SET TRANSACTION ISOLATION LEVEL "
        "REPEATABLE READ, READ ONLY");
 }
 else
 {
  FUNC_1(VAR_4,
       "SET TRANSACTION ISOLATION LEVEL "
       "SERIALIZABLE, READ ONLY");
 }






 if (VAR_6)
  VAR_4->sync_snapshot_id = FUNC_15(VAR_6);

 if (VAR_4->sync_snapshot_id)
 {
  PQExpBuffer VAR_13 = FUNC_10();

  FUNC_8(VAR_13, "SET TRANSACTION SNAPSHOT ");
  FUNC_9(VAR_13, VAR_4->sync_snapshot_id, VAR_9);
  FUNC_1(VAR_4, VAR_13->data);
  FUNC_11(VAR_13);
 }
 else if (VAR_4->numWorkers > 1 &&
    VAR_4->remoteVersion >= 90200 &&
    !VAR_8->no_synchronized_snapshots)
 {
  if (VAR_4->isStandby && VAR_4->remoteVersion < 100000)
   FUNC_12("Synchronized snapshots on standby servers are not supported by this server version.\n"
      "Run with --no-synchronized-snapshots instead if you do not need\n"
      "synchronized snapshots.");


  VAR_4->sync_snapshot_id = FUNC_14(VAR_4);
 }
}
