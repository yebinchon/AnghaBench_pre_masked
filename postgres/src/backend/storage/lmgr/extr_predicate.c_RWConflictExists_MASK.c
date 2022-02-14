
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int outLink; TYPE_1__ const* sxactIn; } ;
struct TYPE_6__ {int outConflicts; int inConflicts; } ;
typedef TYPE_1__ SERIALIZABLEXACT ;
typedef TYPE_2__* RWConflict ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_5(const SERIALIZABLEXACT *VAR_2, const SERIALIZABLEXACT *VAR_3)
{
 RWConflict VAR_4;

 FUNC_0(VAR_2 != VAR_3);


 if (FUNC_3(VAR_2)
  || FUNC_3(VAR_3)
  || FUNC_1(&VAR_2->outConflicts)
  || FUNC_1(&VAR_3->inConflicts))
  return 0;


 VAR_4 = (RWConflict)
  FUNC_2(&VAR_2->outConflicts,
      &VAR_2->outConflicts,
      FUNC_4(VAR_0, VAR_1));
 while (VAR_4)
 {
  if (VAR_4->sxactIn == VAR_3)
   return 1;
  VAR_4 = (RWConflict)
   FUNC_2(&VAR_2->outConflicts,
       &VAR_4->outLink,
       FUNC_4(VAR_0, VAR_1));
 }


 return 0;
}
