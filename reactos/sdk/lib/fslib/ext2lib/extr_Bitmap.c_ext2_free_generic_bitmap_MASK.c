
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* bitmap; } ;
typedef TYPE_1__* PEXT2_GENERIC_BITMAP ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 () ;

void FUNC_2(PEXT2_GENERIC_BITMAP VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->bitmap)
    {
        FUNC_0(FUNC_1(), 0, VAR_0->bitmap);
        VAR_0->bitmap = 0;
    }

    FUNC_0(FUNC_1(), 0, VAR_0);
}
