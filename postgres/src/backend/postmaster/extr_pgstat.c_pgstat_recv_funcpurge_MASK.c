
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int m_nentries; int * m_functionid; int m_databaseid; } ;
struct TYPE_5__ {int functions; } ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef TYPE_2__ PgStat_MsgFuncpurge ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,int *) ;
 TYPE_1__* FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(PgStat_MsgFuncpurge *VAR_1, int VAR_2)
{
 PgStat_StatDBEntry *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1->m_databaseid, 0);




 if (!VAR_3 || !VAR_3->functions)
  return;




 for (VAR_4 = 0; VAR_4 < VAR_1->m_nentries; VAR_4++)
 {

  (void) FUNC_0(VAR_3->functions,
         (void *) &(VAR_1->m_functionid[VAR_4]),
         VAR_0, ((void*)0));
 }
}
