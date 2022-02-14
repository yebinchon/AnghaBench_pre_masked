
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_3__ {int ItemValue; } ;
typedef TYPE_1__* PINI_SECTION_ITEM ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

ULONG FUNC_2(ULONG_PTR VAR_0, ULONG VAR_1)
{
    PINI_SECTION_ITEM VAR_2;


    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (!VAR_2)
        return 0;


    return (ULONG)(FUNC_1(VAR_2->ItemValue) + 1);
}
