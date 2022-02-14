
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pages_free; int pages_deleted; int tuples_removed; int num_pages; int num_index_tuples; int estimated_count; } ;
struct TYPE_11__ {int analyze_only; int report_progress; int estimated_count; int strategy; int num_heap_tuples; int message_level; int index; } ;
struct TYPE_10__ {scalar_t__ tupcount_pages; scalar_t__ rel_pages; int new_rel_tuples; } ;
typedef int Relation ;
typedef int PGRUsage ;
typedef TYPE_1__ LVRelStats ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef TYPE_3__ IndexBulkDeleteResult ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int ,int ,int,int ,int ,int) ;

__attribute__((used)) static void
FUNC_9(Relation VAR_4,
       IndexBulkDeleteResult *VAR_5,
       LVRelStats *VAR_6)
{
 IndexVacuumInfo VAR_7;
 PGRUsage VAR_8;

 FUNC_6(&VAR_8);

 VAR_7.index = VAR_4;
 VAR_7.analyze_only = 0;
 VAR_7.report_progress = 0;
 VAR_7.estimated_count = (VAR_6->tupcount_pages < VAR_6->rel_pages);
 VAR_7.message_level = VAR_2;






 VAR_7.num_heap_tuples = VAR_6->new_rel_tuples;
 VAR_7.strategy = VAR_3;

 VAR_5 = FUNC_4(&VAR_7, VAR_5);

 if (!VAR_5)
  return;





 if (!VAR_5->estimated_count)
  FUNC_8(VAR_4,
       VAR_5->num_pages,
       VAR_5->num_index_tuples,
       0,
       0,
       VAR_1,
       VAR_0,
       0);

 FUNC_1(VAR_2,
   (FUNC_3("index \"%s\" now contains %.0f row versions in %u pages",
     FUNC_0(VAR_4),
     VAR_5->num_index_tuples,
     VAR_5->num_pages),
    FUNC_2("%.0f index row versions were removed.\n"
        "%u index pages have been deleted, %u are currently reusable.\n"
        "%s.",
        VAR_5->tuples_removed,
        VAR_5->pages_deleted, VAR_5->pages_free,
        FUNC_7(&VAR_8))));

 FUNC_5(VAR_5);
}
