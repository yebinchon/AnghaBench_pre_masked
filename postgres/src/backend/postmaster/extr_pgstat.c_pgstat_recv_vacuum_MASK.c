
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int m_vacuumtime; scalar_t__ m_autovacuum; int m_dead_tuples; int m_live_tuples; int m_tableoid; int m_databaseid; } ;
struct TYPE_5__ {int vacuum_count; int vacuum_timestamp; int autovac_vacuum_count; int autovac_vacuum_timestamp; int n_dead_tuples; int n_live_tuples; } ;
typedef TYPE_1__ PgStat_StatTabEntry ;
typedef int PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgVacuum ;


 int * FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(PgStat_MsgVacuum *VAR_0, int VAR_1)
{
 PgStat_StatDBEntry *VAR_2;
 PgStat_StatTabEntry *VAR_3;




 VAR_2 = FUNC_0(VAR_0->m_databaseid, 1);

 VAR_3 = FUNC_1(VAR_2, VAR_0->m_tableoid, 1);

 VAR_3->n_live_tuples = VAR_0->m_live_tuples;
 VAR_3->n_dead_tuples = VAR_0->m_dead_tuples;

 if (VAR_0->m_autovacuum)
 {
  VAR_3->autovac_vacuum_timestamp = VAR_0->m_vacuumtime;
  VAR_3->autovac_vacuum_count++;
 }
 else
 {
  VAR_3->vacuum_timestamp = VAR_0->m_vacuumtime;
  VAR_3->vacuum_count++;
 }
}
