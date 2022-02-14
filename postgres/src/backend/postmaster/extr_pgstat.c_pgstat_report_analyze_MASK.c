
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int msg ;
struct TYPE_15__ {int m_resetcounter; void* m_dead_tuples; void* m_live_tuples; int m_analyzetime; int m_autovacuum; int m_tableoid; int m_databaseid; int m_hdr; } ;
struct TYPE_14__ {scalar_t__ tuples_deleted; scalar_t__ tuples_updated; scalar_t__ tuples_inserted; struct TYPE_14__* upper; } ;
struct TYPE_13__ {TYPE_3__* rd_rel; TYPE_2__* pgstat_info; } ;
struct TYPE_12__ {scalar_t__ relisshared; } ;
struct TYPE_10__ {scalar_t__ t_delta_dead_tuples; } ;
struct TYPE_11__ {TYPE_1__ t_counts; TYPE_5__* trans; } ;
typedef TYPE_4__* Relation ;
typedef TYPE_5__ PgStat_TableXactStatus ;
typedef TYPE_6__ PgStat_MsgAnalyze ;
typedef void* PgStat_Counter ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 void* FUNC_2 (void*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;

void
FUNC_6(Relation VAR_6,
       PgStat_Counter VAR_7, PgStat_Counter VAR_8,
       bool VAR_9)
{
 PgStat_MsgAnalyze VAR_10;

 if (VAR_4 == VAR_2 || !VAR_5)
  return;
 if (VAR_6->pgstat_info != ((void*)0))
 {
  PgStat_TableXactStatus *VAR_11;

  for (VAR_11 = VAR_6->pgstat_info->trans; VAR_11; VAR_11 = VAR_11->upper)
  {
   VAR_7 -= VAR_11->tuples_inserted - VAR_11->tuples_deleted;
   VAR_8 -= VAR_11->tuples_updated + VAR_11->tuples_deleted;
  }

  VAR_8 -= VAR_6->pgstat_info->t_counts.t_delta_dead_tuples;

  VAR_7 = FUNC_2(VAR_7, 0);
  VAR_8 = FUNC_2(VAR_8, 0);
 }

 FUNC_5(&VAR_10.m_hdr, VAR_3);
 VAR_10.m_databaseid = VAR_6->rd_rel->relisshared ? VAR_0 : VAR_1;
 VAR_10.m_tableoid = FUNC_3(VAR_6);
 VAR_10.m_autovacuum = FUNC_1();
 VAR_10.m_resetcounter = VAR_9;
 VAR_10.m_analyzetime = FUNC_0();
 VAR_10.m_live_tuples = VAR_7;
 VAR_10.m_dead_tuples = VAR_8;
 FUNC_4(&VAR_10, sizeof(VAR_10));
}
