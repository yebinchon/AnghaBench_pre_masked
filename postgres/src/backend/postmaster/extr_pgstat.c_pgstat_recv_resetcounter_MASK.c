
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int m_databaseid; } ;
struct TYPE_6__ {int * functions; int * tables; } ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgResetcounter ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(PgStat_MsgResetcounter *VAR_0, int VAR_1)
{
 PgStat_StatDBEntry *VAR_2;




 VAR_2 = FUNC_1(VAR_0->m_databaseid, 0);

 if (!VAR_2)
  return;





 if (VAR_2->tables != ((void*)0))
  FUNC_0(VAR_2->tables);
 if (VAR_2->functions != ((void*)0))
  FUNC_0(VAR_2->functions);

 VAR_2->tables = ((void*)0);
 VAR_2->functions = ((void*)0);





 FUNC_2(VAR_2);
}
