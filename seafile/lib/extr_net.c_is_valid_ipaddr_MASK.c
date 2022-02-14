
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,int ,struct sockaddr_storage*) ;

int
FUNC_1 (const char *VAR_0)
{
    struct sockaddr_storage VAR_1;
    if (!VAR_0)
        return 0;
    if (FUNC_0(VAR_0, 0, &VAR_1) < 0)
        return 0;
    return 1;
}
