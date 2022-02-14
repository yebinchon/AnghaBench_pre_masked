
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int len; } ;
struct TYPE_8__ {int n_blocks; TYPE_2__* block_ids; int block_hash; } ;
typedef TYPE_1__ BlockList ;


 TYPE_1__* FUNC_0 () ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 char* FUNC_4 (TYPE_2__*,int) ;
 char* FUNC_5 (char*) ;

BlockList *
FUNC_6 (BlockList *VAR_0, BlockList *VAR_1)
{
    BlockList *VAR_2;
    int VAR_3;
    char *VAR_4;
    char *VAR_5;

    VAR_2 = FUNC_0 ();

    for (VAR_3 = 0; VAR_3 < VAR_0->block_ids->len; ++VAR_3) {
        VAR_4 = FUNC_4 (VAR_0->block_ids, VAR_3);
        if (FUNC_1 (VAR_1->block_hash, VAR_4) == ((void*)0)) {
            VAR_5 = FUNC_5(VAR_4);
            FUNC_2 (VAR_2->block_hash, VAR_5, VAR_5);
            FUNC_3 (VAR_2->block_ids, FUNC_5(VAR_4));
            ++VAR_2->n_blocks;
        }
    }

    return VAR_2;
}
