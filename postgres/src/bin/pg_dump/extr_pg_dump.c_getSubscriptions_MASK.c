
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {void* oid; void* tableoid; } ;
struct TYPE_22__ {void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_21__ {int remoteVersion; TYPE_4__* dopt; } ;
struct TYPE_20__ {scalar_t__ no_subscriptions; } ;
struct TYPE_19__ {char* data; } ;
struct TYPE_18__ {TYPE_6__ dobj; void* rolname; void* subpublications; void* subsynccommit; int * subslotname; void* subconninfo; } ;
typedef TYPE_2__ SubscriptionInfo ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_4__ DumpOptions ;
typedef TYPE_5__ Archive ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_5__*,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,char*,int ) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 () ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (char*,...) ;
 TYPE_2__* FUNC_14 (int) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_18 (void*) ;
 int VAR_2 ;

void
FUNC_19(Archive *VAR_3)
{
 DumpOptions *VAR_4 = VAR_3->dopt;
 PQExpBuffer VAR_5;
 PGresult *VAR_6;
 SubscriptionInfo *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16,
    VAR_17;

 if (VAR_4->no_subscriptions || VAR_3->remoteVersion < 100000)
  return;

 if (!FUNC_12(VAR_3))
 {
  int VAR_18;

  VAR_6 = FUNC_1(VAR_3,
         "SELECT count(*) FROM pg_subscription "
         "WHERE subdbid = (SELECT oid FROM pg_database"
         "                 WHERE datname = current_database())",
         VAR_1);
  VAR_18 = FUNC_8(FUNC_5(VAR_6, 0, 0));
  if (VAR_18 > 0)
   FUNC_13("subscriptions not dumped because current user is not a superuser");
  FUNC_2(VAR_6);
  return;
 }

 VAR_5 = FUNC_10();

 FUNC_16(VAR_5);


 FUNC_7(VAR_5,
       "SELECT s.tableoid, s.oid, s.subname,"
       "(%s s.subowner) AS rolname, "
       " s.subconninfo, s.subslotname, s.subsynccommit, "
       " s.subpublications "
       "FROM pg_subscription s "
       "WHERE s.subdbid = (SELECT oid FROM pg_database"
       "                   WHERE datname = current_database())",
       VAR_2);
 VAR_6 = FUNC_1(VAR_3, VAR_5->data, VAR_1);

 VAR_17 = FUNC_6(VAR_6);

 VAR_8 = FUNC_3(VAR_6, "tableoid");
 VAR_9 = FUNC_3(VAR_6, "oid");
 VAR_10 = FUNC_3(VAR_6, "subname");
 VAR_11 = FUNC_3(VAR_6, "rolname");
 VAR_12 = FUNC_3(VAR_6, "subconninfo");
 VAR_13 = FUNC_3(VAR_6, "subslotname");
 VAR_14 = FUNC_3(VAR_6, "subsynccommit");
 VAR_15 = FUNC_3(VAR_6, "subpublications");

 VAR_7 = FUNC_14(VAR_17 * sizeof(SubscriptionInfo));

 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
 {
  VAR_7[VAR_16].dobj.objType = VAR_0;
  VAR_7[VAR_16].dobj.catId.tableoid =
   FUNC_9(FUNC_5(VAR_6, VAR_16, VAR_8));
  VAR_7[VAR_16].dobj.catId.oid = FUNC_9(FUNC_5(VAR_6, VAR_16, VAR_9));
  FUNC_0(&VAR_7[VAR_16].dobj);
  VAR_7[VAR_16].dobj.name = FUNC_15(FUNC_5(VAR_6, VAR_16, VAR_10));
  VAR_7[VAR_16].rolname = FUNC_15(FUNC_5(VAR_6, VAR_16, VAR_11));
  VAR_7[VAR_16].subconninfo = FUNC_15(FUNC_5(VAR_6, VAR_16, VAR_12));
  if (FUNC_4(VAR_6, VAR_16, VAR_13))
   VAR_7[VAR_16].subslotname = ((void*)0);
  else
   VAR_7[VAR_16].subslotname = FUNC_15(FUNC_5(VAR_6, VAR_16, VAR_13));
  VAR_7[VAR_16].subsynccommit =
   FUNC_15(FUNC_5(VAR_6, VAR_16, VAR_14));
  VAR_7[VAR_16].subpublications =
   FUNC_15(FUNC_5(VAR_6, VAR_16, VAR_15));

  if (FUNC_18(VAR_7[VAR_16].rolname) == 0)
   FUNC_13("owner of subscription \"%s\" appears to be invalid",
         VAR_7[VAR_16].dobj.name);


  FUNC_17(&(VAR_7[VAR_16].dobj), VAR_3);
 }
 FUNC_2(VAR_6);

 FUNC_11(VAR_5);
}
