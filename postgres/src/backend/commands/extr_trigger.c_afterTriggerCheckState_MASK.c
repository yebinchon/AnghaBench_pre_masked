
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* state; } ;
struct TYPE_8__ {scalar_t__ ats_tgoid; int ats_event; } ;
struct TYPE_7__ {int numstates; int all_isdeferred; scalar_t__ all_isset; TYPE_1__* trigstates; } ;
struct TYPE_6__ {scalar_t__ sct_tgoid; int sct_tgisdeferred; } ;
typedef TYPE_2__* SetConstraintState ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* AfterTriggerShared ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static bool
FUNC_0(AfterTriggerShared VAR_3)
{
 Oid VAR_4 = VAR_3->ats_tgoid;
 SetConstraintState VAR_5 = VAR_2.state;
 int VAR_6;





 if ((VAR_3->ats_event & VAR_0) == 0)
  return 0;





 if (VAR_5 != ((void*)0))
 {

  for (VAR_6 = 0; VAR_6 < VAR_5->numstates; VAR_6++)
  {
   if (VAR_5->trigstates[VAR_6].sct_tgoid == VAR_4)
    return VAR_5->trigstates[VAR_6].sct_tgisdeferred;
  }


  if (VAR_5->all_isset)
   return VAR_5->all_isdeferred;
 }




 return ((VAR_3->ats_event & VAR_1) != 0);
}
