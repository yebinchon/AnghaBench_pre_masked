
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {int m_objectid; int m_resettype; int m_databaseid; int m_hdr; } ;
typedef int PgStat_Single_Reset_Type ;
typedef TYPE_1__ PgStat_MsgResetsinglecounter ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(Oid VAR_4, PgStat_Single_Reset_Type VAR_5)
{
 PgStat_MsgResetsinglecounter VAR_6;

 if (VAR_3 == VAR_1)
  return;

 FUNC_1(&VAR_6.m_hdr, VAR_2);
 VAR_6.m_databaseid = VAR_0;
 VAR_6.m_resettype = VAR_5;
 VAR_6.m_objectid = VAR_4;

 FUNC_0(&VAR_6, sizeof(VAR_6));
}
