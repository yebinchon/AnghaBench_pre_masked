
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * children; } ;
struct TYPE_4__ {TYPE_1__ sparse; } ;
struct nn_trie_node {int type; scalar_t__ prefix_len; TYPE_2__ u; int * prefix; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct nn_trie_node*) ;
 struct nn_trie_node** FUNC_3 (struct nn_trie_node*,int ) ;
 scalar_t__ FUNC_4 (struct nn_trie_node*) ;

struct nn_trie_node *FUNC_5 (struct nn_trie_node *VAR_1)
{



    struct nn_trie_node *VAR_2;


    if (FUNC_4 (VAR_1))
        return VAR_1;


    if (VAR_1->type != 1)
        return VAR_1;


    VAR_2 = *FUNC_3 (VAR_1, 0);
    if (VAR_1->prefix_len + VAR_2->prefix_len + 1 > VAR_0)
        return VAR_1;


    FUNC_1 (VAR_2->prefix + VAR_1->prefix_len + 1, VAR_2->prefix, VAR_2->prefix_len);
    FUNC_0 (VAR_2->prefix, VAR_1->prefix, VAR_1->prefix_len);
    VAR_2->prefix [VAR_1->prefix_len] = VAR_1->u.sparse.children [0];
    VAR_2->prefix_len += VAR_1->prefix_len + 1;


    FUNC_2 (VAR_1);


    return VAR_2;
}
