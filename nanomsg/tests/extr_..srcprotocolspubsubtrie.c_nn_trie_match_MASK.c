
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nn_trie_node {scalar_t__ prefix_len; } ;
struct nn_trie {struct nn_trie_node* root; } ;


 scalar_t__ FUNC_0 (struct nn_trie_node*,int const*,size_t) ;
 scalar_t__ FUNC_1 (struct nn_trie_node*) ;
 struct nn_trie_node** FUNC_2 (struct nn_trie_node*,int const) ;

int FUNC_3 (struct nn_trie *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
    struct nn_trie_node *VAR_3;
    struct nn_trie_node **VAR_4;

    VAR_3 = VAR_0->root;
    while (1) {


        if (!VAR_3)
            return 0;



        if (FUNC_0 (VAR_3, VAR_1, VAR_2) != VAR_3->prefix_len)
            return 0;


        VAR_1 += VAR_3->prefix_len;
        VAR_2 -= VAR_3->prefix_len;


        if (FUNC_1 (VAR_3))
            return 1;


        VAR_4 = FUNC_2 (VAR_3, *VAR_1);
        VAR_3 = VAR_4 ? *VAR_4 : ((void*)0);
        ++VAR_1;
        --VAR_2;
    }
}
