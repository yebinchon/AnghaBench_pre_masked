
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_trie_node {scalar_t__ ref_count; struct lwan_trie_node** next; struct lwan_trie_node* key; int data; struct lwan_trie_node* leaf; } ;
struct lwan_trie_leaf {scalar_t__ ref_count; struct lwan_trie_leaf** next; struct lwan_trie_leaf* key; int data; struct lwan_trie_leaf* leaf; } ;
struct lwan_trie {int (* free_node ) (int ) ;} ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (struct lwan_trie_node*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct lwan_trie *VAR_0,
                                   struct lwan_trie_node *VAR_1)
{
    if (!VAR_1)
        return;

    int32_t VAR_2 = VAR_1->ref_count;

    for (struct lwan_trie_leaf *VAR_3 = VAR_1->leaf; VAR_3;) {
        struct lwan_trie_leaf *VAR_4 = *VAR_3->next;

        if (VAR_0->free_node)
            VAR_0->free_node(VAR_3->data);

        FUNC_0(VAR_3->key);
        FUNC_0(VAR_3);
        VAR_3 = VAR_4;
    }

    for (int32_t VAR_5 = 0; VAR_2 > 0 && VAR_5 < 8; VAR_5++) {
        if (VAR_1->next[VAR_5]) {
            FUNC_2(VAR_0, VAR_1->next[VAR_5]);
            --VAR_2;
        }
    }

    FUNC_0(VAR_1);
}
