
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * block_map; } ;
typedef TYPE_1__* PEXT2_FILESYS ;
typedef int * PEXT2_BLOCK_BITMAP ;


 int FUNC_0 (int *) ;

void FUNC_1(PEXT2_FILESYS VAR_0)
{
    PEXT2_BLOCK_BITMAP VAR_1 = VAR_0->block_map;
    if (!VAR_1)
        return;

    FUNC_0(VAR_1);

    VAR_0->block_map = ((void*)0);
}
