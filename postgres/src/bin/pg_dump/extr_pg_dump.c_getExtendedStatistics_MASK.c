
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {void* oid; void* tableoid; } ;
struct TYPE_18__ {int dump; int namespace; void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_17__ {int remoteVersion; } ;
struct TYPE_16__ {int data; } ;
struct TYPE_15__ {TYPE_5__ dobj; int stattarget; void* rolname; } ;
typedef TYPE_2__ StatsExtInfo ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_4__ Archive ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_4__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,char*,int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_4__*,void*) ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (TYPE_5__*,TYPE_4__*) ;
 int VAR_3 ;

void
FUNC_15(Archive *VAR_4)
{
 PQExpBuffer VAR_5;
 PGresult *VAR_6;
 StatsExtInfo *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;


 if (VAR_4->remoteVersion < 100000)
  return;

 VAR_5 = FUNC_9();

 if (VAR_4->remoteVersion < 130000)
  FUNC_6(VAR_5, "SELECT tableoid, oid, stxname, "
        "stxnamespace, (%s stxowner) AS rolname, (-1) AS stxstattarget "
        "FROM pg_catalog.pg_statistic_ext",
        VAR_3);
 else
  FUNC_6(VAR_5, "SELECT tableoid, oid, stxname, "
        "stxnamespace, (%s stxowner) AS rolname, stxstattarget "
        "FROM pg_catalog.pg_statistic_ext",
        VAR_3);

 VAR_6 = FUNC_1(VAR_4, VAR_5->data, VAR_2);

 VAR_8 = FUNC_5(VAR_6);

 VAR_9 = FUNC_3(VAR_6, "tableoid");
 VAR_10 = FUNC_3(VAR_6, "oid");
 VAR_11 = FUNC_3(VAR_6, "stxname");
 VAR_12 = FUNC_3(VAR_6, "stxnamespace");
 VAR_13 = FUNC_3(VAR_6, "rolname");
 VAR_14 = FUNC_3(VAR_6, "stxstattarget");

 VAR_7 = (StatsExtInfo *) FUNC_12(VAR_8 * sizeof(StatsExtInfo));

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
 {
  VAR_7[VAR_15].dobj.objType = VAR_0;
  VAR_7[VAR_15].dobj.catId.tableoid = FUNC_8(FUNC_4(VAR_6, VAR_15, VAR_9));
  VAR_7[VAR_15].dobj.catId.oid = FUNC_8(FUNC_4(VAR_6, VAR_15, VAR_10));
  FUNC_0(&VAR_7[VAR_15].dobj);
  VAR_7[VAR_15].dobj.name = FUNC_13(FUNC_4(VAR_6, VAR_15, VAR_11));
  VAR_7[VAR_15].dobj.namespace =
   FUNC_11(VAR_4,
        FUNC_8(FUNC_4(VAR_6, VAR_15, VAR_12)));
  VAR_7[VAR_15].rolname = FUNC_13(FUNC_4(VAR_6, VAR_15, VAR_13));
  VAR_7[VAR_15].stattarget = FUNC_7(FUNC_4(VAR_6, VAR_15, VAR_14));


  FUNC_14(&(VAR_7[VAR_15].dobj), VAR_4);


  VAR_7[VAR_15].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_6);
 FUNC_10(VAR_5);
}
