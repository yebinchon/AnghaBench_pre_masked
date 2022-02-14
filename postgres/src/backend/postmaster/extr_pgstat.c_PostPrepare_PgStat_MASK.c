
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* first; } ;
struct TYPE_6__ {int * trans; } ;
struct TYPE_5__ {TYPE_2__* parent; struct TYPE_5__* next; } ;
typedef TYPE_1__ PgStat_TableXactStatus ;
typedef TYPE_2__ PgStat_TableStatus ;
typedef TYPE_3__ PgStat_SubXactStatus ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;

void
FUNC_1(void)
{
 PgStat_SubXactStatus *VAR_1;





 VAR_1 = VAR_0;
 if (VAR_1 != ((void*)0))
 {
  PgStat_TableXactStatus *VAR_2;

  for (VAR_2 = VAR_1->first; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
  {
   PgStat_TableStatus *VAR_3;

   VAR_3 = VAR_2->parent;
   VAR_3->trans = ((void*)0);
  }
 }
 VAR_0 = ((void*)0);


 FUNC_0();
}
