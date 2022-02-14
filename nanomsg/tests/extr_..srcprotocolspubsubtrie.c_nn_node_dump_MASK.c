
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int min; int max; scalar_t__ nbr; } ;
struct TYPE_4__ {int * children; } ;
struct TYPE_6__ {TYPE_2__ dense; TYPE_1__ sparse; } ;
struct nn_trie_node {int prefix_len; int type; TYPE_3__ u; int * prefix; scalar_t__ refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

void FUNC_3 (struct nn_trie_node *VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4;

    if (!VAR_1) {
        FUNC_0 (VAR_2);
        FUNC_2 ("NULL\n");
        return;
    }

    FUNC_0 (VAR_2);
    FUNC_2 ("===================\n");
    FUNC_0 (VAR_2);
    FUNC_2 ("refcount=%d\n", (int) VAR_1->refcount);
    FUNC_0 (VAR_2);
    FUNC_2 ("prefix_len=%d\n", (int) VAR_1->prefix_len);
    FUNC_0 (VAR_2);
    if (VAR_1->type == VAR_0)
        FUNC_2 ("type=dense\n");
    else
        FUNC_2 ("type=sparse\n");
    FUNC_0 (VAR_2);
    FUNC_2 ("prefix=\"");
    for (VAR_3 = 0; VAR_3 != VAR_1->prefix_len; ++VAR_3)
        FUNC_1 (VAR_1->prefix [VAR_3]);
    FUNC_2 ("\"\n");
    if (VAR_1->type <= 8) {
        FUNC_0 (VAR_2);
        FUNC_2 ("sparse.children=\"");
        for (VAR_3 = 0; VAR_3 != VAR_1->type; ++VAR_3)
            FUNC_1 (VAR_1->u.sparse.children [VAR_3]);
        FUNC_2 ("\"\n");
        VAR_4 = VAR_1->type;
    }
    else {
        FUNC_0 (VAR_2);
        FUNC_2 ("dense.min='%c' (%d)\n", (char) VAR_1->u.dense.min,
            (int) VAR_1->u.dense.min);
        FUNC_0 (VAR_2);
        FUNC_2 ("dense.max='%c' (%d)\n", (char) VAR_1->u.dense.max,
            (int) VAR_1->u.dense.max);
        FUNC_0 (VAR_2);
        FUNC_2 ("dense.nbr=%d\n", (int) VAR_1->u.dense.nbr);
        VAR_4 = VAR_1->u.dense.max - VAR_1->u.dense.min + 1;
    }

    for (VAR_3 = 0; VAR_3 != VAR_4; ++VAR_3)
        FUNC_3 (((struct nn_trie_node**) (VAR_1 + 1)) [VAR_3], VAR_2 + 1);

    FUNC_0 (VAR_2);
    FUNC_2 ("===================\n");
}
