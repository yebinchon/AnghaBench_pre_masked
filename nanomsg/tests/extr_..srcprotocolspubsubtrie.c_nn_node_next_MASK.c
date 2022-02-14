
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {scalar_t__ min; scalar_t__ max; } ;
struct TYPE_4__ {scalar_t__* children; } ;
struct TYPE_6__ {TYPE_2__ dense; TYPE_1__ sparse; } ;
struct nn_trie_node {int type; TYPE_3__ u; } ;


 struct nn_trie_node** FUNC_0 (struct nn_trie_node*,scalar_t__) ;

struct nn_trie_node **FUNC_1 (struct nn_trie_node *VAR_0, uint8_t VAR_1)
{



    int VAR_2;

    if (VAR_0->type == 0)
        return ((void*)0);


    if (VAR_0->type <= 8) {
        for (VAR_2 = 0; VAR_2 != VAR_0->type; ++VAR_2)
            if (VAR_0->u.sparse.children [VAR_2] == VAR_1)
                return FUNC_0 (VAR_0, VAR_2);
        return ((void*)0);
    }


    if (VAR_1 < VAR_0->u.dense.min || VAR_1 > VAR_0->u.dense.max)
        return ((void*)0);
    return FUNC_0 (VAR_0, VAR_1 - VAR_0->u.dense.min);
}
