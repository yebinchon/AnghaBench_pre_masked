
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_11__ {int attbyval; } ;
struct TYPE_10__ {scalar_t__ tdrefcount; int num_defval; int natts; int num_check; struct TYPE_10__* constr; struct TYPE_10__* ccbin; struct TYPE_10__* ccname; struct TYPE_10__* check; int am_value; scalar_t__ am_present; struct TYPE_10__* missing; struct TYPE_10__* adbin; struct TYPE_10__* defval; } ;
typedef TYPE_1__ ConstrCheck ;
typedef TYPE_1__ AttrMissing ;
typedef TYPE_1__ AttrDefault ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(TupleDesc VAR_0)
{
 int VAR_1;





 FUNC_0(VAR_0->tdrefcount <= 0);

 if (VAR_0->constr)
 {
  if (VAR_0->constr->num_defval > 0)
  {
   AttrDefault *VAR_2 = VAR_0->constr->defval;

   for (VAR_1 = VAR_0->constr->num_defval - 1; VAR_1 >= 0; VAR_1--)
   {
    if (VAR_2[VAR_1].adbin)
     FUNC_3(VAR_2[VAR_1].adbin);
   }
   FUNC_3(VAR_2);
  }
  if (VAR_0->constr->missing)
  {
   AttrMissing *VAR_3 = VAR_0->constr->missing;

   for (VAR_1 = VAR_0->natts - 1; VAR_1 >= 0; VAR_1--)
   {
    if (VAR_3[VAR_1].am_present
     && !FUNC_2(VAR_0, VAR_1)->attbyval)
     FUNC_3(FUNC_1(VAR_3[VAR_1].am_value));
   }
   FUNC_3(VAR_3);
  }
  if (VAR_0->constr->num_check > 0)
  {
   ConstrCheck *VAR_4 = VAR_0->constr->check;

   for (VAR_1 = VAR_0->constr->num_check - 1; VAR_1 >= 0; VAR_1--)
   {
    if (VAR_4[VAR_1].ccname)
     FUNC_3(VAR_4[VAR_1].ccname);
    if (VAR_4[VAR_1].ccbin)
     FUNC_3(VAR_4[VAR_1].ccbin);
   }
   FUNC_3(VAR_4);
  }
  FUNC_3(VAR_0->constr);
 }

 FUNC_3(VAR_0);
}
