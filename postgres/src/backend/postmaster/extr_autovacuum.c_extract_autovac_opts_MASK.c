
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int bytea ;
typedef int TupleDesc ;
struct TYPE_4__ {scalar_t__ relkind; } ;
struct TYPE_3__ {int autovacuum; } ;
typedef TYPE_1__ StdRdOptions ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_class ;
typedef int AutoVacOpts ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static AutoVacOpts *
FUNC_6(HeapTuple VAR_3, TupleDesc VAR_4)
{
 bytea *VAR_5;
 AutoVacOpts *VAR_6;

 FUNC_0(((Form_pg_class) FUNC_1(VAR_3))->relkind == VAR_1 ||
     ((Form_pg_class) FUNC_1(VAR_3))->relkind == VAR_0 ||
     ((Form_pg_class) FUNC_1(VAR_3))->relkind == VAR_2);

 VAR_5 = FUNC_2(VAR_3, VAR_4, ((void*)0));
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_6 = FUNC_4(sizeof(AutoVacOpts));
 FUNC_3(VAR_6, &(((StdRdOptions *) VAR_5)->autovacuum), sizeof(AutoVacOpts));
 FUNC_5(VAR_5);

 return VAR_6;
}
