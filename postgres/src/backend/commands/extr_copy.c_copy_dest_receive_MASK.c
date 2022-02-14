
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_2__ {int processed; int cstate; } ;
typedef int DestReceiver ;
typedef TYPE_1__ DR_copy ;
typedef int CopyState ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static bool
FUNC_1(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 DR_copy *VAR_2 = (DR_copy *) VAR_1;
 CopyState VAR_3 = VAR_2->cstate;


 FUNC_0(VAR_3, VAR_0);
 VAR_2->processed++;

 return 1;
}
