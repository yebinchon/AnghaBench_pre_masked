
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_tree_sub {int used; struct cache_tree* cache_tree; } ;
struct cache_tree {int entry_count; int subtree_nr; TYPE_1__** down; } ;
struct cache_entry {char* name; } ;
struct TYPE_2__ {scalar_t__ used; } ;
typedef scalar_t__ (* CommitCB ) (char const*,int,char const*,struct cache_tree*,struct cache_entry**,int,char const*,int) ;


 struct cache_tree* FUNC_0 () ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (struct cache_tree*) ;
 struct cache_tree_sub* FUNC_3 (struct cache_tree*,char const*,int,int) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0,
                      int VAR_1,
                      const char *VAR_2,
                      struct cache_tree *VAR_3,
                      struct cache_entry **VAR_4,
                      int VAR_5,
                      const char *VAR_6,
                      int VAR_7,
                      int VAR_8,
                      int VAR_9,
                      CommitCB VAR_10)
{
    int VAR_11;

    if (0 <= VAR_3->entry_count)
        return VAR_3->entry_count;






    for (VAR_11 = 0; VAR_11 < VAR_3->subtree_nr; VAR_11++)
        VAR_3->down[VAR_11]->used = 0;




    for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
        struct cache_entry *VAR_12 = VAR_4[VAR_11];
        struct cache_tree_sub *VAR_13;
        const char *VAR_14, *VAR_15;
        int VAR_16, VAR_17, VAR_18;

        VAR_14 = VAR_12->name;
        VAR_16 = FUNC_1(VAR_12);
        if (VAR_16 <= VAR_7 || FUNC_4(VAR_6, VAR_14, VAR_7))
            break;

        VAR_15 = FUNC_6(VAR_14 + VAR_7, '/');
        if (!VAR_15)
            continue;





        VAR_17 = VAR_15 - (VAR_14 + VAR_7);
        VAR_13 = FUNC_3(VAR_3, VAR_14 + VAR_7, VAR_17, 1);
        if (!VAR_13->cache_tree)
            VAR_13->cache_tree = FUNC_0();
        VAR_18 = FUNC_7(VAR_0, VAR_1,
                            VAR_2,
                            VAR_13->cache_tree,
                            VAR_4 + VAR_11, VAR_5 - VAR_11,
                            VAR_14,
                            VAR_7 + VAR_17 + 1,
                            VAR_8,
                            VAR_9,
                            VAR_10);
        if (VAR_18 < 0)
            return VAR_18;
        VAR_11 += VAR_18 - 1;
        VAR_13->used = 1;
    }
    VAR_3->entry_count = VAR_11;

    FUNC_2(VAR_3);

    if (VAR_10 (VAR_0, VAR_1, VAR_2,
                   VAR_3, VAR_4, VAR_5, VAR_6, VAR_7) < 0) {
        FUNC_5 ("save seafile dirent failed");
        return -1;
    }

    return VAR_11;
}
