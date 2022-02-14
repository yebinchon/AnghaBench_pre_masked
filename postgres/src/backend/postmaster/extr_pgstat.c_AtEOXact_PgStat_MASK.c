
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int nest_level; TYPE_2__* first; int * prev; } ;
struct TYPE_7__ {scalar_t__ t_delta_dead_tuples; int t_changed_tuples; scalar_t__ t_delta_live_tuples; scalar_t__ t_truncated; int t_tuples_deleted; int t_tuples_updated; int t_tuples_inserted; } ;
struct TYPE_9__ {TYPE_2__* trans; TYPE_1__ t_counts; } ;
struct TYPE_8__ {int nest_level; scalar_t__ tuples_updated; scalar_t__ tuples_inserted; scalar_t__ tuples_deleted; scalar_t__ truncated; TYPE_3__* parent; int * upper; struct TYPE_8__* next; } ;
typedef TYPE_2__ PgStat_TableXactStatus ;
typedef TYPE_3__ PgStat_TableStatus ;
typedef TYPE_4__ PgStat_SubXactStatus ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(bool VAR_3, bool VAR_4)
{
 PgStat_SubXactStatus *VAR_5;


 if (!VAR_4)
 {




  if (VAR_3)
   VAR_0++;
  else
   VAR_1++;
 }






 VAR_5 = VAR_2;
 if (VAR_5 != ((void*)0))
 {
  PgStat_TableXactStatus *VAR_6;

  FUNC_0(VAR_5->nest_level == 1);
  FUNC_0(VAR_5->prev == ((void*)0));
  for (VAR_6 = VAR_5->first; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
  {
   PgStat_TableStatus *VAR_7;

   FUNC_0(VAR_6->nest_level == 1);
   FUNC_0(VAR_6->upper == ((void*)0));
   VAR_7 = VAR_6->parent;
   FUNC_0(VAR_7->trans == VAR_6);

   if (!VAR_3)
    FUNC_2(VAR_6);

   VAR_7->t_counts.t_tuples_inserted += VAR_6->tuples_inserted;
   VAR_7->t_counts.t_tuples_updated += VAR_6->tuples_updated;
   VAR_7->t_counts.t_tuples_deleted += VAR_6->tuples_deleted;
   if (VAR_3)
   {
    VAR_7->t_counts.t_truncated = VAR_6->truncated;
    if (VAR_6->truncated)
    {

     VAR_7->t_counts.t_delta_live_tuples = 0;
     VAR_7->t_counts.t_delta_dead_tuples = 0;
    }

    VAR_7->t_counts.t_delta_live_tuples +=
     VAR_6->tuples_inserted - VAR_6->tuples_deleted;

    VAR_7->t_counts.t_delta_dead_tuples +=
     VAR_6->tuples_updated + VAR_6->tuples_deleted;

    VAR_7->t_counts.t_changed_tuples +=
     VAR_6->tuples_inserted + VAR_6->tuples_updated +
     VAR_6->tuples_deleted;
   }
   else
   {

    VAR_7->t_counts.t_delta_dead_tuples +=
     VAR_6->tuples_inserted + VAR_6->tuples_updated;

   }
   VAR_7->trans = ((void*)0);
  }
 }
 VAR_2 = ((void*)0);


 FUNC_1();
}
