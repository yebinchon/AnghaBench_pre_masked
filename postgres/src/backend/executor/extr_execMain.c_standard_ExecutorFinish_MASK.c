
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int es_top_eflags; int es_finished; int es_query_cxt; } ;
struct TYPE_6__ {scalar_t__ totaltime; TYPE_2__* estate; } ;
typedef TYPE_1__ QueryDesc ;
typedef int MemoryContext ;
typedef TYPE_2__ EState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(QueryDesc *VAR_2)
{
 EState *VAR_3;
 MemoryContext VAR_4;


 FUNC_1(VAR_2 != ((void*)0));

 VAR_3 = VAR_2->estate;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(!(VAR_3->es_top_eflags & VAR_0));


 FUNC_1(!VAR_3->es_finished);


 VAR_4 = FUNC_5(VAR_3->es_query_cxt);


 if (VAR_2->totaltime)
  FUNC_3(VAR_2->totaltime);


 FUNC_2(VAR_3);


 if (!(VAR_3->es_top_eflags & VAR_1))
  FUNC_0(VAR_3);

 if (VAR_2->totaltime)
  FUNC_4(VAR_2->totaltime, 0);

 FUNC_5(VAR_4);

 VAR_3->es_finished = 1;
}
