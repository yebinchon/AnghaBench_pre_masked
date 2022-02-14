
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int activeList; } ;
struct TYPE_3__ {int sxact; } ;
typedef int SERIALIZABLEXACT ;
typedef TYPE_1__* PredXactListElement ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static SERIALIZABLEXACT *
FUNC_2(void)
{
 PredXactListElement VAR_3;

 VAR_3 = (PredXactListElement)
  FUNC_0(&VAR_0->activeList,
      &VAR_0->activeList,
      FUNC_1(VAR_1, VAR_2));
 if (!VAR_3)
  return ((void*)0);

 return &VAR_3->sxact;
}
