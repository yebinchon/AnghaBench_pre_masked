
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int name_hash; } ;
struct cache_entry {int ce_flags; struct cache_entry* next; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (char const*,int) ;
 int FUNC_1 (struct index_state*) ;
 struct cache_entry* FUNC_2 (unsigned int,int *) ;
 scalar_t__ FUNC_3 (struct cache_entry*,char const*,int,int) ;

struct cache_entry *FUNC_4(struct index_state *VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
    unsigned int VAR_5 = FUNC_0(VAR_2, VAR_3);
    struct cache_entry *VAR_6;

    FUNC_1(VAR_1);
    VAR_6 = FUNC_2(VAR_5, &VAR_1->name_hash);

    while (VAR_6) {
        if (!(VAR_6->ce_flags & VAR_0)) {
            if (FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4))
                return VAR_6;
        }
        VAR_6 = VAR_6->next;
    }
    return ((void*)0);
}
