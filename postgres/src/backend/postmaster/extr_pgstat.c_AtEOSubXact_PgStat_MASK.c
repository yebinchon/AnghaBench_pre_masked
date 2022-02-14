
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int t_delta_dead_tuples; int t_tuples_deleted; int t_tuples_updated; int t_tuples_inserted; } ;
struct TYPE_12__ {TYPE_2__* trans; TYPE_1__ t_counts; } ;
struct TYPE_11__ {int nest_level; struct TYPE_11__* upper; scalar_t__ tuples_updated; scalar_t__ tuples_inserted; scalar_t__ tuples_deleted; struct TYPE_11__* first; struct TYPE_11__* next; scalar_t__ truncated; TYPE_3__* parent; struct TYPE_11__* prev; } ;
typedef TYPE_2__ PgStat_TableXactStatus ;
typedef TYPE_3__ PgStat_TableStatus ;
typedef TYPE_2__ PgStat_SubXactStatus ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(bool VAR_1, int VAR_2)
{
 PgStat_SubXactStatus *VAR_3;





 VAR_3 = VAR_0;
 if (VAR_3 != ((void*)0) &&
  VAR_3->nest_level >= VAR_2)
 {
  PgStat_TableXactStatus *VAR_4;
  PgStat_TableXactStatus *VAR_5;


  VAR_0 = VAR_3->prev;

  for (VAR_4 = VAR_3->first; VAR_4 != ((void*)0); VAR_4 = VAR_5)
  {
   PgStat_TableStatus *VAR_6;

   VAR_5 = VAR_4->next;
   FUNC_0(VAR_4->nest_level == VAR_2);
   VAR_6 = VAR_4->parent;
   FUNC_0(VAR_6->trans == VAR_4);
   if (VAR_1)
   {
    if (VAR_4->upper && VAR_4->upper->nest_level == VAR_2 - 1)
    {
     if (VAR_4->truncated)
     {

      FUNC_4(VAR_4->upper);

      VAR_4->upper->tuples_inserted = VAR_4->tuples_inserted;
      VAR_4->upper->tuples_updated = VAR_4->tuples_updated;
      VAR_4->upper->tuples_deleted = VAR_4->tuples_deleted;
     }
     else
     {
      VAR_4->upper->tuples_inserted += VAR_4->tuples_inserted;
      VAR_4->upper->tuples_updated += VAR_4->tuples_updated;
      VAR_4->upper->tuples_deleted += VAR_4->tuples_deleted;
     }
     VAR_6->trans = VAR_4->upper;
     FUNC_2(VAR_4);
    }
    else
    {
     PgStat_SubXactStatus *VAR_7;

     VAR_7 = FUNC_1(VAR_2 - 1);
     VAR_4->next = VAR_7->first;
     VAR_7->first = VAR_4;
     VAR_4->nest_level = VAR_2 - 1;
    }
   }
   else
   {






    FUNC_3(VAR_4);

    VAR_6->t_counts.t_tuples_inserted += VAR_4->tuples_inserted;
    VAR_6->t_counts.t_tuples_updated += VAR_4->tuples_updated;
    VAR_6->t_counts.t_tuples_deleted += VAR_4->tuples_deleted;

    VAR_6->t_counts.t_delta_dead_tuples +=
     VAR_4->tuples_inserted + VAR_4->tuples_updated;
    VAR_6->trans = VAR_4->upper;
    FUNC_2(VAR_4);
   }
  }
  FUNC_2(VAR_3);
 }
}
