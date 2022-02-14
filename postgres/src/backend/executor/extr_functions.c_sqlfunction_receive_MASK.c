
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_2__ {int tstore; int filter; } ;
typedef int DestReceiver ;
typedef TYPE_1__ DR_sqlfunction ;


 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool
FUNC_2(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 DR_sqlfunction *VAR_2 = (DR_sqlfunction *) VAR_1;


 VAR_0 = FUNC_0(VAR_2->filter, VAR_0);


 FUNC_1(VAR_2->tstore, VAR_0);

 return 1;
}
