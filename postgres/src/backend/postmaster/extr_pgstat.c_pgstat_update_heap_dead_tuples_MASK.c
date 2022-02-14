
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_delta_dead_tuples; } ;
struct TYPE_7__ {TYPE_1__ t_counts; } ;
struct TYPE_6__ {TYPE_3__* pgstat_info; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ PgStat_TableStatus ;



void
FUNC_0(Relation VAR_0, int VAR_1)
{
 PgStat_TableStatus *VAR_2 = VAR_0->pgstat_info;

 if (VAR_2 != ((void*)0))
  VAR_2->t_counts.t_delta_dead_tuples -= VAR_1;
}
