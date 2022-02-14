
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ m_resettype; int m_objectid; int m_databaseid; } ;
struct TYPE_5__ {int functions; int tables; int stat_reset_timestamp; } ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgResetsinglecounter ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,void*,int ,int *) ;
 TYPE_1__* FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(PgStat_MsgResetsinglecounter *VAR_3, int VAR_4)
{
 PgStat_StatDBEntry *VAR_5;

 VAR_5 = FUNC_2(VAR_3->m_databaseid, 0);

 if (!VAR_5)
  return;


 VAR_5->stat_reset_timestamp = FUNC_0();


 if (VAR_3->m_resettype == VAR_2)
  (void) FUNC_1(VAR_5->tables, (void *) &(VAR_3->m_objectid),
         VAR_0, ((void*)0));
 else if (VAR_3->m_resettype == VAR_1)
  (void) FUNC_1(VAR_5->functions, (void *) &(VAR_3->m_objectid),
         VAR_0, ((void*)0));
}
