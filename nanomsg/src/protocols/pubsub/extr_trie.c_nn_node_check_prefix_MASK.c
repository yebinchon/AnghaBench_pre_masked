
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct nn_trie_node {int prefix_len; scalar_t__ const* prefix; } ;



int FUNC_0 (struct nn_trie_node *VAR_0,
    const uint8_t *VAR_1, size_t VAR_2)
{


    int VAR_3;

    for (VAR_3 = 0; VAR_3 != VAR_0->prefix_len; ++VAR_3) {
        if (!VAR_2 || VAR_0->prefix [VAR_3] != *VAR_1)
            return VAR_3;
        ++VAR_1;
        --VAR_2;
    }
    return VAR_0->prefix_len;
}
