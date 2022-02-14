
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_trie_node {scalar_t__ refcount; } ;



int FUNC_0 (struct nn_trie_node *VAR_0)
{

    return VAR_0->refcount ? 1 : 0;
}
