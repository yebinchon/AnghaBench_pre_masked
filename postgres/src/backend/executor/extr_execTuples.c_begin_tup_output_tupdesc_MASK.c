
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlotOps ;
typedef int TupleDesc ;
struct TYPE_6__ {TYPE_2__* dest; int slot; } ;
typedef TYPE_1__ TupOutputState ;
struct TYPE_7__ {int (* rStartup ) (TYPE_2__*,int,int ) ;} ;
typedef TYPE_2__ DestReceiver ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;

TupOutputState *
FUNC_3(DestReceiver *VAR_1,
       TupleDesc VAR_2,
       const TupleTableSlotOps *VAR_3)
{
 TupOutputState *VAR_4;

 VAR_4 = (TupOutputState *) FUNC_1(sizeof(TupOutputState));

 VAR_4->slot = FUNC_0(VAR_2, VAR_3);
 VAR_4->dest = VAR_1;

 VAR_4->dest->rStartup(VAR_4->dest, (int) VAR_0, VAR_2);

 return VAR_4;
}
