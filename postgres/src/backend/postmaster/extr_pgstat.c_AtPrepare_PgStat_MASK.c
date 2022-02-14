
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int t_truncated; int t_shared; int t_id; int deleted_pre_trunc; int updated_pre_trunc; int inserted_pre_trunc; int tuples_deleted; int tuples_updated; int tuples_inserted; } ;
typedef TYPE_1__ TwoPhasePgStatRecord ;
struct TYPE_10__ {int nest_level; TYPE_2__* first; int * prev; } ;
struct TYPE_9__ {int t_shared; int t_id; TYPE_2__* trans; } ;
struct TYPE_8__ {int nest_level; int truncated; int deleted_pre_trunc; int updated_pre_trunc; int inserted_pre_trunc; int tuples_deleted; int tuples_updated; int tuples_inserted; TYPE_3__* parent; int * upper; struct TYPE_8__* next; } ;
typedef TYPE_2__ PgStat_TableXactStatus ;
typedef TYPE_3__ PgStat_TableStatus ;
typedef TYPE_4__ PgStat_SubXactStatus ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;

void
FUNC_2(void)
{
 PgStat_SubXactStatus *VAR_2;

 VAR_2 = VAR_1;
 if (VAR_2 != ((void*)0))
 {
  PgStat_TableXactStatus *VAR_3;

  FUNC_0(VAR_2->nest_level == 1);
  FUNC_0(VAR_2->prev == ((void*)0));
  for (VAR_3 = VAR_2->first; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  {
   PgStat_TableStatus *VAR_4;
   TwoPhasePgStatRecord VAR_5;

   FUNC_0(VAR_3->nest_level == 1);
   FUNC_0(VAR_3->upper == ((void*)0));
   VAR_4 = VAR_3->parent;
   FUNC_0(VAR_4->trans == VAR_3);

   VAR_5.tuples_inserted = VAR_3->tuples_inserted;
   VAR_5.tuples_updated = VAR_3->tuples_updated;
   VAR_5.tuples_deleted = VAR_3->tuples_deleted;
   VAR_5.inserted_pre_trunc = VAR_3->inserted_pre_trunc;
   VAR_5.updated_pre_trunc = VAR_3->updated_pre_trunc;
   VAR_5.deleted_pre_trunc = VAR_3->deleted_pre_trunc;
   VAR_5.t_id = VAR_4->t_id;
   VAR_5.t_shared = VAR_4->t_shared;
   VAR_5.t_truncated = VAR_3->truncated;

   FUNC_1(VAR_0, 0,
           &VAR_5, sizeof(TwoPhasePgStatRecord));
  }
 }
}
