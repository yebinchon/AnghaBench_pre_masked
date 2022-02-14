
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_7__ {int flagColIdx; } ;
struct TYPE_5__ {scalar_t__ plan; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;
typedef TYPE_2__ SetOpState ;
typedef TYPE_3__ SetOp ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int*) ;

__attribute__((used)) static int
FUNC_3(SetOpState *VAR_0, TupleTableSlot *VAR_1)
{
 SetOp *VAR_2 = (SetOp *) VAR_0->ps.plan;
 int VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_1(FUNC_2(VAR_1,
           VAR_2->flagColIdx,
           &VAR_4));
 FUNC_0(!VAR_4);
 FUNC_0(VAR_3 == 0 || VAR_3 == 1);
 return VAR_3;
}
