
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_symbol {scalar_t__ avail_in_first; void* alloc_list; int (* mem_free_ptr ) (void*) ;} ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct parsed_symbol* VAR_0)
{
    void* VAR_1;

    while (VAR_0->alloc_list)
    {
        VAR_1 = *(void**)VAR_0->alloc_list;
        if(VAR_0->mem_free_ptr) VAR_0->mem_free_ptr(VAR_0->alloc_list);
        VAR_0->alloc_list = VAR_1;
    }
    VAR_0->avail_in_first = 0;
}
