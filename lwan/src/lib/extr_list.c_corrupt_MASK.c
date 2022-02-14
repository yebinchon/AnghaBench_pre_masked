
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_node {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*,struct list_node const*,unsigned int,struct list_node const*) ;
 int VAR_0 ;

__attribute__((used)) static void *FUNC_2(const char *VAR_1,
                     const struct list_node *VAR_2,
                     const struct list_node *VAR_3,
                     unsigned int VAR_4)
{
    if (VAR_1) {
        FUNC_1(VAR_0, "%s: prev corrupt in node %p (%u) of %p\n", VAR_1,
                VAR_3, VAR_4, VAR_2);
        FUNC_0();
    }
    return ((void*)0);
}
