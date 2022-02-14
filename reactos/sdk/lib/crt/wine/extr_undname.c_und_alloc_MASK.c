
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_symbol {unsigned int avail_in_first; void* alloc_list; void* (* mem_alloc_ptr ) (int) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void* FUNC_2(struct parsed_symbol* VAR_2, unsigned int VAR_3)
{
    void* VAR_4;




    if (VAR_3 > (1024 - sizeof(void*)))
    {

        VAR_4 = VAR_2->mem_alloc_ptr(sizeof(void*) + VAR_3);
        if (!VAR_4) return ((void*)0);
        *(void**)VAR_4 = VAR_2->alloc_list;
        VAR_2->alloc_list = VAR_4;
        VAR_2->avail_in_first = 0;
        VAR_4 = (char*)VAR_2->alloc_list + sizeof(void*);
    }
    else
    {
        if (VAR_3 > VAR_2->avail_in_first)
        {

            VAR_4 = VAR_2->mem_alloc_ptr(1024);
            if (!VAR_4) return ((void*)0);
            *(void**)VAR_4 = VAR_2->alloc_list;
            VAR_2->alloc_list = VAR_4;
            VAR_2->avail_in_first = (1024 - sizeof(void*));
        }

        VAR_4 = (char*)VAR_2->alloc_list + 1024 - VAR_2->avail_in_first;
        VAR_2->avail_in_first -= VAR_3;
    }
    return VAR_4;


}
