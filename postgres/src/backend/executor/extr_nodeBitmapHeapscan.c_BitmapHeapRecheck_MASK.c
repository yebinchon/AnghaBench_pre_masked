
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_7__ {TYPE_3__* ps_ExprContext; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;
struct TYPE_10__ {int bitmapqualorig; TYPE_2__ ss; } ;
struct TYPE_9__ {int * ecxt_scantuple; } ;
typedef TYPE_3__ ExprContext ;
typedef TYPE_4__ BitmapHeapScanState ;


 int FUNC_0 (int ,TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_1(BitmapHeapScanState *VAR_0, TupleTableSlot *VAR_1)
{
 ExprContext *VAR_2;




 VAR_2 = VAR_0->ss.ps.ps_ExprContext;


 VAR_2->ecxt_scantuple = VAR_1;
 return FUNC_0(VAR_0->bitmapqualorig, VAR_2);
}
