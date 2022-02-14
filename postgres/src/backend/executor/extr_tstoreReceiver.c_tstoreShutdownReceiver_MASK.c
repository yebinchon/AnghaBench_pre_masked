
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tofree; int * outvalues; } ;
typedef TYPE_1__ TStoreState ;
typedef int DestReceiver ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(DestReceiver *VAR_0)
{
 TStoreState *VAR_1 = (TStoreState *) VAR_0;


 if (VAR_1->outvalues)
  FUNC_0(VAR_1->outvalues);
 VAR_1->outvalues = ((void*)0);
 if (VAR_1->tofree)
  FUNC_0(VAR_1->tofree);
 VAR_1->tofree = ((void*)0);
}
