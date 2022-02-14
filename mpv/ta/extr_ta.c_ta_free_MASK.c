
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ta_header {struct ta_header* ext; TYPE_2__* next; TYPE_1__* prev; int (* destructor ) (void*) ;} ;
struct TYPE_4__ {TYPE_1__* prev; } ;
struct TYPE_3__ {TYPE_2__* next; } ;


 int FUNC_0 (struct ta_header*) ;
 struct ta_header* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct ta_header*) ;
 int FUNC_4 (void*) ;

void FUNC_5(void *VAR_0)
{
    struct ta_header *VAR_1 = FUNC_1(VAR_0);
    if (!VAR_1)
        return;
    if (VAR_1->ext && VAR_1->ext->destructor)
        VAR_1->ext->destructor(VAR_0);
    FUNC_4(VAR_0);
    if (VAR_1->next) {

        VAR_1->next->prev = VAR_1->prev;
        VAR_1->prev->next = VAR_1->next;
    }
    FUNC_3(VAR_1);
    FUNC_0(VAR_1->ext);
    FUNC_0(VAR_1);
}
