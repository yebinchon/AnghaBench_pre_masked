
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_12__ {int table_filled; TYPE_1__* perhash; TYPE_2__* tmpcontext; } ;
struct TYPE_11__ {int * ecxt_outertuple; } ;
struct TYPE_10__ {int hashiter; int hashtable; } ;
typedef TYPE_2__ ExprContext ;
typedef TYPE_3__ AggState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_7(AggState *VAR_0)
{
 TupleTableSlot *VAR_1;
 ExprContext *VAR_2 = VAR_0->tmpcontext;





 for (;;)
 {
  VAR_1 = FUNC_4(VAR_0);
  if (FUNC_2(VAR_1))
   break;


  VAR_2->ecxt_outertuple = VAR_1;


  FUNC_5(VAR_0);


  FUNC_3(VAR_0);





  FUNC_0(VAR_0->tmpcontext);
 }

 VAR_0->table_filled = 1;

 FUNC_6(VAR_0, 0, 1);
 FUNC_1(VAR_0->perhash[0].hashtable,
         &VAR_0->perhash[0].hashiter);
}
