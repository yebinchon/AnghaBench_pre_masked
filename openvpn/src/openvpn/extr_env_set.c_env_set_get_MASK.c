
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {struct env_item* list; } ;
struct env_item {char const* string; struct env_item* next; } ;


 int FUNC_0 (char const*,char const*) ;

const char *
FUNC_1(const struct env_set *VAR_0, const char *VAR_1)
{
    const struct env_item *VAR_2 = VAR_0->list;
    while (VAR_2 && !FUNC_0(VAR_2->string, VAR_1))
    {
        VAR_2 = VAR_2->next;
    }
    return VAR_2 ? VAR_2->string : ((void*)0);
}
