
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_trie {int root; } ;


 int FUNC_0 (struct lwan_trie*,int ) ;

void FUNC_1(struct lwan_trie *VAR_0)
{
    if (!VAR_0 || !VAR_0->root)
        return;
    FUNC_0(VAR_0, VAR_0->root);
}
