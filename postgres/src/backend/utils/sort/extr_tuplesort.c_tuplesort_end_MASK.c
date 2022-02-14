
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int allowedMem; int availMem; int sortcontext; int * estate; int * tapeset; int ru_start; int worker; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_7__ {int ecxt_scantuple; } ;
typedef int MemoryContext ;
typedef TYPE_2__ ExprContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int VAR_0 ;
 long FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,long) ;
 int FUNC_9 (int ,char*,char*,int ,long,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_1 ;

void
FUNC_11(Tuplesortstate *VAR_2)
{

 MemoryContext VAR_3 = FUNC_6(VAR_2->sortcontext);
 if (VAR_2->tapeset)
  FUNC_4(VAR_2->tapeset);
 FUNC_8(VAR_2->tapeset != ((void*)0), 0L);



 if (VAR_2->estate != ((void*)0))
 {
  ExprContext *VAR_4 = FUNC_2(VAR_2->estate);

  FUNC_0(VAR_4->ecxt_scantuple);
  FUNC_1(VAR_2->estate);
 }

 FUNC_6(VAR_3);





 FUNC_5(VAR_2->sortcontext);
}
