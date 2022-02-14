
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {char* name; } ;


 int FUNC_0 (struct cache_entry const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const struct cache_entry *VAR_0, const char **VAR_1)
{
    const char *VAR_2, *VAR_3;
    int VAR_4;

    if (!VAR_1)
        return 1;

    VAR_4 = FUNC_0(VAR_0);
    VAR_3 = VAR_0->name;
    while ((VAR_2 = *VAR_1++) != ((void*)0)) {
        int VAR_5 = FUNC_2(VAR_2);
        if (VAR_5 > VAR_4)
            continue;
        if (FUNC_1(VAR_3, VAR_2, VAR_5))
            continue;
        if (VAR_5 && VAR_3[VAR_5-1] == '/')
            return 1;
        if (VAR_3[VAR_5] == '/' || !VAR_3[VAR_5])
            return 1;
        if (!VAR_5)
            return 1;
    }
    return 0;
}
