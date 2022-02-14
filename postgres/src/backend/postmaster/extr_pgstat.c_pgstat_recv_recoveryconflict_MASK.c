
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int m_reason; int m_databaseid; } ;
struct TYPE_5__ {int n_conflict_startup_deadlock; int n_conflict_bufferpin; int n_conflict_snapshot; int n_conflict_lock; int n_conflict_tablespace; } ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgRecoveryConflict ;
 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(PgStat_MsgRecoveryConflict *VAR_0, int VAR_1)
{
 PgStat_StatDBEntry *VAR_2;

 VAR_2 = FUNC_0(VAR_0->m_databaseid, 1);

 switch (VAR_0->m_reason)
 {
  case 132:





   break;
  case 128:
   VAR_2->n_conflict_tablespace++;
   break;
  case 131:
   VAR_2->n_conflict_lock++;
   break;
  case 130:
   VAR_2->n_conflict_snapshot++;
   break;
  case 133:
   VAR_2->n_conflict_bufferpin++;
   break;
  case 129:
   VAR_2->n_conflict_startup_deadlock++;
   break;
 }
}
