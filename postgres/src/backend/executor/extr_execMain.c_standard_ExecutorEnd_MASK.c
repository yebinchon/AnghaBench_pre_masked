
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int es_top_eflags; int es_crosscheck_snapshot; int es_snapshot; int es_query_cxt; scalar_t__ es_finished; } ;
struct TYPE_6__ {int * totaltime; int * planstate; TYPE_2__* estate; int * tupDesc; } ;
typedef TYPE_1__ QueryDesc ;
typedef int MemoryContext ;
typedef TYPE_2__ EState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(QueryDesc *VAR_1)
{
 EState *VAR_2;
 MemoryContext VAR_3;


 FUNC_0(VAR_1 != ((void*)0));

 VAR_2 = VAR_1->estate;

 FUNC_0(VAR_2 != ((void*)0));






 FUNC_0(VAR_2->es_finished ||
     (VAR_2->es_top_eflags & VAR_0));




 VAR_3 = FUNC_3(VAR_2->es_query_cxt);

 FUNC_1(VAR_1->planstate, VAR_2);


 FUNC_4(VAR_2->es_snapshot);
 FUNC_4(VAR_2->es_crosscheck_snapshot);




 FUNC_3(VAR_3);





 FUNC_2(VAR_2);


 VAR_1->tupDesc = ((void*)0);
 VAR_1->estate = ((void*)0);
 VAR_1->planstate = ((void*)0);
 VAR_1->totaltime = ((void*)0);
}
