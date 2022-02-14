
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fanout; int depth; int personal; int salt; scalar_t__ inner_length; scalar_t__ node_depth; int node_offset; int leaf_length; scalar_t__ key_length; int digest_length; } ;
typedef TYPE_1__ BLAKE2S_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(BLAKE2S_PARAM *VAR_1)
{
    VAR_1->digest_length = VAR_0;
    VAR_1->key_length = 0;
    VAR_1->fanout = 1;
    VAR_1->depth = 1;
    FUNC_1(VAR_1->leaf_length, 0);
    FUNC_2(VAR_1->node_offset, 0);
    VAR_1->node_depth = 0;
    VAR_1->inner_length = 0;
    FUNC_0(VAR_1->salt, 0, sizeof(VAR_1->salt));
    FUNC_0(VAR_1->personal, 0, sizeof(VAR_1->personal));
}
