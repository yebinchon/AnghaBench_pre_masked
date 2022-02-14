
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;

int FUNC_1(struct input_ctx *VAR_0, const char *VAR_1)
{

    if (FUNC_0(VAR_1, "text/uri-list") == 0)
        return 10;

    if (FUNC_0(VAR_1, "text/plain;charset=utf-8") == 0)
        return 5;
    if (FUNC_0(VAR_1, "text/plain") == 0)
        return 4;
    if (FUNC_0(VAR_1, "text") == 0)
        return 0;
    return -1;
}
