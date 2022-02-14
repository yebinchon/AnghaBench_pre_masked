
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;

gboolean
FUNC_2 (const char *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_1);
    const char *VAR_3;

    if (VAR_2 < 5)
        return VAR_0;
    VAR_3 = &VAR_1[VAR_2-4];
    return (FUNC_0 (VAR_3, ".eml") == 0);
}
