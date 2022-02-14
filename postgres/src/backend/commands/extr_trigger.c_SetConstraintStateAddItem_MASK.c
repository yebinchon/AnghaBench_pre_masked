
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numstates; int numalloc; TYPE_1__* trigstates; } ;
struct TYPE_6__ {int sct_tgisdeferred; int sct_tgoid; } ;
typedef int SetConstraintTriggerData ;
typedef TYPE_2__* SetConstraintState ;
typedef int Oid ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static SetConstraintState
FUNC_4(SetConstraintState VAR_2,
        Oid VAR_3, bool VAR_4)
{
 if (VAR_2->numstates >= VAR_2->numalloc)
 {
  int VAR_5 = VAR_2->numalloc * 2;

  VAR_5 = FUNC_1(VAR_5, 8);
  VAR_2 = (SetConstraintState)
   FUNC_3(VAR_2,
      FUNC_2(VAR_0, VAR_1) +
      VAR_5 * sizeof(SetConstraintTriggerData));
  VAR_2->numalloc = VAR_5;
  FUNC_0(VAR_2->numstates < VAR_2->numalloc);
 }

 VAR_2->trigstates[VAR_2->numstates].sct_tgoid = VAR_3;
 VAR_2->trigstates[VAR_2->numstates].sct_tgisdeferred = VAR_4;
 VAR_2->numstates++;

 return VAR_2;
}
