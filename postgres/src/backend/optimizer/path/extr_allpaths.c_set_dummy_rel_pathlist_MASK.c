
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lateral_relids; void* partial_pathlist; void* pathlist; TYPE_1__* reltarget; scalar_t__ rows; } ;
struct TYPE_7__ {scalar_t__ width; } ;
typedef TYPE_2__ RelOptInfo ;
typedef int Path ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,void*,void*,void*,int ,int ,int,void*,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(RelOptInfo *VAR_1)
{

 VAR_1->rows = 0;
 VAR_1->reltarget->width = 0;


 VAR_1->pathlist = VAR_0;
 VAR_1->partial_pathlist = VAR_0;


 FUNC_0(VAR_1, (Path *) FUNC_1(((void*)0), VAR_1, VAR_0, VAR_0,
             VAR_0, VAR_1->lateral_relids,
             0, 0, VAR_0, -1));







 FUNC_2(VAR_1);
}
