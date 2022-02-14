
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {int m_failed; int m_timestamp; int m_xlog; int m_hdr; } ;
typedef TYPE_1__ PgStat_MsgArchiver ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(const char *VAR_1, bool VAR_2)
{
 PgStat_MsgArchiver VAR_3;




 FUNC_3(&VAR_3.m_hdr, VAR_0);
 VAR_3.m_failed = VAR_2;
 FUNC_1(VAR_3.m_xlog, VAR_1, sizeof(VAR_3.m_xlog));
 VAR_3.m_timestamp = FUNC_0();
 FUNC_2(&VAR_3, sizeof(VAR_3));
}
