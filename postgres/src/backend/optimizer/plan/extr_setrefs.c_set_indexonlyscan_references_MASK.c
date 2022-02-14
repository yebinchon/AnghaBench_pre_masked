
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int indexed_tlist ;
struct TYPE_5__ {int * qual; int * targetlist; } ;
struct TYPE_6__ {int scanrelid; TYPE_1__ plan; } ;
struct TYPE_7__ {void* indextlist; void* indexorderby; void* indexqual; TYPE_2__ scan; } ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Node ;
typedef int List ;
typedef TYPE_3__ IndexOnlyScan ;


 int VAR_0 ;
 int * FUNC_0 (void*) ;
 void* FUNC_1 (int *,void*,int) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static Plan *
FUNC_4(PlannerInfo *VAR_1,
        IndexOnlyScan *VAR_2,
        int VAR_3)
{
 indexed_tlist *VAR_4;

 VAR_4 = FUNC_0(VAR_2->indextlist);

 VAR_2->scan.scanrelid += VAR_3;
 VAR_2->scan.plan.targetlist = (List *)
  FUNC_2(VAR_1,
        (Node *) VAR_2->scan.plan.targetlist,
        VAR_4,
        VAR_0,
        VAR_3);
 VAR_2->scan.plan.qual = (List *)
  FUNC_2(VAR_1,
        (Node *) VAR_2->scan.plan.qual,
        VAR_4,
        VAR_0,
        VAR_3);

 VAR_2->indexqual = FUNC_1(VAR_1, VAR_2->indexqual, VAR_3);

 VAR_2->indexorderby = FUNC_1(VAR_1, VAR_2->indexorderby, VAR_3);

 VAR_2->indextlist = FUNC_1(VAR_1, VAR_2->indextlist, VAR_3);

 FUNC_3(VAR_4);

 return (Plan *) VAR_2;
}
