
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union aligned_header {int dummy; } aligned_header ;
struct ta_header {size_t size; TYPE_6__* ext; TYPE_2__* prev; TYPE_1__* next; } ;
struct TYPE_11__ {TYPE_4__* prev; TYPE_3__* next; } ;
struct TYPE_12__ {TYPE_5__ children; struct ta_header* header; } ;
struct TYPE_10__ {TYPE_5__* next; } ;
struct TYPE_9__ {TYPE_5__* prev; } ;
struct TYPE_8__ {struct ta_header* next; } ;
struct TYPE_7__ {struct ta_header* prev; } ;


 size_t VAR_0 ;
 void* FUNC_0 (struct ta_header*) ;
 struct ta_header* FUNC_1 (void*) ;
 struct ta_header* FUNC_2 (struct ta_header*,int) ;
 void* FUNC_3 (void*,size_t) ;
 int FUNC_4 (struct ta_header*) ;
 int FUNC_5 (struct ta_header*) ;
 int FUNC_6 (void*) ;

void *FUNC_7(void *VAR_1, void *VAR_2, size_t VAR_3)
{
    if (VAR_3 >= VAR_0)
        return ((void*)0);
    if (!VAR_3) {
        FUNC_6(VAR_2);
        return ((void*)0);
    }
    if (!VAR_2)
        return FUNC_3(VAR_1, VAR_3);
    struct ta_header *VAR_4 = FUNC_1(VAR_2);
    struct ta_header *VAR_5 = VAR_4;
    if (VAR_4->size == VAR_3)
        return VAR_2;
    FUNC_5(VAR_4);
    VAR_4 = FUNC_2(VAR_4, sizeof(union aligned_header) + VAR_3);
    FUNC_4(VAR_4 ? VAR_4 : VAR_5);
    if (!VAR_4)
        return ((void*)0);
    VAR_4->size = VAR_3;
    if (VAR_4 != VAR_5) {
        if (VAR_4->next) {

            VAR_4->next->prev = VAR_4;
            VAR_4->prev->next = VAR_4;
        }
        if (VAR_4->ext) {

            VAR_4->ext->header = VAR_4;
            VAR_4->ext->children.next->prev = &VAR_4->ext->children;
            VAR_4->ext->children.prev->next = &VAR_4->ext->children;
        }
    }
    return FUNC_0(VAR_4);
}
