
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * totaltime; TYPE_2__* estate; TYPE_1__* plannedstmt; } ;
struct TYPE_8__ {int es_query_cxt; } ;
struct TYPE_7__ {scalar_t__ queryId; } ;
typedef TYPE_3__ QueryDesc ;
typedef int MemoryContext ;


 int VAR_0 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_6(QueryDesc *VAR_1, int VAR_2)
{
 if (&FUNC_4)
  FUNC_4(VAR_1, VAR_2);
 else
  FUNC_5(VAR_1, VAR_2);






 if (FUNC_3() && VAR_1->plannedstmt->queryId != FUNC_2(0))
 {





  if (VAR_1->totaltime == ((void*)0))
  {
   MemoryContext VAR_3;

   VAR_3 = FUNC_1(VAR_1->estate->es_query_cxt);
   VAR_1->totaltime = FUNC_0(1, VAR_0);
   FUNC_1(VAR_3);
  }
 }
}
