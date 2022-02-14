
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_array {void* base; scalar_t__ elements; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*) ;

int FUNC_2(struct lwan_array *VAR_1, void *VAR_2)
{
    if (FUNC_0(!VAR_1))
        return -VAR_0;

    if (VAR_1->base != VAR_2)
        FUNC_1(VAR_1->base);

    VAR_1->base = ((void*)0);
    VAR_1->elements = 0;

    return 0;
}
