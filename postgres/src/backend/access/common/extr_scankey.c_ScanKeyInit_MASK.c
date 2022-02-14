
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sk_func; int sk_argument; int sk_collation; int sk_subtype; int sk_strategy; int sk_attno; scalar_t__ sk_flags; } ;
typedef int StrategyNumber ;
typedef TYPE_1__* ScanKey ;
typedef int RegProcedure ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

void
FUNC_1(ScanKey VAR_2,
   AttrNumber VAR_3,
   StrategyNumber VAR_4,
   RegProcedure VAR_5,
   Datum VAR_6)
{
 VAR_2->sk_flags = 0;
 VAR_2->sk_attno = VAR_3;
 VAR_2->sk_strategy = VAR_4;
 VAR_2->sk_subtype = VAR_1;
 VAR_2->sk_collation = VAR_0;
 VAR_2->sk_argument = VAR_6;
 FUNC_0(VAR_5, &VAR_2->sk_func);
}
