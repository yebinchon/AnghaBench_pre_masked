
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nest_level; int * first; struct TYPE_4__* prev; } ;
typedef TYPE_1__ PgStat_SubXactStatus ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static PgStat_SubXactStatus *
FUNC_1(int VAR_2)
{
 PgStat_SubXactStatus *VAR_3;

 VAR_3 = VAR_1;
 if (VAR_3 == ((void*)0) || VAR_3->nest_level != VAR_2)
 {
  VAR_3 = (PgStat_SubXactStatus *)
   FUNC_0(VAR_0,
          sizeof(PgStat_SubXactStatus));
  VAR_3->nest_level = VAR_2;
  VAR_3->prev = VAR_1;
  VAR_3->first = ((void*)0);
  VAR_1 = VAR_3;
 }
 return VAR_3;
}
