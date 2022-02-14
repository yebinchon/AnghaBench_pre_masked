
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
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_17__ {int oid; } ;
struct TYPE_15__ {int namespace; TYPE_1__ catId; } ;
struct TYPE_19__ {int nDomChecks; TYPE_12__ dobj; TYPE_5__* domChecks; } ;
typedef TYPE_3__ TypeInfo ;
struct TYPE_22__ {int remoteVersion; } ;
struct TYPE_18__ {void* oid; void* tableoid; } ;
struct TYPE_16__ {int dumpId; int namespace; void* name; TYPE_2__ catId; int objType; } ;
struct TYPE_21__ {char contype; int condeferrable; int condeferred; int conislocal; int separate; TYPE_14__ dobj; scalar_t__ conindex; int confrelid; void* condef; TYPE_3__* condomain; int * contable; } ;
struct TYPE_20__ {int data; } ;
typedef TYPE_4__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_5__ ConstraintInfo ;
typedef TYPE_6__ Archive ;


 int FUNC_0 (TYPE_14__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_6__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_12__*,int ) ;
 int FUNC_7 (TYPE_4__*,char*,int ) ;
 void* FUNC_8 (char*) ;
 TYPE_4__* FUNC_9 () ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (int) ;
 void* FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(Archive *VAR_3, TypeInfo *VAR_4)
{
 int VAR_5;
 ConstraintInfo *VAR_6;
 PQExpBuffer VAR_7;
 PGresult *VAR_8;
 int VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;
 int VAR_13;

 VAR_7 = FUNC_9();

 if (VAR_3->remoteVersion >= 90100)
  FUNC_7(VAR_7, "SELECT tableoid, oid, conname, "
        "pg_catalog.pg_get_constraintdef(oid) AS consrc, "
        "convalidated "
        "FROM pg_catalog.pg_constraint "
        "WHERE contypid = '%u'::pg_catalog.oid "
        "ORDER BY conname",
        VAR_4->dobj.catId.oid);

 else
  FUNC_7(VAR_7, "SELECT tableoid, oid, conname, "
        "pg_catalog.pg_get_constraintdef(oid) AS consrc, "
        "true as convalidated "
        "FROM pg_catalog.pg_constraint "
        "WHERE contypid = '%u'::pg_catalog.oid "
        "ORDER BY conname",
        VAR_4->dobj.catId.oid);

 VAR_8 = FUNC_1(VAR_3, VAR_7->data, VAR_2);

 VAR_13 = FUNC_5(VAR_8);

 VAR_9 = FUNC_3(VAR_8, "tableoid");
 VAR_10 = FUNC_3(VAR_8, "oid");
 VAR_11 = FUNC_3(VAR_8, "conname");
 VAR_12 = FUNC_3(VAR_8, "consrc");

 VAR_6 = (ConstraintInfo *) FUNC_11(VAR_13 * sizeof(ConstraintInfo));

 VAR_4->nDomChecks = VAR_13;
 VAR_4->domChecks = VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_13; VAR_5++)
 {
  bool VAR_14 = FUNC_4(VAR_8, VAR_5, 4)[0] == 't';

  VAR_6[VAR_5].dobj.objType = VAR_0;
  VAR_6[VAR_5].dobj.catId.tableoid = FUNC_8(FUNC_4(VAR_8, VAR_5, VAR_9));
  VAR_6[VAR_5].dobj.catId.oid = FUNC_8(FUNC_4(VAR_8, VAR_5, VAR_10));
  FUNC_0(&VAR_6[VAR_5].dobj);
  VAR_6[VAR_5].dobj.name = FUNC_12(FUNC_4(VAR_8, VAR_5, VAR_11));
  VAR_6[VAR_5].dobj.namespace = VAR_4->dobj.namespace;
  VAR_6[VAR_5].contable = ((void*)0);
  VAR_6[VAR_5].condomain = VAR_4;
  VAR_6[VAR_5].contype = 'c';
  VAR_6[VAR_5].condef = FUNC_12(FUNC_4(VAR_8, VAR_5, VAR_12));
  VAR_6[VAR_5].confrelid = VAR_1;
  VAR_6[VAR_5].conindex = 0;
  VAR_6[VAR_5].condeferrable = 0;
  VAR_6[VAR_5].condeferred = 0;
  VAR_6[VAR_5].conislocal = 1;

  VAR_6[VAR_5].separate = !VAR_14;







  if (VAR_14)
   FUNC_6(&VAR_4->dobj,
        VAR_6[VAR_5].dobj.dumpId);
 }

 FUNC_2(VAR_8);

 FUNC_10(VAR_7);
}
