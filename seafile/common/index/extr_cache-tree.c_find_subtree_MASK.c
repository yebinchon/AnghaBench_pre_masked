
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_tree_sub {int namelen; scalar_t__* name; int * cache_tree; } ;
struct cache_tree {int subtree_alloc; int subtree_nr; struct cache_tree_sub** down; } ;
typedef int down ;


 int FUNC_0 (int) ;
 struct cache_tree_sub* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,char const*,int) ;
 int FUNC_3 (struct cache_tree_sub**,struct cache_tree_sub**,int) ;
 struct cache_tree_sub** FUNC_4 (struct cache_tree_sub**,int) ;
 int FUNC_5 (struct cache_tree*,char const*,int) ;

__attribute__((used)) static struct cache_tree_sub *FUNC_6(struct cache_tree *VAR_0,
                                           const char *VAR_1,
                                           int VAR_2,
                                           int VAR_3)
{
    struct cache_tree_sub *VAR_4;
    int VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2);
    if (0 <= VAR_5)
        return VAR_0->down[VAR_5];
    if (!VAR_3)
        return ((void*)0);

    VAR_5 = -VAR_5-1;
    if (VAR_0->subtree_alloc <= VAR_0->subtree_nr) {
        VAR_0->subtree_alloc = FUNC_0(VAR_0->subtree_alloc);
        VAR_0->down = FUNC_4(VAR_0->down, VAR_0->subtree_alloc *
                           sizeof(*VAR_0->down));
    }
    VAR_0->subtree_nr++;

    VAR_4 = FUNC_1(sizeof(*VAR_4) + VAR_2 + 1);
    VAR_4->cache_tree = ((void*)0);
    VAR_4->namelen = VAR_2;
    FUNC_2(VAR_4->name, VAR_1, VAR_2);
    VAR_4->name[VAR_2] = 0;

    if (VAR_5 < VAR_0->subtree_nr)
        FUNC_3(VAR_0->down + VAR_5 + 1,
                VAR_0->down + VAR_5,
                sizeof(VAR_4) * (VAR_0->subtree_nr - VAR_5 - 1));
    VAR_0->down[VAR_5] = VAR_4;
    return VAR_4;
}
