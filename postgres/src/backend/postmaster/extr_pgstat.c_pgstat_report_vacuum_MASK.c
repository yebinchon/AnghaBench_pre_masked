
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {void* m_dead_tuples; void* m_live_tuples; int m_vacuumtime; int m_autovacuum; int m_tableoid; int m_databaseid; int m_hdr; } ;
typedef TYPE_1__ PgStat_MsgVacuum ;
typedef void* PgStat_Counter ;
typedef int Oid ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;

void
FUNC_4(Oid VAR_6, bool VAR_7,
      PgStat_Counter VAR_8, PgStat_Counter VAR_9)
{
 PgStat_MsgVacuum VAR_10;

 if (VAR_4 == VAR_2 || !VAR_5)
  return;

 FUNC_3(&VAR_10.m_hdr, VAR_3);
 VAR_10.m_databaseid = VAR_7 ? VAR_0 : VAR_1;
 VAR_10.m_tableoid = VAR_6;
 VAR_10.m_autovacuum = FUNC_1();
 VAR_10.m_vacuumtime = FUNC_0();
 VAR_10.m_live_tuples = VAR_8;
 VAR_10.m_dead_tuples = VAR_9;
 FUNC_2(&VAR_10, sizeof(VAR_10));
}
