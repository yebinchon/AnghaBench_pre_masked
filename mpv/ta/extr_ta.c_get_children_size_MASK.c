
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ta_header {size_t size; struct ta_header* next; TYPE_1__* ext; } ;
struct TYPE_2__ {struct ta_header children; } ;



__attribute__((used)) static size_t FUNC_0(struct ta_header *VAR_0)
{
    size_t VAR_1 = 0;
    if (VAR_0->ext) {
        struct ta_header *VAR_2;
        for (VAR_2 = VAR_0->ext->children.next; VAR_2 != &VAR_0->ext->children; VAR_2 = VAR_2->next)
            VAR_1 += VAR_2->size + FUNC_0(VAR_2);
    }
    return VAR_1;
}
