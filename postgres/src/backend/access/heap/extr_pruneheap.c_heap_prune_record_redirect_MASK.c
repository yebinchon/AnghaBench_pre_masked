
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nredirected; size_t* redirected; int* marked; } ;
typedef TYPE_1__ PruneState ;
typedef size_t OffsetNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(PruneState *VAR_1,
         OffsetNumber VAR_2, OffsetNumber VAR_3)
{
 FUNC_0(VAR_1->nredirected < VAR_0);
 VAR_1->redirected[VAR_1->nredirected * 2] = VAR_2;
 VAR_1->redirected[VAR_1->nredirected * 2 + 1] = VAR_3;
 VAR_1->nredirected++;
 FUNC_0(!VAR_1->marked[VAR_2]);
 VAR_1->marked[VAR_2] = 1;
 FUNC_0(!VAR_1->marked[VAR_3]);
 VAR_1->marked[VAR_3] = 1;
}
