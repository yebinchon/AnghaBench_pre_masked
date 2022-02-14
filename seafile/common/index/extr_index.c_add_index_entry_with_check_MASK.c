
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; int * cache; } ;
struct cache_entry {int ce_flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct cache_entry*) ;
 scalar_t__ FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (struct index_state*,int ,int ) ;
 int FUNC_3 (struct index_state*,int ) ;
 int FUNC_4 (struct index_state*,int) ;
 int FUNC_5 (struct index_state*,int,struct cache_entry*) ;

__attribute__((used)) static int FUNC_6(struct index_state *VAR_2, struct cache_entry *VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6 = VAR_4 & VAR_1;


    int VAR_7 = VAR_4 & VAR_0;

    FUNC_3 (VAR_2, VAR_3->name);

    VAR_5 = FUNC_2(VAR_2, VAR_3->name, VAR_3->ce_flags);


    if (VAR_5 >= 0) {
        if (!VAR_7)
            FUNC_5(VAR_2, VAR_5, VAR_3);
        return 0;
    }
    VAR_5 = -VAR_5-1;





    if (VAR_5 < VAR_2->cache_nr && FUNC_1(VAR_3) == 0) {
        while (FUNC_0(VAR_2->cache[VAR_5], VAR_3)) {
            VAR_6 = 1;
            if (!FUNC_4(VAR_2, VAR_5))
                break;
        }
    }

    if (!VAR_6)
        return -1;
    return VAR_5 + 1;
}
