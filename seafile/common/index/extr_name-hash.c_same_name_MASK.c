
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int name; } ;


 int FUNC_0 (char const*,int,int ,int) ;
 int FUNC_1 (struct cache_entry const*) ;

__attribute__((used)) static int FUNC_2(const struct cache_entry *VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_1(VAR_0);





    if (VAR_4 == VAR_2 && !FUNC_0(VAR_1, VAR_2, VAR_0->name, VAR_4))
        return 1;
    else
        return 0;
}
