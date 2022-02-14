
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ f_self_time; scalar_t__ f_total_time; scalar_t__ f_numcalls; int f_id; } ;
struct TYPE_9__ {int m_nentries; int m_databaseid; TYPE_4__* m_entry; } ;
struct TYPE_8__ {int functions; } ;
struct TYPE_7__ {scalar_t__ f_self_time; scalar_t__ f_total_time; scalar_t__ f_numcalls; } ;
typedef TYPE_1__ PgStat_StatFuncEntry ;
typedef TYPE_2__ PgStat_StatDBEntry ;
typedef TYPE_3__ PgStat_MsgFuncstat ;
typedef TYPE_4__ PgStat_FunctionEntry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,int ,int*) ;
 TYPE_2__* FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(PgStat_MsgFuncstat *VAR_1, int VAR_2)
{
 PgStat_FunctionEntry *VAR_3 = &(VAR_1->m_entry[0]);
 PgStat_StatDBEntry *VAR_4;
 PgStat_StatFuncEntry *VAR_5;
 int VAR_6;
 bool VAR_7;

 VAR_4 = FUNC_1(VAR_1->m_databaseid, 1);




 for (VAR_6 = 0; VAR_6 < VAR_1->m_nentries; VAR_6++, VAR_3++)
 {
  VAR_5 = (PgStat_StatFuncEntry *) FUNC_0(VAR_4->functions,
               (void *) &(VAR_3->f_id),
               VAR_0, &VAR_7);

  if (!VAR_7)
  {




   VAR_5->f_numcalls = VAR_3->f_numcalls;
   VAR_5->f_total_time = VAR_3->f_total_time;
   VAR_5->f_self_time = VAR_3->f_self_time;
  }
  else
  {



   VAR_5->f_numcalls += VAR_3->f_numcalls;
   VAR_5->f_total_time += VAR_3->f_total_time;
   VAR_5->f_self_time += VAR_3->f_self_time;
  }
 }
}
