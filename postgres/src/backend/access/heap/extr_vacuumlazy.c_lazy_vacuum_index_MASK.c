
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int analyze_only; int report_progress; int estimated_count; int strategy; int num_heap_tuples; int message_level; int index; } ;
struct TYPE_5__ {int num_dead_tuples; int old_live_tuples; } ;
typedef int Relation ;
typedef int PGRUsage ;
typedef TYPE_1__ LVRelStats ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef int IndexBulkDeleteResult ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int * FUNC_4 (TYPE_2__*,int *,int ,void*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(Relation VAR_3,
      IndexBulkDeleteResult **VAR_4,
      LVRelStats *VAR_5)
{
 IndexVacuumInfo VAR_6;
 PGRUsage VAR_7;

 FUNC_5(&VAR_7);

 VAR_6.index = VAR_3;
 VAR_6.analyze_only = 0;
 VAR_6.report_progress = 0;
 VAR_6.estimated_count = 1;
 VAR_6.message_level = VAR_0;

 VAR_6.num_heap_tuples = VAR_5->old_live_tuples;
 VAR_6.strategy = VAR_2;


 *VAR_4 = FUNC_4(&VAR_6, *VAR_4,
          VAR_1, (void *) VAR_5);

 FUNC_1(VAR_0,
   (FUNC_3("scanned index \"%s\" to remove %d row versions",
     FUNC_0(VAR_3),
     VAR_5->num_dead_tuples),
    FUNC_2("%s", FUNC_6(&VAR_7))));
}
