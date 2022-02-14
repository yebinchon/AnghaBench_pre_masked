
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ndead; size_t* nowdead; int* marked; } ;
typedef TYPE_1__ PruneState ;
typedef size_t OffsetNumber ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_1(PruneState *VAR_1, OffsetNumber VAR_2)
{
 FUNC_0(VAR_1->ndead < VAR_0);
 VAR_1->nowdead[VAR_1->ndead] = VAR_2;
 VAR_1->ndead++;
 FUNC_0(!VAR_1->marked[VAR_2]);
 VAR_1->marked[VAR_2] = 1;
}
