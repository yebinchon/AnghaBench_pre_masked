
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int n; } ;


 int FUNC_0 (int *,char const*) ;

struct list_head *FUNC_1(const struct list_head *VAR_0, const char *VAR_1)
{
    if (!FUNC_0(&VAR_0->n, VAR_1))
        return ((void*)0);
    return (struct list_head *)VAR_0;
}
