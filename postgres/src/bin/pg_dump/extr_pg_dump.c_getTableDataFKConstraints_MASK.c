
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* dataObj; } ;
typedef TYPE_5__ TableInfo ;
struct TYPE_17__ {TYPE_2__* contable; int confrelid; } ;
struct TYPE_16__ {scalar_t__ objType; } ;
struct TYPE_13__ {int dumpId; } ;
struct TYPE_14__ {TYPE_3__ dobj; } ;
struct TYPE_12__ {TYPE_1__* dataObj; } ;
struct TYPE_11__ {int dobj; } ;
typedef TYPE_6__ DumpableObject ;
typedef TYPE_7__ ConstraintInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__**) ;
 int FUNC_3 (TYPE_6__***,int*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 DumpableObject **VAR_1;
 int VAR_2;
 int VAR_3;


 FUNC_3(&VAR_1, &VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  if (VAR_1[VAR_3]->objType == VAR_0)
  {
   ConstraintInfo *VAR_4 = (ConstraintInfo *) VAR_1[VAR_3];
   TableInfo *VAR_5;


   if (VAR_4->contable == ((void*)0) ||
    VAR_4->contable->dataObj == ((void*)0))
    continue;
   VAR_5 = FUNC_1(VAR_4->confrelid);
   if (VAR_5 == ((void*)0) ||
    VAR_5->dataObj == ((void*)0))
    continue;





   FUNC_0(&VAR_4->contable->dataObj->dobj,
        VAR_5->dataObj->dobj.dumpId);
  }
 }
 FUNC_2(VAR_1);
}
