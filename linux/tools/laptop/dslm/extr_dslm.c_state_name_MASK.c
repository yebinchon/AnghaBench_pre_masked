
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(int VAR_0)
{
    if (VAR_0 == -1) return "unknown";
    if (VAR_0 == 0) return "sleeping";
    if (VAR_0 == 1) return "active";

    return "internal error";
}
