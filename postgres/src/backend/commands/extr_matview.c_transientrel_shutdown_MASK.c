
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * transientrel; int ti_options; int bistate; } ;
typedef int DestReceiver ;
typedef TYPE_1__ DR_transientrel ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(DestReceiver *VAR_1)
{
 DR_transientrel *VAR_2 = (DR_transientrel *) VAR_1;

 FUNC_0(VAR_2->bistate);

 FUNC_2(VAR_2->transientrel, VAR_2->ti_options);


 FUNC_1(VAR_2->transientrel, VAR_0);
 VAR_2->transientrel = ((void*)0);
}
