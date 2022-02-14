
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
struct TYPE_16__ {TYPE_5__ dobj; void* tmpllexize; void* tmplinit; } ;
typedef TYPE_2__ TSTemplateInfo ;
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

TSTemplateInfo *
FUNC_14(Archive *VAR_3, int *VAR_4)
{
 PGresult *VAR_5;
 int VAR_6;
 int VAR_7;
 PQExpBuffer VAR_8;
 TSTemplateInfo *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;


 if (VAR_3->remoteVersion < 80300)
 {
  *VAR_4 = 0;
  return ((void*)0);
 }

 VAR_8 = FUNC_8();

 FUNC_6(VAR_8, "SELECT tableoid, oid, tmplname, "
       "tmplnamespace, tmplinit::oid, tmpllexize::oid "
       "FROM pg_ts_template");

 VAR_5 = FUNC_1(VAR_3, VAR_8->data, VAR_2);

 VAR_6 = FUNC_5(VAR_5);
 *VAR_4 = VAR_6;

 VAR_9 = (TSTemplateInfo *) FUNC_11(VAR_6 * sizeof(TSTemplateInfo));

 VAR_10 = FUNC_3(VAR_5, "tableoid");
 VAR_11 = FUNC_3(VAR_5, "oid");
 VAR_12 = FUNC_3(VAR_5, "tmplname");
 VAR_13 = FUNC_3(VAR_5, "tmplnamespace");
 VAR_14 = FUNC_3(VAR_5, "tmplinit");
 VAR_15 = FUNC_3(VAR_5, "tmpllexize");

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
  VAR_9[VAR_7].tmplinit = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_14));
  VAR_9[VAR_7].tmpllexize = FUNC_7(FUNC_4(VAR_5, VAR_7, VAR_15));


  FUNC_13(&(VAR_9[VAR_7].dobj), VAR_3);


  VAR_9[VAR_7].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_5);

 FUNC_9(VAR_8);

 return VAR_9;
}
