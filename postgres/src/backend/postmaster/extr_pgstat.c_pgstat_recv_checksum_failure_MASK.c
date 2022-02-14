
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int m_failure_time; scalar_t__ m_failurecount; int m_databaseid; } ;
struct TYPE_5__ {int last_checksum_failure; int n_checksum_failures; } ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgChecksumFailure ;


 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(PgStat_MsgChecksumFailure *VAR_0, int VAR_1)
{
 PgStat_StatDBEntry *VAR_2;

 VAR_2 = FUNC_0(VAR_0->m_databaseid, 1);

 VAR_2->n_checksum_failures += VAR_0->m_failurecount;
 VAR_2->last_checksum_failure = VAR_0->m_failure_time;
}
