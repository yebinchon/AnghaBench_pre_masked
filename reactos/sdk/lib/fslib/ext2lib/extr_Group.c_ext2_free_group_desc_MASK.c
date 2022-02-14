
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * group_desc; } ;
typedef TYPE_1__* PEXT2_FILESYS ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 () ;

void FUNC_2(PEXT2_FILESYS VAR_0)
{
    if (VAR_0->group_desc)
    {
        FUNC_0(FUNC_1(), 0, VAR_0->group_desc);
        VAR_0->group_desc = ((void*)0);
    }
}
