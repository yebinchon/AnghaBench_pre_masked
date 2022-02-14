
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; int min; } ;
struct TYPE_4__ {TYPE_1__ dense; } ;
struct nn_trie_node {int type; TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_trie_node*) ;
 struct nn_trie_node** FUNC_1 (struct nn_trie_node*,int) ;

void FUNC_2 (struct nn_trie_node *VAR_1)
{
    int VAR_2;
    int VAR_3;


    if (!VAR_1)
        return;


    VAR_2 = VAR_1->type <= VAR_0 ?
        VAR_1->type : (VAR_1->u.dense.max - VAR_1->u.dense.min + 1);
    for (VAR_3 = 0; VAR_3 != VAR_2; ++VAR_3)
        FUNC_2 (*FUNC_1 (VAR_1, VAR_3));


    FUNC_0 (VAR_1);
}
