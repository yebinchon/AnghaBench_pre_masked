
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sk_flags; int sk_func; int sk_argument; void* sk_collation; void* sk_subtype; int sk_strategy; int sk_attno; } ;
typedef int StrategyNumber ;
typedef TYPE_1__* ScanKey ;
typedef void* Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

void
FUNC_1(ScanKey VAR_1,
          int VAR_2,
          AttrNumber VAR_3,
          StrategyNumber VAR_4,
          Oid VAR_5,
          Oid VAR_6,
          FmgrInfo *VAR_7,
          Datum VAR_8)
{
 VAR_1->sk_flags = VAR_2;
 VAR_1->sk_attno = VAR_3;
 VAR_1->sk_strategy = VAR_4;
 VAR_1->sk_subtype = VAR_5;
 VAR_1->sk_collation = VAR_6;
 VAR_1->sk_argument = VAR_8;
 FUNC_0(&VAR_1->sk_func, VAR_7, VAR_0);
}
