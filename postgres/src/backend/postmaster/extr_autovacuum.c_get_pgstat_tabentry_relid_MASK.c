
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tables; } ;
typedef int PgStat_StatTabEntry ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ,int *,int ,int *) ;

__attribute__((used)) static PgStat_StatTabEntry *
FUNC_2(Oid VAR_1, bool VAR_2, PgStat_StatDBEntry *VAR_3,
        PgStat_StatDBEntry *VAR_4)
{
 PgStat_StatTabEntry *VAR_5 = ((void*)0);

 if (VAR_2)
 {
  if (FUNC_0(VAR_3))
   VAR_5 = FUNC_1(VAR_3->tables, &VAR_1,
           VAR_0, ((void*)0));
 }
 else if (FUNC_0(VAR_4))
  VAR_5 = FUNC_1(VAR_4->tables, &VAR_1,
          VAR_0, ((void*)0));

 return VAR_5;
}
