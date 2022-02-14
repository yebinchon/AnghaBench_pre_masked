
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct cache_entry {int ce_flags; int name; } ;
typedef int SeafStat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct index_state*,struct cache_entry*,int) ;
 int FUNC_1 (struct cache_entry*) ;
 struct cache_entry* FUNC_2 (char const*,int *) ;
 int FUNC_3 (struct cache_entry*) ;
 struct cache_entry* FUNC_4 (struct index_state*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct index_state*,struct cache_entry*) ;
 int FUNC_6 (struct index_state*,int ) ;
 int FUNC_7 (char*,char const*) ;

int
FUNC_8 (struct index_state *VAR_3, const char *VAR_4, SeafStat *VAR_5)
{
    struct cache_entry *VAR_6, *VAR_7;
    int VAR_8 = (VAR_0|VAR_1);

    VAR_6 = FUNC_2 (VAR_4, VAR_5);

    if (FUNC_5 (VAR_3, VAR_6)) {
        FUNC_3 (VAR_6);
        return 0;
    }

    VAR_7 = FUNC_4(VAR_3, VAR_6->name, FUNC_1(VAR_6), 0);
    if (VAR_7) {
        FUNC_3 (VAR_6);
        return 0;
    } else {
    }

    VAR_6->ce_flags |= VAR_2;

    if (FUNC_0(VAR_3, VAR_6, VAR_8)) {
        FUNC_7("unable to add %s to index\n",VAR_4);
        FUNC_3 (VAR_6);
        return -1;
    }

    return 1;
}
