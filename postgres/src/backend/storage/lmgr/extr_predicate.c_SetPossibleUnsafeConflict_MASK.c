
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int availableList; } ;
struct TYPE_8__ {int inLink; int outLink; TYPE_1__* sxactIn; TYPE_1__* sxactOut; } ;
struct TYPE_7__ {int possibleUnsafeConflicts; } ;
typedef TYPE_1__ SERIALIZABLEXACT ;
typedef TYPE_2__* RWConflict ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_10(SERIALIZABLEXACT *VAR_5,
        SERIALIZABLEXACT *VAR_6)
{
 RWConflict VAR_7;

 FUNC_0(VAR_5 != VAR_6);
 FUNC_0(FUNC_4(VAR_5));
 FUNC_0(!FUNC_4(VAR_6));

 VAR_7 = (RWConflict)
  FUNC_3(&VAR_3->availableList,
      &VAR_3->availableList,
      FUNC_9(VAR_2, VAR_4));
 if (!VAR_7)
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_8("not enough elements in RWConflictPool to record a potential read/write conflict"),
     FUNC_7("You might need to run fewer transactions at a time or increase max_connections.")));

 FUNC_1(&VAR_7->outLink);

 VAR_7->sxactOut = VAR_6;
 VAR_7->sxactIn = VAR_5;
 FUNC_2(&VAR_6->possibleUnsafeConflicts,
       &VAR_7->outLink);
 FUNC_2(&VAR_5->possibleUnsafeConflicts,
       &VAR_7->inLink);
}
