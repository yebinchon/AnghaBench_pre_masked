
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_4__ {size_t block_cnt; int mark; scalar_t__ offset; scalar_t__ last_block; int * blocks; int custom_blocks; } ;
typedef TYPE_1__ heap_pool_t ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct list*) ;
 struct list* FUNC_3 (int *) ;
 int FUNC_4 (struct list*) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(heap_pool_t *VAR_2)
{
    struct list *VAR_3;

    if(!VAR_2)
        return;

    while((VAR_3 = FUNC_3(&VAR_2->custom_blocks))) {
        FUNC_4(VAR_3);
        FUNC_2(VAR_3);
    }

    if(FUNC_0(VAR_2)) {
        DWORD VAR_4;

        for(VAR_4=0; VAR_4 < VAR_2->block_cnt; VAR_4++)
            FUNC_5(VAR_2->blocks[VAR_4], VAR_0, FUNC_1(VAR_4));
    }

    VAR_2->last_block = VAR_2->offset = 0;
    VAR_2->mark = VAR_1;
}
