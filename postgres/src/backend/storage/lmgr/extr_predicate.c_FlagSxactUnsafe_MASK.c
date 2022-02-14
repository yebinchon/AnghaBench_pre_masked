
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sxactIn; TYPE_1__* sxactOut; int inLink; } ;
struct TYPE_7__ {int possibleUnsafeConflicts; int flags; } ;
typedef TYPE_1__ SERIALIZABLEXACT ;
typedef TYPE_2__* RWConflict ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(SERIALIZABLEXACT *VAR_3)
{
 RWConflict VAR_4,
    VAR_5;

 FUNC_0(FUNC_4(VAR_3));
 FUNC_0(!FUNC_3(VAR_3));

 VAR_3->flags |= VAR_1;





 VAR_4 = (RWConflict)
  FUNC_2(&VAR_3->possibleUnsafeConflicts,
      &VAR_3->possibleUnsafeConflicts,
      FUNC_5(VAR_0, VAR_2));
 while (VAR_4)
 {
  VAR_5 = (RWConflict)
   FUNC_2(&VAR_3->possibleUnsafeConflicts,
       &VAR_4->inLink,
       FUNC_5(VAR_0, VAR_2));

  FUNC_0(!FUNC_4(VAR_4->sxactOut));
  FUNC_0(VAR_3 == VAR_4->sxactIn);

  FUNC_1(VAR_4);

  VAR_4 = VAR_5;
 }
}
