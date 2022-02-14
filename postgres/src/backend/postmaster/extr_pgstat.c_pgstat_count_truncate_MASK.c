
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nest_level; scalar_t__ tuples_deleted; scalar_t__ tuples_updated; scalar_t__ tuples_inserted; } ;
struct TYPE_7__ {TYPE_3__* trans; } ;
struct TYPE_6__ {TYPE_2__* pgstat_info; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__ PgStat_TableStatus ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*) ;

void
FUNC_3(Relation VAR_0)
{
 PgStat_TableStatus *VAR_1 = VAR_0->pgstat_info;

 if (VAR_1 != ((void*)0))
 {

  int VAR_2 = FUNC_0();

  if (VAR_1->trans == ((void*)0) ||
   VAR_1->trans->nest_level != VAR_2)
   FUNC_1(VAR_1, VAR_2);

  FUNC_2(VAR_1->trans);
  VAR_1->trans->tuples_inserted = 0;
  VAR_1->trans->tuples_updated = 0;
  VAR_1->trans->tuples_deleted = 0;
 }
}
