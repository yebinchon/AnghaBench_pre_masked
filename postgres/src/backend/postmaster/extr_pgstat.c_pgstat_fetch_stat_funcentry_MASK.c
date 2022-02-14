
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * functions; } ;
typedef int PgStat_StatFuncEntry ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,void*,int ,int *) ;
 TYPE_1__* FUNC_2 (int ) ;

PgStat_StatFuncEntry *
FUNC_3(Oid VAR_2)
{
 PgStat_StatDBEntry *VAR_3;
 PgStat_StatFuncEntry *VAR_4 = ((void*)0);


 FUNC_0();


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 != ((void*)0) && VAR_3->functions != ((void*)0))
 {
  VAR_4 = (PgStat_StatFuncEntry *) FUNC_1(VAR_3->functions,
               (void *) &VAR_2,
               VAR_0, ((void*)0));
 }

 return VAR_4;
}
