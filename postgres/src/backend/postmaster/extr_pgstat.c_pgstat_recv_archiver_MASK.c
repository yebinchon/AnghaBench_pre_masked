
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int last_archived_timestamp; int last_archived_wal; int archived_count; int last_failed_timestamp; int last_failed_wal; int failed_count; } ;
struct TYPE_4__ {int m_timestamp; int m_xlog; scalar_t__ m_failed; } ;
typedef TYPE_1__ PgStat_MsgArchiver ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(PgStat_MsgArchiver *VAR_1, int VAR_2)
{
 if (VAR_1->m_failed)
 {

  ++VAR_0.failed_count;
  FUNC_0(VAR_0.last_failed_wal, VAR_1->m_xlog,
      sizeof(VAR_0.last_failed_wal));
  VAR_0.last_failed_timestamp = VAR_1->m_timestamp;
 }
 else
 {

  ++VAR_0.archived_count;
  FUNC_0(VAR_0.last_archived_wal, VAR_1->m_xlog,
      sizeof(VAR_0.last_archived_wal));
  VAR_0.last_archived_timestamp = VAR_1->m_timestamp;
 }
}
