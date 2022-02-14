
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int block_ids; scalar_t__ block_hash; } ;
typedef TYPE_1__ BlockList ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3 (BlockList *VAR_1)
{
    if (VAR_1->block_hash)
        FUNC_1 (VAR_1->block_hash);
    FUNC_2 (VAR_1->block_ids, VAR_0);
    FUNC_0 (VAR_1);
}
