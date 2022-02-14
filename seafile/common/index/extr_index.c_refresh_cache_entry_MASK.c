
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int dummy; } ;
typedef int SeafStat ;


 int FUNC_0 (struct cache_entry*,int *) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static struct cache_entry *FUNC_3(struct cache_entry *VAR_0,
                                               const char *VAR_1)
{
    SeafStat VAR_2;

    if (FUNC_1 (VAR_1, &VAR_2) < 0) {
        FUNC_2("Failed to stat %s.\n", VAR_1);
        return ((void*)0);
    }
    FUNC_0(VAR_0, &VAR_2);

    return VAR_0;
}
