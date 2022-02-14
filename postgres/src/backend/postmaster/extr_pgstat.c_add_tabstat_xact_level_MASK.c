
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* first; } ;
struct TYPE_7__ {TYPE_1__* trans; } ;
struct TYPE_6__ {int nest_level; struct TYPE_6__* next; TYPE_2__* parent; struct TYPE_6__* upper; } ;
typedef TYPE_1__ PgStat_TableXactStatus ;
typedef TYPE_2__ PgStat_TableStatus ;
typedef TYPE_3__ PgStat_SubXactStatus ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(PgStat_TableStatus *VAR_1, int VAR_2)
{
 PgStat_SubXactStatus *VAR_3;
 PgStat_TableXactStatus *VAR_4;





 VAR_3 = FUNC_1(VAR_2);


 VAR_4 = (PgStat_TableXactStatus *)
  FUNC_0(VAR_0,
          sizeof(PgStat_TableXactStatus));
 VAR_4->nest_level = VAR_2;
 VAR_4->upper = VAR_1->trans;
 VAR_4->parent = VAR_1;
 VAR_4->next = VAR_3->first;
 VAR_3->first = VAR_4;
 VAR_1->trans = VAR_4;
}
