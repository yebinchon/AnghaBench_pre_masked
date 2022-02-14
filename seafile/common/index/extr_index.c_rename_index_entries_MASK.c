
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_alloc; int cache_nr; int cache_changed; scalar_t__ cache; } ;
struct cache_entry {int dummy; } ;
typedef int gboolean ;
typedef int CECallback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct index_state*,struct cache_entry*) ;
 int FUNC_1 (struct cache_entry*) ;
 struct cache_entry** FUNC_2 (struct index_state*,char const*,char const*,int*,int ,void*) ;
 int FUNC_3 (struct cache_entry**) ;
 int FUNC_4 (struct index_state*,char const*,int) ;
 int FUNC_5 (scalar_t__,struct cache_entry**,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct index_state*,char const*) ;
 int FUNC_8 (struct index_state*,char const*,int *) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char const*) ;

int
FUNC_11 (struct index_state *VAR_2,
                      const char *VAR_3,
                      const char *VAR_4,
                      gboolean *VAR_5,
                      CECallback VAR_6,
                      void *VAR_7)
{
    struct cache_entry **VAR_8;
    int VAR_9;
    int VAR_10 = 0;
    int VAR_11;

    if (VAR_5)
        *VAR_5 = VAR_0;

    VAR_8 = FUNC_2 (VAR_2, VAR_3, VAR_4, &VAR_9,
                                            VAR_6, VAR_7);
    if (VAR_9 == 0) {
        if (VAR_5)
            *VAR_5 = VAR_1;
        return 0;
    }




    FUNC_8 (VAR_2, VAR_4, ((void*)0));

    FUNC_7 (VAR_2, VAR_4);


    int VAR_12 = FUNC_10(VAR_4);
    int VAR_13 = FUNC_4 (VAR_2, VAR_4, VAR_12);
    if (VAR_13 >= 0) {
        FUNC_9 ("BUG: %s should not exist in index after remove.\n", VAR_4);
        VAR_10 = -1;
        goto out;
    }

    VAR_13 = -VAR_13-1;





    if (VAR_2->cache_alloc - VAR_2->cache_nr < VAR_9) {
        FUNC_9 ("BUG: not enough room to insert renamed entries.\n"
                   "cache_alloc: %u, cache_nr: %u, n_entries: %d.\n",
                   VAR_2->cache_alloc, VAR_2->cache_nr, VAR_9);
        VAR_10 = -1;
        goto out;
    }

    if (VAR_13 < VAR_2->cache_nr)
        FUNC_6 (VAR_2->cache + VAR_13 + VAR_9,
                 VAR_2->cache + VAR_13,
                 (VAR_2->cache_nr - VAR_13) * sizeof(struct cache_entry *));

    FUNC_5 (VAR_2->cache + VAR_13, VAR_8, VAR_9 * sizeof(struct cache_entry *));
    for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11)
        FUNC_0 (VAR_2, VAR_8[VAR_11]);
    VAR_2->cache_nr += VAR_9;
    VAR_2->cache_changed = 1;

out:
    if (VAR_10 < 0) {
        for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11)
            FUNC_1 (VAR_8[VAR_11]);
    }
    FUNC_3 (VAR_8);

    return VAR_10;
}
