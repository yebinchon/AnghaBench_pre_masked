
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {TYPE_3__* szUrl; TYPE_3__* szID; } ;
struct TYPE_7__ {TYPE_1__ Link; } ;
struct TYPE_8__ {scalar_t__ Type; struct TYPE_8__* Blocks; TYPE_2__ u; } ;
typedef TYPE_3__* PDOC_ITEM ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static VOID FUNC_1 (PDOC_ITEM VAR_1)
{
    if(VAR_1->Type == VAR_0)
    {
        FUNC_0(VAR_1->u.Link.szID);
        FUNC_0(VAR_1->u.Link.szUrl);
    }

    FUNC_0(VAR_1->Blocks);




    FUNC_0(VAR_1);
}
