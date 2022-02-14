
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ index_tuples; scalar_t__ heap_tuples; } ;
typedef int Relation ;
typedef int IndexInfo ;
typedef TYPE_1__ IndexBuildResult ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static IndexBuildResult *
FUNC_1(Relation VAR_0, Relation VAR_1, IndexInfo *VAR_2)
{
 IndexBuildResult *VAR_3;

 VAR_3 = (IndexBuildResult *) FUNC_0(sizeof(IndexBuildResult));


 VAR_3->heap_tuples = 0;

 VAR_3->index_tuples = 0;

 return VAR_3;
}
