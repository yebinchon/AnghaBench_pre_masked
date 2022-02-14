
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sk_flags; int sk_func; int sk_argument; void* sk_collation; void* sk_subtype; int sk_strategy; int sk_attno; } ;
typedef int StrategyNumber ;
typedef TYPE_1__* ScanKey ;
typedef int RegProcedure ;
typedef void* Oid ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(ScanKey VAR_2,
        int VAR_3,
        AttrNumber VAR_4,
        StrategyNumber VAR_5,
        Oid VAR_6,
        Oid VAR_7,
        RegProcedure VAR_8,
        Datum VAR_9)
{
 VAR_2->sk_flags = VAR_3;
 VAR_2->sk_attno = VAR_4;
 VAR_2->sk_strategy = VAR_5;
 VAR_2->sk_subtype = VAR_6;
 VAR_2->sk_collation = VAR_7;
 VAR_2->sk_argument = VAR_9;
 if (FUNC_2(VAR_8))
 {
  FUNC_3(VAR_8, &VAR_2->sk_func);
 }
 else
 {
  FUNC_0(VAR_3 & (VAR_1 | VAR_0));
  FUNC_1(&VAR_2->sk_func, 0, sizeof(VAR_2->sk_func));
 }
}
