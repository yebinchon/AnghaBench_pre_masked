
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int name; } ;
struct TYPE_23__ {TYPE_2__ dobj; } ;
typedef TYPE_3__ TypeInfo ;
struct TYPE_21__ {void* oid; void* tableoid; } ;
struct TYPE_28__ {int name; TYPE_1__ catId; int objType; } ;
struct TYPE_24__ {TYPE_8__ dobj; void* trflang; void* trftype; void* trftosql; void* trffromsql; } ;
typedef TYPE_4__ TransformInfo ;
struct TYPE_27__ {int remoteVersion; } ;
struct TYPE_26__ {int data; } ;
struct TYPE_25__ {int data; } ;
typedef TYPE_5__ PQExpBufferData ;
typedef TYPE_6__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_7__ Archive ;


 int FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_7__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,char*,int ,char*) ;
 int FUNC_7 (TYPE_6__*,char*) ;
 void* FUNC_8 (int ) ;
 TYPE_6__* FUNC_9 () ;
 int FUNC_10 (TYPE_6__*) ;
 TYPE_3__* FUNC_11 (void*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (TYPE_7__*,void*) ;
 int FUNC_14 (TYPE_5__*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (TYPE_8__*,TYPE_7__*) ;

TransformInfo *
FUNC_17(Archive *VAR_2, int *VAR_3)
{
 PGresult *VAR_4;
 int VAR_5;
 int VAR_6;
 PQExpBuffer VAR_7;
 TransformInfo *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;


 if (VAR_2->remoteVersion < 90500)
 {
  *VAR_3 = 0;
  return ((void*)0);
 }

 VAR_7 = FUNC_9();

 FUNC_7(VAR_7, "SELECT tableoid, oid, "
       "trftype, trflang, trffromsql::oid, trftosql::oid "
       "FROM pg_transform "
       "ORDER BY 3,4");

 VAR_4 = FUNC_1(VAR_2, VAR_7->data, VAR_1);

 VAR_5 = FUNC_5(VAR_4);

 *VAR_3 = VAR_5;

 VAR_8 = (TransformInfo *) FUNC_15(VAR_5 * sizeof(TransformInfo));

 VAR_9 = FUNC_3(VAR_4, "tableoid");
 VAR_10 = FUNC_3(VAR_4, "oid");
 VAR_11 = FUNC_3(VAR_4, "trftype");
 VAR_12 = FUNC_3(VAR_4, "trflang");
 VAR_13 = FUNC_3(VAR_4, "trffromsql");
 VAR_14 = FUNC_3(VAR_4, "trftosql");

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  PQExpBufferData VAR_15;
  TypeInfo *VAR_16;
  char *VAR_17;

  VAR_8[VAR_6].dobj.objType = VAR_0;
  VAR_8[VAR_6].dobj.catId.tableoid = FUNC_8(FUNC_4(VAR_4, VAR_6, VAR_9));
  VAR_8[VAR_6].dobj.catId.oid = FUNC_8(FUNC_4(VAR_4, VAR_6, VAR_10));
  FUNC_0(&VAR_8[VAR_6].dobj);
  VAR_8[VAR_6].trftype = FUNC_8(FUNC_4(VAR_4, VAR_6, VAR_11));
  VAR_8[VAR_6].trflang = FUNC_8(FUNC_4(VAR_4, VAR_6, VAR_12));
  VAR_8[VAR_6].trffromsql = FUNC_8(FUNC_4(VAR_4, VAR_6, VAR_13));
  VAR_8[VAR_6].trftosql = FUNC_8(FUNC_4(VAR_4, VAR_6, VAR_14));






  FUNC_14(&VAR_15);
  VAR_16 = FUNC_11(VAR_8[VAR_6].trftype);
  VAR_17 = FUNC_13(VAR_2, VAR_8[VAR_6].trflang);
  if (VAR_16 && VAR_17)
   FUNC_6(&VAR_15, "%s %s",
         VAR_16->dobj.name, VAR_17);
  VAR_8[VAR_6].dobj.name = VAR_15.data;
  FUNC_12(VAR_17);


  FUNC_16(&(VAR_8[VAR_6].dobj), VAR_2);
 }

 FUNC_2(VAR_4);

 FUNC_10(VAR_7);

 return VAR_8;
}
