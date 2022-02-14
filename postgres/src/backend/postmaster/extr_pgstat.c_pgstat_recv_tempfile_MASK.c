
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ m_filesize; int m_databaseid; } ;
struct TYPE_5__ {int n_temp_files; int n_temp_bytes; } ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgTempFile ;


 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(PgStat_MsgTempFile *VAR_0, int VAR_1)
{
 PgStat_StatDBEntry *VAR_2;

 VAR_2 = FUNC_0(VAR_0->m_databaseid, 1);

 VAR_2->n_temp_bytes += VAR_0->m_filesize;
 VAR_2->n_temp_files += 1;
}
