
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_17__ {int remoteVersion; int * dopt; } ;
struct TYPE_14__ {void* oid; void* tableoid; } ;
struct TYPE_13__ {void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_16__ {int relocatable; void* extcondition; void* extconfig; void* extversion; void* namespace; TYPE_12__ dobj; } ;
struct TYPE_15__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ ExtensionInfo ;
typedef int DumpOptions ;
typedef TYPE_4__ Archive ;


 int FUNC_0 (TYPE_12__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_4__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 void* FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int) ;
 void* FUNC_11 (char*) ;
 int FUNC_12 (TYPE_3__*,int *) ;

ExtensionInfo *
FUNC_13(Archive *VAR_2, int *VAR_3)
{
 DumpOptions *VAR_4 = VAR_2->dopt;
 PGresult *VAR_5;
 int VAR_6;
 int VAR_7;
 PQExpBuffer VAR_8;
 ExtensionInfo *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;




 if (VAR_2->remoteVersion < 90100)
 {
  *VAR_3 = 0;
  return ((void*)0);
 }

 VAR_8 = FUNC_8();

 FUNC_6(VAR_8, "SELECT x.tableoid, x.oid, "
       "x.extname, n.nspname, x.extrelocatable, x.extversion, x.extconfig, x.extcondition "
       "FROM pg_extension x "
       "JOIN pg_namespace n ON n.oid = x.extnamespace");

 VAR_5 = FUNC_1(VAR_2, VAR_8->data, VAR_1);

 VAR_6 = FUNC_5(VAR_5);

 VAR_9 = (ExtensionInfo *) FUNC_10(VAR_6 * sizeof(ExtensionInfo));

 VAR_10 = FUNC_3(VAR_5, "tableoid");
 VAR_11 = FUNC_3(VAR_5, "oid");
 VAR_12 = FUNC_3(VAR_5, "extname");
 VAR_13 = FUNC_3(VAR_5, "nspname");
 VAR_14 = FUNC_3(VAR_5, "extrelocatable");
 VAR_15 = FUNC_3(VAR_5, "extversion");
 VAR_16 = FUNC_3(VAR_5, "extconfig");
 VAR_17 = FUNC_3(VAR_5, "extcondition");

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  VAR_9[VAR_7].dobj.objType = VAR_0;
  VAR_9[VAR_7].dobj.catId.tableoid = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_10));
  VAR_9[VAR_7].dobj.catId.oid = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_11));
  FUNC_0(&VAR_9[VAR_7].dobj);
  VAR_9[VAR_7].dobj.name = FUNC_11(FUNC_4(VAR_5, VAR_7, VAR_12));
  VAR_9[VAR_7].namespace = FUNC_11(FUNC_4(VAR_5, VAR_7, VAR_13));
  VAR_9[VAR_7].relocatable = *(FUNC_4(VAR_5, VAR_7, VAR_14)) == 't';
  VAR_9[VAR_7].extversion = FUNC_11(FUNC_4(VAR_5, VAR_7, VAR_15));
  VAR_9[VAR_7].extconfig = FUNC_11(FUNC_4(VAR_5, VAR_7, VAR_16));
  VAR_9[VAR_7].extcondition = FUNC_11(FUNC_4(VAR_5, VAR_7, VAR_17));


  FUNC_12(&(VAR_9[VAR_7]), VAR_4);
 }

 FUNC_2(VAR_5);
 FUNC_9(VAR_8);

 *VAR_3 = VAR_6;

 return VAR_9;
}
