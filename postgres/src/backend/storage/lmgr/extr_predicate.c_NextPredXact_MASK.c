
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int activeList; } ;
struct TYPE_3__ {int sxact; int link; } ;
typedef int SERIALIZABLEXACT ;
typedef TYPE_1__* PredXactListElement ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 char* FUNC_3 (int ,int *) ;

__attribute__((used)) static SERIALIZABLEXACT *
FUNC_4(SERIALIZABLEXACT *VAR_3)
{
 PredXactListElement VAR_4;

 FUNC_0(FUNC_2(VAR_3));

 VAR_4 = (PredXactListElement)
  (((char *) VAR_3)
   - FUNC_3(VAR_1, VAR_3)
   + FUNC_3(VAR_1, VAR_2));
 VAR_4 = (PredXactListElement)
  FUNC_1(&VAR_0->activeList,
      &VAR_4->link,
      FUNC_3(VAR_1, VAR_2));
 if (!VAR_4)
  return ((void*)0);

 return &VAR_4->sxact;
}
