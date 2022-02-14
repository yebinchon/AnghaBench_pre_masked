
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {TYPE_1__* funcexpr; } ;
struct TYPE_4__ {int funcid; } ;
typedef int HeapTuple ;
typedef TYPE_1__ FuncExpr ;
typedef TYPE_2__ CallStmt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;

TupleDesc
FUNC_6(CallStmt *VAR_2)
{
 FuncExpr *VAR_3;
 HeapTuple VAR_4;
 TupleDesc VAR_5;

 VAR_3 = VAR_2->funcexpr;

 VAR_4 = FUNC_3(VAR_1, FUNC_1(VAR_3->funcid));
 if (!FUNC_0(VAR_4))
  FUNC_5(VAR_0, "cache lookup failed for procedure %u", VAR_3->funcid);

 VAR_5 = FUNC_4(VAR_4);

 FUNC_2(VAR_4);

 return VAR_5;
}
