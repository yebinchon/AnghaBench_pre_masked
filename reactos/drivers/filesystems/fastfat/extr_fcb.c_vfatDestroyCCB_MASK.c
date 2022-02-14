
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int CcbLookasideList; } ;
struct TYPE_6__ {scalar_t__ Buffer; } ;
struct TYPE_7__ {TYPE_1__ SearchPattern; } ;
typedef TYPE_2__* PVFATCCB ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;

VOID
FUNC_2(
    PVFATCCB VAR_2)
{
    if (VAR_2->SearchPattern.Buffer)
    {
        FUNC_0(VAR_2->SearchPattern.Buffer, VAR_0);
    }
    FUNC_1(&VAR_1->CcbLookasideList, VAR_2);
}
