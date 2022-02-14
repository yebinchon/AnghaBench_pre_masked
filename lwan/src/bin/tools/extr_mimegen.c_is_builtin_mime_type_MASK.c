
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0)
{


    if (FUNC_0(VAR_0, "application/octet-stream"))
        return 1;
    if (FUNC_0(VAR_0, "application/javascript"))
        return 1;
    if (FUNC_0(VAR_0, "image/jpeg"))
        return 1;
    if (FUNC_0(VAR_0, "image/png"))
        return 1;
    if (FUNC_0(VAR_0, "text/html"))
        return 1;
    if (FUNC_0(VAR_0, "text/css"))
        return 1;
    if (FUNC_0(VAR_0, "text/plain"))
        return 1;
    return 0;
}
