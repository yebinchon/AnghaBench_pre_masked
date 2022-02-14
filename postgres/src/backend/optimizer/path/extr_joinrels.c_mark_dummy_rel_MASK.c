
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lateral_relids; void* partial_pathlist; void* pathlist; scalar_t__ rows; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int Path ;
typedef int MemoryContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,void*,void*,void*,int ,int ,int,void*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(RelOptInfo *VAR_1)
{
 MemoryContext VAR_2;


 if (FUNC_4(VAR_1))
  return;


 VAR_2 = FUNC_1(FUNC_0(VAR_1));


 VAR_1->rows = 0;


 VAR_1->pathlist = VAR_0;
 VAR_1->partial_pathlist = VAR_0;


 FUNC_2(VAR_1, (Path *) FUNC_3(((void*)0), VAR_1, VAR_0, VAR_0,
             VAR_0, VAR_1->lateral_relids,
             0, 0, VAR_0, -1));


 FUNC_5(VAR_1);

 FUNC_1(VAR_2);
}
