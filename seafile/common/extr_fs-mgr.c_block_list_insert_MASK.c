
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_blocks; int block_ids; int block_hash; } ;
typedef TYPE_1__ BlockList ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char const*) ;

void
FUNC_4 (BlockList *VAR_0, const char *VAR_1)
{
    if (FUNC_0 (VAR_0->block_hash, VAR_1))
        return;

    char *VAR_2 = FUNC_3(VAR_1);
    FUNC_1 (VAR_0->block_hash, VAR_2, VAR_2);
    FUNC_2 (VAR_0->block_ids, FUNC_3(VAR_1));
    ++VAR_0->n_blocks;
}
