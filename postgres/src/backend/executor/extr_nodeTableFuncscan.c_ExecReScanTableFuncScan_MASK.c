
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ps_ResultTupleSlot; int * chgParam; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_6__ {int * tupstore; TYPE_3__ ss; } ;
typedef TYPE_2__ TableFuncScanState ;
typedef int Bitmapset ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(TableFuncScanState *VAR_0)
{
 Bitmapset *VAR_1 = VAR_0->ss.ps.chgParam;

 if (VAR_0->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);
 FUNC_1(&VAR_0->ss);




 if (VAR_1)
 {
  if (VAR_0->tupstore != ((void*)0))
  {
   FUNC_2(VAR_0->tupstore);
   VAR_0->tupstore = ((void*)0);
  }
 }

 if (VAR_0->tupstore != ((void*)0))
  FUNC_3(VAR_0->tupstore);
}
