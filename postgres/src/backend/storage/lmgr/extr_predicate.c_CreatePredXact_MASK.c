
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int activeList; int availableList; } ;
struct TYPE_3__ {int sxact; int link; } ;
typedef int SERIALIZABLEXACT ;
typedef TYPE_1__* PredXactListElement ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static SERIALIZABLEXACT *
FUNC_4(void)
{
 PredXactListElement VAR_3;

 VAR_3 = (PredXactListElement)
  FUNC_2(&VAR_0->availableList,
      &VAR_0->availableList,
      FUNC_3(VAR_1, VAR_2));
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->link);
 FUNC_1(&VAR_0->activeList, &VAR_3->link);
 return &VAR_3->sxact;
}
