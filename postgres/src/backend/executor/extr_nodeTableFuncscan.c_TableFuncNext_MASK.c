
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_6__ {int ps_ExprContext; } ;
struct TYPE_7__ {TYPE_1__ ps; int * ss_ScanTupleSlot; } ;
struct TYPE_8__ {int * tupstore; TYPE_2__ ss; } ;
typedef TYPE_3__ TableFuncScanState ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,int,int,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_2(TableFuncScanState *VAR_0)
{
 TupleTableSlot *VAR_1;

 VAR_1 = VAR_0->ss.ss_ScanTupleSlot;





 if (VAR_0->tupstore == ((void*)0))
  FUNC_0(VAR_0, VAR_0->ss.ps.ps_ExprContext);




 (void) FUNC_1(VAR_0->tupstore,
           1,
           0,
           VAR_1);
 return VAR_1;
}
