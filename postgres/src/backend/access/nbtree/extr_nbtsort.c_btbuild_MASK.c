
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int havedead; scalar_t__ indtuples; int * btleader; int * spool2; int * spool; int heap; int isunique; } ;
struct TYPE_9__ {double heap_tuples; scalar_t__ index_tuples; } ;
struct TYPE_8__ {int ii_Unique; } ;
typedef int Relation ;
typedef TYPE_1__ IndexInfo ;
typedef TYPE_2__ IndexBuildResult ;
typedef TYPE_3__ BTBuildState ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 double FUNC_7 (int ,int ,TYPE_3__*,TYPE_1__*) ;
 int FUNC_8 (int ,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_9 (int) ;

IndexBuildResult *
FUNC_10(Relation VAR_2, Relation VAR_3, IndexInfo *VAR_4)
{
 IndexBuildResult *VAR_5;
 BTBuildState VAR_6;
 double VAR_7;






 VAR_6.isunique = VAR_4->ii_Unique;
 VAR_6.havedead = 0;
 VAR_6.heap = VAR_2;
 VAR_6.spool = ((void*)0);
 VAR_6.spool2 = ((void*)0);
 VAR_6.indtuples = 0;
 VAR_6.btleader = ((void*)0);





 if (FUNC_0(VAR_3) != 0)
  FUNC_8(VAR_0, "index \"%s\" already contains data",
    FUNC_1(VAR_3));

 VAR_7 = FUNC_7(VAR_2, VAR_3, &VAR_6, VAR_4);






 FUNC_5(VAR_6.spool, VAR_6.spool2);
 FUNC_6(VAR_6.spool);
 if (VAR_6.spool2)
  FUNC_6(VAR_6.spool2);
 if (VAR_6.btleader)
  FUNC_4(VAR_6.btleader);

 VAR_5 = (IndexBuildResult *) FUNC_9(sizeof(IndexBuildResult));

 VAR_5->heap_tuples = VAR_7;
 VAR_5->index_tuples = VAR_6.indtuples;
 return VAR_5;
}
