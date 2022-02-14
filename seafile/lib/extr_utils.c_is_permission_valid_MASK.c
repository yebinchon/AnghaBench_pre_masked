
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

gboolean
FUNC_2 (const char *VAR_1)
{
    if (FUNC_0 (VAR_1)) {
        return VAR_0;
    }

    return FUNC_1 (VAR_1, "r") == 0 || FUNC_1 (VAR_1, "rw") == 0;
}
