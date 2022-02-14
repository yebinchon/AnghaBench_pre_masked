
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_7__ {TYPE_1__* state; } ;
struct TYPE_8__ {int * ss_ScanTupleSlot; TYPE_2__ ps; } ;
struct TYPE_9__ {int relation; int readptr; TYPE_3__ ss; } ;
struct TYPE_6__ {int es_direction; } ;
typedef TYPE_4__ NamedTuplestoreScanState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_4(NamedTuplestoreScanState *VAR_0)
{
 TupleTableSlot *VAR_1;


 FUNC_0(FUNC_1(VAR_0->ss.ps.state->es_direction));




 VAR_1 = VAR_0->ss.ss_ScanTupleSlot;
 FUNC_3(VAR_0->relation, VAR_0->readptr);
 (void) FUNC_2(VAR_0->relation, 1, 0, VAR_1);
 return VAR_1;
}
