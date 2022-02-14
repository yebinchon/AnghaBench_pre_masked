
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {int m_databaseid; int m_hdr; } ;
typedef TYPE_1__ PgStat_MsgDropdb ;
typedef int Oid ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(Oid VAR_3)
{
 PgStat_MsgDropdb VAR_4;

 if (VAR_2 == VAR_0)
  return;

 FUNC_1(&VAR_4.m_hdr, VAR_1);
 VAR_4.m_databaseid = VAR_3;
 FUNC_0(&VAR_4, sizeof(VAR_4));
}
