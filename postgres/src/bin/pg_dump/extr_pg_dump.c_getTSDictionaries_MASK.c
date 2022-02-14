
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {void* oid; void* tableoid; } ;
struct TYPE_19__ {int dump; int namespace; void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_18__ {int remoteVersion; } ;
struct TYPE_17__ {int data; } ;
struct TYPE_16__ {TYPE_5__ dobj; int * dictinitoption; void* dicttemplate; void* rolname; } ;
typedef TYPE_2__ TSDictInfo ;
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
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,char*,int ) ;
 void* FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_4__*,void*) ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (TYPE_5__*,TYPE_4__*) ;
 int VAR_3 ;

TSDictInfo *
FUNC_15(Archive *VAR_4, int *VAR_5)
{
 PGresult *VAR_6;
 int VAR_7;
 int VAR_8;
 PQExpBuffer VAR_9;
 TSDictInfo *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;


 if (VAR_4->remoteVersion < 80300)
 {
  *VAR_5 = 0;
  return ((void*)0);
 }

 VAR_9 = FUNC_9();

 FUNC_7(VAR_9, "SELECT tableoid, oid, dictname, "
       "dictnamespace, (%s dictowner) AS rolname, "
       "dicttemplate, dictinitoption "
       "FROM pg_ts_dict",
       VAR_3);

 VAR_6 = FUNC_1(VAR_4, VAR_9->data, VAR_2);

 VAR_7 = FUNC_6(VAR_6);
 *VAR_5 = VAR_7;

 VAR_10 = (TSDictInfo *) FUNC_12(VAR_7 * sizeof(TSDictInfo));

 VAR_11 = FUNC_3(VAR_6, "tableoid");
 VAR_12 = FUNC_3(VAR_6, "oid");
 VAR_13 = FUNC_3(VAR_6, "dictname");
 VAR_14 = FUNC_3(VAR_6, "dictnamespace");
 VAR_15 = FUNC_3(VAR_6, "rolname");
 VAR_17 = FUNC_3(VAR_6, "dictinitoption");
 VAR_16 = FUNC_3(VAR_6, "dicttemplate");

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  VAR_10[VAR_8].dobj.objType = VAR_0;
  VAR_10[VAR_8].dobj.catId.tableoid = FUNC_8(FUNC_5(VAR_6, VAR_8, VAR_11));
  VAR_10[VAR_8].dobj.catId.oid = FUNC_8(FUNC_5(VAR_6, VAR_8, VAR_12));
  FUNC_0(&VAR_10[VAR_8].dobj);
  VAR_10[VAR_8].dobj.name = FUNC_13(FUNC_5(VAR_6, VAR_8, VAR_13));
  VAR_10[VAR_8].dobj.namespace =
   FUNC_11(VAR_4,
        FUNC_8(FUNC_5(VAR_6, VAR_8, VAR_14)));
  VAR_10[VAR_8].rolname = FUNC_13(FUNC_5(VAR_6, VAR_8, VAR_15));
  VAR_10[VAR_8].dicttemplate = FUNC_8(FUNC_5(VAR_6, VAR_8, VAR_16));
  if (FUNC_4(VAR_6, VAR_8, VAR_17))
   VAR_10[VAR_8].dictinitoption = ((void*)0);
  else
   VAR_10[VAR_8].dictinitoption = FUNC_13(FUNC_5(VAR_6, VAR_8, VAR_17));


  FUNC_14(&(VAR_10[VAR_8].dobj), VAR_4);


  VAR_10[VAR_8].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_6);

 FUNC_10(VAR_9);

 return VAR_10;
}
