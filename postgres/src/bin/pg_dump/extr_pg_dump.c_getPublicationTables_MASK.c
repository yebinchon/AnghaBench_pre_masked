
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_25__ {int oid; } ;
struct TYPE_28__ {int dump; int name; TYPE_4__* namespace; TYPE_2__ catId; } ;
struct TYPE_29__ {scalar_t__ relkind; TYPE_5__ dobj; } ;
typedef TYPE_6__ TableInfo ;
struct TYPE_32__ {scalar_t__ no_publications; } ;
struct TYPE_31__ {int data; } ;
struct TYPE_26__ {void* oid; void* tableoid; } ;
struct TYPE_23__ {int name; TYPE_4__* namespace; TYPE_3__ catId; int objType; } ;
struct TYPE_30__ {TYPE_11__ dobj; TYPE_6__* pubtable; int pubname; } ;
struct TYPE_24__ {int name; } ;
struct TYPE_27__ {TYPE_1__ dobj; } ;
struct TYPE_22__ {int remoteVersion; TYPE_9__* dopt; } ;
typedef TYPE_7__ PublicationRelInfo ;
typedef TYPE_8__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_9__ DumpOptions ;
typedef TYPE_10__ Archive ;


 int FUNC_0 (TYPE_11__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_10__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_8__*,char*,int ) ;
 void* FUNC_7 (int ) ;
 TYPE_8__* FUNC_8 () ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (char*,int ,int ) ;
 TYPE_7__* FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (TYPE_11__*,TYPE_10__*) ;

void
FUNC_15(Archive *VAR_4, TableInfo VAR_5[], int VAR_6)
{
 PQExpBuffer VAR_7;
 PGresult *VAR_8;
 PublicationRelInfo *VAR_9;
 DumpOptions *VAR_10 = VAR_4->dopt;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14,
    VAR_15,
    VAR_16;

 if (VAR_10->no_publications || VAR_4->remoteVersion < 100000)
  return;

 VAR_7 = FUNC_8();

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
 {
  TableInfo *VAR_17 = &VAR_5[VAR_14];


  if (VAR_17->relkind != VAR_3)
   continue;





  if (!(VAR_17->dobj.dump & VAR_1))
   continue;

  FUNC_10("reading publication membership for table \"%s.%s\"",
     VAR_17->dobj.namespace->dobj.name,
     VAR_17->dobj.name);

  FUNC_13(VAR_7);


  FUNC_6(VAR_7,
        "SELECT pr.tableoid, pr.oid, p.pubname "
        "FROM pg_publication_rel pr, pg_publication p "
        "WHERE pr.prrelid = '%u'"
        "  AND p.oid = pr.prpubid",
        VAR_17->dobj.catId.oid);
  VAR_8 = FUNC_1(VAR_4, VAR_7->data, VAR_2);

  VAR_16 = FUNC_5(VAR_8);

  if (VAR_16 == 0)
  {



   FUNC_2(VAR_8);
   continue;
  }

  VAR_11 = FUNC_3(VAR_8, "tableoid");
  VAR_12 = FUNC_3(VAR_8, "oid");
  VAR_13 = FUNC_3(VAR_8, "pubname");

  VAR_9 = FUNC_11(VAR_16 * sizeof(PublicationRelInfo));

  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
  {
   VAR_9[VAR_15].dobj.objType = VAR_0;
   VAR_9[VAR_15].dobj.catId.tableoid =
    FUNC_7(FUNC_4(VAR_8, VAR_15, VAR_11));
   VAR_9[VAR_15].dobj.catId.oid = FUNC_7(FUNC_4(VAR_8, VAR_15, VAR_12));
   FUNC_0(&VAR_9[VAR_15].dobj);
   VAR_9[VAR_15].dobj.namespace = VAR_17->dobj.namespace;
   VAR_9[VAR_15].dobj.name = VAR_17->dobj.name;
   VAR_9[VAR_15].pubname = FUNC_12(FUNC_4(VAR_8, VAR_15, VAR_13));
   VAR_9[VAR_15].pubtable = VAR_17;


   FUNC_14(&(VAR_9[VAR_15].dobj), VAR_4);
  }
  FUNC_2(VAR_8);
 }
 FUNC_9(VAR_7);
}
