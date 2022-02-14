
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {size_t m_filesize; int m_databaseid; int m_hdr; } ;
typedef TYPE_1__ PgStat_MsgTempFile ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;

void
FUNC_2(size_t VAR_5)
{
 PgStat_MsgTempFile VAR_6;

 if (VAR_3 == VAR_1 || !VAR_4)
  return;

 FUNC_1(&VAR_6.m_hdr, VAR_2);
 VAR_6.m_databaseid = VAR_0;
 VAR_6.m_filesize = VAR_5;
 FUNC_0(&VAR_6, sizeof(VAR_6));
}
