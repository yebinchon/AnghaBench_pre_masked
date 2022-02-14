
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ta_header {scalar_t__ size; TYPE_1__* ext; struct ta_header* next; } ;
struct TYPE_2__ {int header; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 struct ta_header* FUNC_1 (void*) ;

void *FUNC_2(void *VAR_1)
{
    struct ta_header *VAR_2 = FUNC_1(VAR_1);
    if (!VAR_2 || !VAR_2->next)
        return ((void*)0);
    for (struct ta_header *VAR_3 = VAR_2->next; VAR_3 != VAR_2; VAR_3 = VAR_3->next) {
        if (VAR_3->size == VAR_0)
            return FUNC_0(VAR_3->ext->header);
    }
    return ((void*)0);
}
