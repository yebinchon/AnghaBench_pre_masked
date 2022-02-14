
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


struct TYPE_21__ {void* oid; } ;
struct TYPE_24__ {int dump; char* name; TYPE_4__* namespace; TYPE_2__ catId; } ;
struct TYPE_25__ {TYPE_5__ dobj; scalar_t__ rowsec; } ;
typedef TYPE_6__ TableInfo ;
struct TYPE_28__ {int remoteVersion; } ;
struct TYPE_27__ {int data; } ;
struct TYPE_22__ {void* oid; void* tableoid; } ;
struct TYPE_19__ {void* name; TYPE_4__* namespace; TYPE_3__ catId; void* objType; } ;
struct TYPE_26__ {char* polname; char polcmd; int polpermissive; int * polwithcheck; int * polqual; int * polroles; TYPE_18__ dobj; TYPE_6__* poltable; } ;
struct TYPE_20__ {int name; } ;
struct TYPE_23__ {TYPE_1__ dobj; } ;
typedef TYPE_7__ PolicyInfo ;
typedef TYPE_8__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_9__ Archive ;


 int FUNC_0 (TYPE_18__*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_9__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 char* FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_8__*,char*,void*) ;
 void* FUNC_8 (char*) ;
 TYPE_8__* FUNC_9 () ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (char*,int ,char*) ;
 TYPE_7__* FUNC_12 (int) ;
 void* FUNC_13 (char*) ;
 int FUNC_14 (TYPE_8__*) ;

void
FUNC_15(Archive *VAR_3, TableInfo VAR_4[], int VAR_5)
{
 PQExpBuffer VAR_6;
 PGresult *VAR_7;
 PolicyInfo *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17,
    VAR_18,
    VAR_19;

 if (VAR_3->remoteVersion < 90500)
  return;

 VAR_6 = FUNC_9();

 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++)
 {
  TableInfo *VAR_20 = &VAR_4[VAR_17];


  if (!(VAR_20->dobj.dump & VAR_1))
   continue;

  FUNC_11("reading row security enabled for table \"%s.%s\"",
     VAR_20->dobj.namespace->dobj.name,
     VAR_20->dobj.name);






  if (VAR_20->rowsec)
  {




   VAR_8 = FUNC_12(sizeof(PolicyInfo));
   VAR_8->dobj.objType = VAR_0;
   VAR_8->dobj.catId.tableoid = 0;
   VAR_8->dobj.catId.oid = VAR_20->dobj.catId.oid;
   FUNC_0(&VAR_8->dobj);
   VAR_8->dobj.namespace = VAR_20->dobj.namespace;
   VAR_8->dobj.name = FUNC_13(VAR_20->dobj.name);
   VAR_8->poltable = VAR_20;
   VAR_8->polname = ((void*)0);
   VAR_8->polcmd = '\0';
   VAR_8->polpermissive = 0;
   VAR_8->polroles = ((void*)0);
   VAR_8->polqual = ((void*)0);
   VAR_8->polwithcheck = ((void*)0);
  }

  FUNC_11("reading policies for table \"%s.%s\"",
     VAR_20->dobj.namespace->dobj.name,
     VAR_20->dobj.name);

  FUNC_14(VAR_6);


  if (VAR_3->remoteVersion >= 100000)
   FUNC_7(VAR_6,
         "SELECT oid, tableoid, pol.polname, pol.polcmd, pol.polpermissive, "
         "CASE WHEN pol.polroles = '{0}' THEN NULL ELSE "
         "   pg_catalog.array_to_string(ARRAY(SELECT pg_catalog.quote_ident(rolname) from pg_catalog.pg_roles WHERE oid = ANY(pol.polroles)), ', ') END AS polroles, "
         "pg_catalog.pg_get_expr(pol.polqual, pol.polrelid) AS polqual, "
         "pg_catalog.pg_get_expr(pol.polwithcheck, pol.polrelid) AS polwithcheck "
         "FROM pg_catalog.pg_policy pol "
         "WHERE polrelid = '%u'",
         VAR_20->dobj.catId.oid);
  else
   FUNC_7(VAR_6,
         "SELECT oid, tableoid, pol.polname, pol.polcmd, 't' as polpermissive, "
         "CASE WHEN pol.polroles = '{0}' THEN NULL ELSE "
         "   pg_catalog.array_to_string(ARRAY(SELECT pg_catalog.quote_ident(rolname) from pg_catalog.pg_roles WHERE oid = ANY(pol.polroles)), ', ') END AS polroles, "
         "pg_catalog.pg_get_expr(pol.polqual, pol.polrelid) AS polqual, "
         "pg_catalog.pg_get_expr(pol.polwithcheck, pol.polrelid) AS polwithcheck "
         "FROM pg_catalog.pg_policy pol "
         "WHERE polrelid = '%u'",
         VAR_20->dobj.catId.oid);
  VAR_7 = FUNC_1(VAR_3, VAR_6->data, VAR_2);

  VAR_19 = FUNC_6(VAR_7);

  if (VAR_19 == 0)
  {





   FUNC_2(VAR_7);
   continue;
  }

  VAR_9 = FUNC_3(VAR_7, "oid");
  VAR_10 = FUNC_3(VAR_7, "tableoid");
  VAR_11 = FUNC_3(VAR_7, "polname");
  VAR_12 = FUNC_3(VAR_7, "polcmd");
  VAR_13 = FUNC_3(VAR_7, "polpermissive");
  VAR_14 = FUNC_3(VAR_7, "polroles");
  VAR_15 = FUNC_3(VAR_7, "polqual");
  VAR_16 = FUNC_3(VAR_7, "polwithcheck");

  VAR_8 = FUNC_12(VAR_19 * sizeof(PolicyInfo));

  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
  {
   VAR_8[VAR_18].dobj.objType = VAR_0;
   VAR_8[VAR_18].dobj.catId.tableoid =
    FUNC_8(FUNC_5(VAR_7, VAR_18, VAR_10));
   VAR_8[VAR_18].dobj.catId.oid = FUNC_8(FUNC_5(VAR_7, VAR_18, VAR_9));
   FUNC_0(&VAR_8[VAR_18].dobj);
   VAR_8[VAR_18].dobj.namespace = VAR_20->dobj.namespace;
   VAR_8[VAR_18].poltable = VAR_20;
   VAR_8[VAR_18].polname = FUNC_13(FUNC_5(VAR_7, VAR_18, VAR_11));
   VAR_8[VAR_18].dobj.name = FUNC_13(VAR_8[VAR_18].polname);

   VAR_8[VAR_18].polcmd = *(FUNC_5(VAR_7, VAR_18, VAR_12));
   VAR_8[VAR_18].polpermissive = *(FUNC_5(VAR_7, VAR_18, VAR_13)) == 't';

   if (FUNC_4(VAR_7, VAR_18, VAR_14))
    VAR_8[VAR_18].polroles = ((void*)0);
   else
    VAR_8[VAR_18].polroles = FUNC_13(FUNC_5(VAR_7, VAR_18, VAR_14));

   if (FUNC_4(VAR_7, VAR_18, VAR_15))
    VAR_8[VAR_18].polqual = ((void*)0);
   else
    VAR_8[VAR_18].polqual = FUNC_13(FUNC_5(VAR_7, VAR_18, VAR_15));

   if (FUNC_4(VAR_7, VAR_18, VAR_16))
    VAR_8[VAR_18].polwithcheck = ((void*)0);
   else
    VAR_8[VAR_18].polwithcheck
     = FUNC_13(FUNC_5(VAR_7, VAR_18, VAR_16));
  }
  FUNC_2(VAR_7);
 }
 FUNC_10(VAR_6);
}
