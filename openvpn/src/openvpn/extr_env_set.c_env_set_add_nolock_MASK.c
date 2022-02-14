
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {int * gc; int list; } ;


 int FUNC_0 (char*,int,int *,int *) ;
 int FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct env_set *VAR_0, const char *VAR_1)
{
    FUNC_1(VAR_1, VAR_0->gc == ((void*)0), &VAR_0->list);
    FUNC_0((char *)VAR_1, 1, &VAR_0->list, VAR_0->gc);
}
