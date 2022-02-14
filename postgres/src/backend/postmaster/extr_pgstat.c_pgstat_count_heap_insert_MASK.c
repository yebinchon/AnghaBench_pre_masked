
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* trans; } ;
struct TYPE_7__ {TYPE_3__* pgstat_info; } ;
struct TYPE_6__ {int nest_level; int tuples_inserted; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ PgStat_TableStatus ;
typedef scalar_t__ PgStat_Counter ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int) ;

void
FUNC_2(Relation VAR_0, PgStat_Counter VAR_1)
{
 PgStat_TableStatus *VAR_2 = VAR_0->pgstat_info;

 if (VAR_2 != ((void*)0))
 {

  int VAR_3 = FUNC_0();

  if (VAR_2->trans == ((void*)0) ||
   VAR_2->trans->nest_level != VAR_3)
   FUNC_1(VAR_2, VAR_3);

  VAR_2->trans->tuples_inserted += VAR_1;
 }
}
