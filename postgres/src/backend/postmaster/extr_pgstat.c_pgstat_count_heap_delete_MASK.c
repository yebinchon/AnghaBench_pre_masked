
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* trans; } ;
struct TYPE_7__ {TYPE_3__* pgstat_info; } ;
struct TYPE_6__ {int nest_level; int tuples_deleted; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ PgStat_TableStatus ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int) ;

void
FUNC_2(Relation VAR_0)
{
 PgStat_TableStatus *VAR_1 = VAR_0->pgstat_info;

 if (VAR_1 != ((void*)0))
 {

  int VAR_2 = FUNC_0();

  if (VAR_1->trans == ((void*)0) ||
   VAR_1->trans->nest_level != VAR_2)
   FUNC_1(VAR_1, VAR_2);

  VAR_1->trans->tuples_deleted++;
 }
}
