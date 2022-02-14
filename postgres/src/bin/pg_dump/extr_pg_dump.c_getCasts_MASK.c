
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


struct TYPE_22__ {int name; } ;
struct TYPE_23__ {TYPE_2__ dobj; } ;
typedef TYPE_3__ TypeInfo ;
struct TYPE_27__ {int remoteVersion; } ;
struct TYPE_21__ {void* oid; void* tableoid; } ;
struct TYPE_20__ {int dump; int name; TYPE_1__ catId; int objType; } ;
struct TYPE_26__ {TYPE_19__ dobj; void* casttarget; void* castsource; void* castmethod; void* castcontext; void* castfunc; } ;
struct TYPE_25__ {int data; } ;
struct TYPE_24__ {int data; } ;
typedef TYPE_4__ PQExpBufferData ;
typedef TYPE_5__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_6__ CastInfo ;
typedef TYPE_7__ Archive ;


 int FUNC_0 (TYPE_19__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_7__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 void** FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,char*,int ,int ) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 void* FUNC_8 (void**) ;
 TYPE_5__* FUNC_9 () ;
 int FUNC_10 (TYPE_5__*) ;
 TYPE_3__* FUNC_11 (void*) ;
 int FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (TYPE_6__*,TYPE_7__*) ;

CastInfo *
FUNC_15(Archive *VAR_3, int *VAR_4)
{
 PGresult *VAR_5;
 int VAR_6;
 int VAR_7;
 PQExpBuffer VAR_8 = FUNC_9();
 CastInfo *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_3->remoteVersion >= 80400)
 {
  FUNC_7(VAR_8, "SELECT tableoid, oid, "
        "castsource, casttarget, castfunc, castcontext, "
        "castmethod "
        "FROM pg_cast ORDER BY 3,4");
 }
 else
 {
  FUNC_7(VAR_8, "SELECT tableoid, oid, "
        "castsource, casttarget, castfunc, castcontext, "
        "CASE WHEN castfunc = 0 THEN 'b' ELSE 'f' END AS castmethod "
        "FROM pg_cast ORDER BY 3,4");
 }

 VAR_5 = FUNC_1(VAR_3, VAR_8->data, VAR_2);

 VAR_6 = FUNC_5(VAR_5);

 *VAR_4 = VAR_6;

 VAR_9 = (CastInfo *) FUNC_13(VAR_6 * sizeof(CastInfo));

 VAR_10 = FUNC_3(VAR_5, "tableoid");
 VAR_11 = FUNC_3(VAR_5, "oid");
 VAR_12 = FUNC_3(VAR_5, "castsource");
 VAR_13 = FUNC_3(VAR_5, "casttarget");
 VAR_14 = FUNC_3(VAR_5, "castfunc");
 VAR_15 = FUNC_3(VAR_5, "castcontext");
 VAR_16 = FUNC_3(VAR_5, "castmethod");

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  PQExpBufferData VAR_17;
  TypeInfo *VAR_18;
  TypeInfo *VAR_19;

  VAR_9[VAR_7].dobj.objType = VAR_0;
  VAR_9[VAR_7].dobj.catId.tableoid = FUNC_8(FUNC_4(VAR_5, VAR_7, VAR_10));
  VAR_9[VAR_7].dobj.catId.oid = FUNC_8(FUNC_4(VAR_5, VAR_7, VAR_11));
  FUNC_0(&VAR_9[VAR_7].dobj);
  VAR_9[VAR_7].castsource = FUNC_8(FUNC_4(VAR_5, VAR_7, VAR_12));
  VAR_9[VAR_7].casttarget = FUNC_8(FUNC_4(VAR_5, VAR_7, VAR_13));
  VAR_9[VAR_7].castfunc = FUNC_8(FUNC_4(VAR_5, VAR_7, VAR_14));
  VAR_9[VAR_7].castcontext = *(FUNC_4(VAR_5, VAR_7, VAR_15));
  VAR_9[VAR_7].castmethod = *(FUNC_4(VAR_5, VAR_7, VAR_16));






  FUNC_12(&VAR_17);
  VAR_18 = FUNC_11(VAR_9[VAR_7].castsource);
  VAR_19 = FUNC_11(VAR_9[VAR_7].casttarget);
  if (VAR_18 && VAR_19)
   FUNC_6(&VAR_17, "%s %s",
         VAR_18->dobj.name, VAR_19->dobj.name);
  VAR_9[VAR_7].dobj.name = VAR_17.data;


  FUNC_14(&(VAR_9[VAR_7]), VAR_3);


  VAR_9[VAR_7].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_5);

 FUNC_10(VAR_8);

 return VAR_9;
}
