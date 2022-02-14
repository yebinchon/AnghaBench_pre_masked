
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int es_query_cxt; } ;
struct TYPE_4__ {scalar_t__ operation; int planstate; TYPE_2__* estate; } ;
typedef TYPE_1__ QueryDesc ;
typedef int MemoryContext ;
typedef TYPE_2__ EState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(QueryDesc *VAR_1)
{
 EState *VAR_2;
 MemoryContext VAR_3;


 FUNC_0(VAR_1 != ((void*)0));

 VAR_2 = VAR_1->estate;

 FUNC_0(VAR_2 != ((void*)0));


 FUNC_0(VAR_1->operation == VAR_0);




 VAR_3 = FUNC_2(VAR_2->es_query_cxt);




 FUNC_1(VAR_1->planstate);

 FUNC_2(VAR_3);
}
