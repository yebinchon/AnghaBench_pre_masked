
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ta_header {size_t size; } ;


 struct ta_header* FUNC_0 (void*) ;

size_t FUNC_1(void *VAR_0)
{
    struct ta_header *VAR_1 = FUNC_0(VAR_0);
    return VAR_1 ? VAR_1->size : 0;
}
