
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_name_fn {int name; } ;
typedef int msg ;


 int FUNC_0 (char*,int,char*,int ,char const*,char const*,char*,char const*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const struct set_name_fn *VAR_0, const char *VAR_1,
                         const char *VAR_2, int VAR_3, const char *VAR_4)
{
    char VAR_5[1024];

    if (VAR_3 < 0)
        return 1;
    FUNC_0(VAR_5, sizeof(VAR_5), "%s: %s: [%s] %s [%s]",
                 VAR_0->name, VAR_1, VAR_2,
                 VAR_3 ? "matches" : "does not match", VAR_4);
    if (FUNC_2(VAR_5))
        return 1;
    FUNC_1("%s", VAR_5);
    return 0;
}
