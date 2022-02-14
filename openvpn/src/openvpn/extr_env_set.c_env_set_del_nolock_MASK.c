
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {int list; int * gc; } ;


 int FUNC_0 (char const*,int ,int *) ;

__attribute__((used)) static bool
FUNC_1(struct env_set *VAR_0, const char *VAR_1)
{
    return FUNC_0(VAR_1, VAR_0->gc == ((void*)0), &VAR_0->list);
}
