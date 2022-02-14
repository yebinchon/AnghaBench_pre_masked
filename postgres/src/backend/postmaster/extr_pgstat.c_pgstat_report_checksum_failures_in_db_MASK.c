
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {int m_failurecount; int m_failure_time; int m_databaseid; int m_hdr; } ;
typedef TYPE_1__ PgStat_MsgChecksumFailure ;
typedef int Oid ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;

void
FUNC_3(Oid VAR_4, int VAR_5)
{
 PgStat_MsgChecksumFailure VAR_6;

 if (VAR_2 == VAR_0 || !VAR_3)
  return;

 FUNC_2(&VAR_6.m_hdr, VAR_1);
 VAR_6.m_databaseid = VAR_4;
 VAR_6.m_failurecount = VAR_5;
 VAR_6.m_failure_time = FUNC_0();

 FUNC_1(&VAR_6, sizeof(VAR_6));
}
