
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
struct TYPE_17__ {TYPE_5__ dobj; void* rolname; } ;
struct TYPE_16__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ CollInfo ;
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
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 void* FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_4__*,void*) ;
 scalar_t__ FUNC_11 (int) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_5__*,TYPE_4__*) ;
 int VAR_3 ;

CollInfo *
FUNC_14(Archive *VAR_4, int *VAR_5)
{
 PGresult *VAR_6;
 int VAR_7;
 int VAR_8;
 PQExpBuffer VAR_9;
 CollInfo *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;


 if (VAR_4->remoteVersion < 90100)
 {
  *VAR_5 = 0;
  return ((void*)0);
 }

 VAR_9 = FUNC_8();






 FUNC_6(VAR_9, "SELECT tableoid, oid, collname, "
       "collnamespace, "
       "(%s collowner) AS rolname "
       "FROM pg_collation",
       VAR_3);

 VAR_6 = FUNC_1(VAR_4, VAR_9->data, VAR_2);

 VAR_7 = FUNC_5(VAR_6);
 *VAR_5 = VAR_7;

 VAR_10 = (CollInfo *) FUNC_11(VAR_7 * sizeof(CollInfo));

 VAR_11 = FUNC_3(VAR_6, "tableoid");
 VAR_12 = FUNC_3(VAR_6, "oid");
 VAR_13 = FUNC_3(VAR_6, "collname");
 VAR_14 = FUNC_3(VAR_6, "collnamespace");
 VAR_15 = FUNC_3(VAR_6, "rolname");

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  VAR_10[VAR_8].dobj.objType = VAR_0;
  VAR_10[VAR_8].dobj.catId.tableoid = FUNC_7(FUNC_4(VAR_6, VAR_8, VAR_11));
  VAR_10[VAR_8].dobj.catId.oid = FUNC_7(FUNC_4(VAR_6, VAR_8, VAR_12));
  FUNC_0(&VAR_10[VAR_8].dobj);
  VAR_10[VAR_8].dobj.name = FUNC_12(FUNC_4(VAR_6, VAR_8, VAR_13));
  VAR_10[VAR_8].dobj.namespace =
   FUNC_10(VAR_4,
        FUNC_7(FUNC_4(VAR_6, VAR_8, VAR_14)));
  VAR_10[VAR_8].rolname = FUNC_12(FUNC_4(VAR_6, VAR_8, VAR_15));


  FUNC_13(&(VAR_10[VAR_8].dobj), VAR_4);


  VAR_10[VAR_8].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_6);

 FUNC_9(VAR_9);

 return VAR_10;
}
