
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_21__ {void* oid; void* tableoid; } ;
struct TYPE_18__ {void* name; TYPE_4__* namespace; TYPE_3__ catId; int objType; } ;
struct TYPE_24__ {char tgenabled; int tgisconstraint; int tgdeferrable; int tginitdeferred; int * tgconstrrelname; void* tgconstrrelid; int * tgconstrname; TYPE_17__ dobj; int * tgargs; void* tgnargs; void* tgtype; int * tgfname; int * tgdef; TYPE_7__* tgtable; } ;
typedef TYPE_6__ TriggerInfo ;
struct TYPE_20__ {int oid; } ;
struct TYPE_23__ {int dump; int name; TYPE_4__* namespace; TYPE_2__ catId; } ;
struct TYPE_25__ {int numTriggers; TYPE_5__ dobj; TYPE_6__* triggers; int hastriggers; } ;
typedef TYPE_7__ TableInfo ;
struct TYPE_27__ {int remoteVersion; } ;
struct TYPE_26__ {int data; } ;
struct TYPE_19__ {int name; } ;
struct TYPE_22__ {TYPE_1__ dobj; } ;
typedef TYPE_8__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_9__ Archive ;


 int FUNC_0 (TYPE_17__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_9__*,int ,int ) ;
 void* VAR_2 ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 char* FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_8__*,char*,int ) ;
 void* FUNC_9 (char*) ;
 void* FUNC_10 (char*) ;
 TYPE_8__* FUNC_11 () ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (char*,void*,int ,void*) ;
 int FUNC_14 (char*,int ,int ) ;
 scalar_t__ FUNC_15 (int) ;
 void* FUNC_16 (char*) ;
 int FUNC_17 (TYPE_8__*) ;

void
FUNC_18(Archive *VAR_4, TableInfo VAR_5[], int VAR_6)
{
 int VAR_7,
    VAR_8;
 PQExpBuffer VAR_9 = FUNC_11();
 PGresult *VAR_10;
 TriggerInfo *VAR_11;
 int VAR_12,
    VAR_13,
    VAR_14,
    VAR_15,
    VAR_16,
    VAR_17,
    VAR_18,
    VAR_19,
    VAR_20,
    VAR_21,
    VAR_22,
    VAR_23,
    VAR_24,
    VAR_25,
    VAR_26;
 int VAR_27;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  TableInfo *VAR_28 = &VAR_5[VAR_7];

  if (!VAR_28->hastriggers ||
   !(VAR_28->dobj.dump & VAR_1))
   continue;

  FUNC_14("reading triggers for table \"%s.%s\"",
     VAR_28->dobj.namespace->dobj.name,
     VAR_28->dobj.name);

  FUNC_17(VAR_9);
  if (VAR_4->remoteVersion >= 90000)
  {





   FUNC_8(VAR_9,
         "SELECT tgname, "
         "tgfoid::pg_catalog.regproc AS tgfname, "
         "pg_catalog.pg_get_triggerdef(oid, false) AS tgdef, "
         "tgenabled, tableoid, oid "
         "FROM pg_catalog.pg_trigger t "
         "WHERE tgrelid = '%u'::pg_catalog.oid "
         "AND NOT tgisinternal",
         VAR_28->dobj.catId.oid);
  }
  else if (VAR_4->remoteVersion >= 80300)
  {



   FUNC_8(VAR_9,
         "SELECT tgname, "
         "tgfoid::pg_catalog.regproc AS tgfname, "
         "tgtype, tgnargs, tgargs, tgenabled, "
         "tgisconstraint, tgconstrname, tgdeferrable, "
         "tgconstrrelid, tginitdeferred, tableoid, oid, "
         "tgconstrrelid::pg_catalog.regclass AS tgconstrrelname "
         "FROM pg_catalog.pg_trigger t "
         "WHERE tgrelid = '%u'::pg_catalog.oid "
         "AND tgconstraint = 0",
         VAR_28->dobj.catId.oid);
  }
  else
  {





   FUNC_8(VAR_9,
         "SELECT tgname, "
         "tgfoid::pg_catalog.regproc AS tgfname, "
         "tgtype, tgnargs, tgargs, tgenabled, "
         "tgisconstraint, tgconstrname, tgdeferrable, "
         "tgconstrrelid, tginitdeferred, tableoid, oid, "
         "tgconstrrelid::pg_catalog.regclass AS tgconstrrelname "
         "FROM pg_catalog.pg_trigger t "
         "WHERE tgrelid = '%u'::pg_catalog.oid "
         "AND (NOT tgisconstraint "
         " OR NOT EXISTS"
         "  (SELECT 1 FROM pg_catalog.pg_depend d "
         "   JOIN pg_catalog.pg_constraint c ON (d.refclassid = c.tableoid AND d.refobjid = c.oid) "
         "   WHERE d.classid = t.tableoid AND d.objid = t.oid AND d.deptype = 'i' AND c.contype = 'f'))",
         VAR_28->dobj.catId.oid);
  }

  VAR_10 = FUNC_1(VAR_4, VAR_9->data, VAR_3);

  VAR_27 = FUNC_7(VAR_10);

  VAR_12 = FUNC_4(VAR_10, "tableoid");
  VAR_13 = FUNC_4(VAR_10, "oid");
  VAR_14 = FUNC_4(VAR_10, "tgname");
  VAR_15 = FUNC_4(VAR_10, "tgfname");
  VAR_16 = FUNC_4(VAR_10, "tgtype");
  VAR_17 = FUNC_4(VAR_10, "tgnargs");
  VAR_18 = FUNC_4(VAR_10, "tgargs");
  VAR_19 = FUNC_4(VAR_10, "tgisconstraint");
  VAR_20 = FUNC_4(VAR_10, "tgconstrname");
  VAR_21 = FUNC_4(VAR_10, "tgconstrrelid");
  VAR_22 = FUNC_4(VAR_10, "tgconstrrelname");
  VAR_23 = FUNC_4(VAR_10, "tgenabled");
  VAR_24 = FUNC_4(VAR_10, "tgdeferrable");
  VAR_25 = FUNC_4(VAR_10, "tginitdeferred");
  VAR_26 = FUNC_4(VAR_10, "tgdef");

  VAR_11 = (TriggerInfo *) FUNC_15(VAR_27 * sizeof(TriggerInfo));

  VAR_28->numTriggers = VAR_27;
  VAR_28->triggers = VAR_11;

  for (VAR_8 = 0; VAR_8 < VAR_27; VAR_8++)
  {
   VAR_11[VAR_8].dobj.objType = VAR_0;
   VAR_11[VAR_8].dobj.catId.tableoid = FUNC_10(FUNC_6(VAR_10, VAR_8, VAR_12));
   VAR_11[VAR_8].dobj.catId.oid = FUNC_10(FUNC_6(VAR_10, VAR_8, VAR_13));
   FUNC_0(&VAR_11[VAR_8].dobj);
   VAR_11[VAR_8].dobj.name = FUNC_16(FUNC_6(VAR_10, VAR_8, VAR_14));
   VAR_11[VAR_8].dobj.namespace = VAR_28->dobj.namespace;
   VAR_11[VAR_8].tgtable = VAR_28;
   VAR_11[VAR_8].tgenabled = *(FUNC_6(VAR_10, VAR_8, VAR_23));
   if (VAR_26 >= 0)
   {
    VAR_11[VAR_8].tgdef = FUNC_16(FUNC_6(VAR_10, VAR_8, VAR_26));


    VAR_11[VAR_8].tgfname = ((void*)0);
    VAR_11[VAR_8].tgtype = 0;
    VAR_11[VAR_8].tgnargs = 0;
    VAR_11[VAR_8].tgargs = ((void*)0);
    VAR_11[VAR_8].tgisconstraint = 0;
    VAR_11[VAR_8].tgdeferrable = 0;
    VAR_11[VAR_8].tginitdeferred = 0;
    VAR_11[VAR_8].tgconstrname = ((void*)0);
    VAR_11[VAR_8].tgconstrrelid = VAR_2;
    VAR_11[VAR_8].tgconstrrelname = ((void*)0);
   }
   else
   {
    VAR_11[VAR_8].tgdef = ((void*)0);

    VAR_11[VAR_8].tgfname = FUNC_16(FUNC_6(VAR_10, VAR_8, VAR_15));
    VAR_11[VAR_8].tgtype = FUNC_9(FUNC_6(VAR_10, VAR_8, VAR_16));
    VAR_11[VAR_8].tgnargs = FUNC_9(FUNC_6(VAR_10, VAR_8, VAR_17));
    VAR_11[VAR_8].tgargs = FUNC_16(FUNC_6(VAR_10, VAR_8, VAR_18));
    VAR_11[VAR_8].tgisconstraint = *(FUNC_6(VAR_10, VAR_8, VAR_19)) == 't';
    VAR_11[VAR_8].tgdeferrable = *(FUNC_6(VAR_10, VAR_8, VAR_24)) == 't';
    VAR_11[VAR_8].tginitdeferred = *(FUNC_6(VAR_10, VAR_8, VAR_25)) == 't';

    if (VAR_11[VAR_8].tgisconstraint)
    {
     VAR_11[VAR_8].tgconstrname = FUNC_16(FUNC_6(VAR_10, VAR_8, VAR_20));
     VAR_11[VAR_8].tgconstrrelid = FUNC_10(FUNC_6(VAR_10, VAR_8, VAR_21));
     if (FUNC_2(VAR_11[VAR_8].tgconstrrelid))
     {
      if (FUNC_5(VAR_10, VAR_8, VAR_22))
       FUNC_13("query produced null referenced table name for foreign key trigger \"%s\" on table \"%s\" (OID of table: %u)",
          VAR_11[VAR_8].dobj.name,
          VAR_28->dobj.name,
          VAR_11[VAR_8].tgconstrrelid);
      VAR_11[VAR_8].tgconstrrelname = FUNC_16(FUNC_6(VAR_10, VAR_8, VAR_22));
     }
     else
      VAR_11[VAR_8].tgconstrrelname = ((void*)0);
    }
    else
    {
     VAR_11[VAR_8].tgconstrname = ((void*)0);
     VAR_11[VAR_8].tgconstrrelid = VAR_2;
     VAR_11[VAR_8].tgconstrrelname = ((void*)0);
    }
   }
  }

  FUNC_3(VAR_10);
 }

 FUNC_12(VAR_9);
}
