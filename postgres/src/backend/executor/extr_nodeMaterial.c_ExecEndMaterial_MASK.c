
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ss_ScanTupleSlot; } ;
struct TYPE_6__ {int * tuplestorestate; TYPE_1__ ss; } ;
typedef TYPE_2__ MaterialState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(MaterialState *VAR_0)
{



 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);




 if (VAR_0->tuplestorestate != ((void*)0))
  FUNC_3(VAR_0->tuplestorestate);
 VAR_0->tuplestorestate = ((void*)0);




 FUNC_1(FUNC_2(VAR_0));
}
