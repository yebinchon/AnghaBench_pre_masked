
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {void* oid; void* tableoid; } ;
struct TYPE_14__ {int dump; int * namespace; void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_18__ {TYPE_13__ dobj; int amtype; void* amhandler; } ;
struct TYPE_17__ {int remoteVersion; } ;
struct TYPE_16__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ Archive ;
typedef TYPE_4__ AccessMethodInfo ;


 int FUNC_0 (TYPE_13__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_3__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 void* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__*) ;

AccessMethodInfo *
FUNC_13(Archive *VAR_3, int *VAR_4)
{
 PGresult *VAR_5;
 int VAR_6;
 int VAR_7;
 PQExpBuffer VAR_8;
 AccessMethodInfo *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;


 if (VAR_3->remoteVersion < 90600)
 {
  *VAR_4 = 0;
  return ((void*)0);
 }

 VAR_8 = FUNC_8();


 FUNC_6(VAR_8, "SELECT tableoid, oid, amname, amtype, "
       "amhandler::pg_catalog.regproc AS amhandler "
       "FROM pg_am");

 VAR_5 = FUNC_1(VAR_3, VAR_8->data, VAR_2);

 VAR_6 = FUNC_5(VAR_5);
 *VAR_4 = VAR_6;

 VAR_9 = (AccessMethodInfo *) FUNC_10(VAR_6 * sizeof(AccessMethodInfo));

 VAR_10 = FUNC_3(VAR_5, "tableoid");
 VAR_11 = FUNC_3(VAR_5, "oid");
 VAR_12 = FUNC_3(VAR_5, "amname");
 VAR_13 = FUNC_3(VAR_5, "amhandler");
 VAR_14 = FUNC_3(VAR_5, "amtype");

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  VAR_9[VAR_7].dobj.objType = VAR_0;
  VAR_9[VAR_7].dobj.catId.tableoid = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_10));
  VAR_9[VAR_7].dobj.catId.oid = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_11));
  FUNC_0(&VAR_9[VAR_7].dobj);
  VAR_9[VAR_7].dobj.name = FUNC_11(FUNC_4(VAR_5, VAR_7, VAR_12));
  VAR_9[VAR_7].dobj.namespace = ((void*)0);
  VAR_9[VAR_7].amhandler = FUNC_11(FUNC_4(VAR_5, VAR_7, VAR_13));
  VAR_9[VAR_7].amtype = *(FUNC_4(VAR_5, VAR_7, VAR_14));


  FUNC_12(&(VAR_9[VAR_7]), VAR_3);


  VAR_9[VAR_7].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_5);

 FUNC_9(VAR_8);

 return VAR_9;
}
