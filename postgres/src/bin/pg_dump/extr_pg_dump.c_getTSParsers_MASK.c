
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
struct TYPE_19__ {int dump; int namespace; int name; TYPE_1__ catId; int objType; } ;
struct TYPE_18__ {int remoteVersion; } ;
struct TYPE_17__ {int data; } ;
struct TYPE_16__ {TYPE_5__ dobj; void* prslextype; void* prsheadline; void* prsend; void* prstoken; void* prsstart; } ;
typedef TYPE_2__ TSParserInfo ;
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
 int FUNC_6 (TYPE_3__*,char*) ;
 void* FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_4__*,void*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_5__*,TYPE_4__*) ;

TSParserInfo *
FUNC_14(Archive *VAR_3, int *VAR_4)
{
 PGresult *VAR_5;
 int VAR_6;
 int VAR_7;
 PQExpBuffer VAR_8;
 TSParserInfo *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;


 if (VAR_3->remoteVersion < 80300)
 {
  *VAR_4 = 0;
  return ((void*)0);
 }

 VAR_8 = FUNC_8();






 FUNC_6(VAR_8, "SELECT tableoid, oid, prsname, prsnamespace, "
       "prsstart::oid, prstoken::oid, "
       "prsend::oid, prsheadline::oid, prslextype::oid "
       "FROM pg_ts_parser");

 VAR_5 = FUNC_1(VAR_3, VAR_8->data, VAR_2);

 VAR_6 = FUNC_5(VAR_5);
 *VAR_4 = VAR_6;

 VAR_9 = (TSParserInfo *) FUNC_11(VAR_6 * sizeof(TSParserInfo));

 VAR_10 = FUNC_3(VAR_5, "tableoid");
 VAR_11 = FUNC_3(VAR_5, "oid");
 VAR_12 = FUNC_3(VAR_5, "prsname");
 VAR_13 = FUNC_3(VAR_5, "prsnamespace");
 VAR_14 = FUNC_3(VAR_5, "prsstart");
 VAR_15 = FUNC_3(VAR_5, "prstoken");
 VAR_16 = FUNC_3(VAR_5, "prsend");
 VAR_17 = FUNC_3(VAR_5, "prsheadline");
 VAR_18 = FUNC_3(VAR_5, "prslextype");

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  VAR_9[VAR_7].dobj.objType = VAR_0;
  VAR_9[VAR_7].dobj.catId.tableoid = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_10));
  VAR_9[VAR_7].dobj.catId.oid = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_11));
  FUNC_0(&VAR_9[VAR_7].dobj);
  VAR_9[VAR_7].dobj.name = FUNC_12(FUNC_4(VAR_5, VAR_7, VAR_12));
  VAR_9[VAR_7].dobj.namespace =
   FUNC_10(VAR_3,
        FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_13)));
  VAR_9[VAR_7].prsstart = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_14));
  VAR_9[VAR_7].prstoken = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_15));
  VAR_9[VAR_7].prsend = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_16));
  VAR_9[VAR_7].prsheadline = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_17));
  VAR_9[VAR_7].prslextype = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_18));


  FUNC_13(&(VAR_9[VAR_7].dobj), VAR_3);


  VAR_9[VAR_7].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_5);

 FUNC_9(VAR_8);

 return VAR_9;
}
