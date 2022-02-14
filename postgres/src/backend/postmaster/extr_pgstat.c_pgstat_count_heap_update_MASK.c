
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int t_tuples_hot_updated; } ;
struct TYPE_10__ {TYPE_2__ t_counts; TYPE_1__* trans; } ;
struct TYPE_9__ {TYPE_4__* pgstat_info; } ;
struct TYPE_7__ {int nest_level; int tuples_updated; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__ PgStat_TableStatus ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*,int) ;

void
FUNC_2(Relation VAR_0, bool VAR_1)
{
 PgStat_TableStatus *VAR_2 = VAR_0->pgstat_info;

 if (VAR_2 != ((void*)0))
 {

  int VAR_3 = FUNC_0();

  if (VAR_2->trans == ((void*)0) ||
   VAR_2->trans->nest_level != VAR_3)
   FUNC_1(VAR_2, VAR_3);

  VAR_2->trans->tuples_updated++;


  if (VAR_1)
   VAR_2->t_counts.t_tuples_hot_updated++;
 }
}
