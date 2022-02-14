
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ta_header {struct ta_ext_header* ext; } ;
struct TYPE_2__ {struct TYPE_2__* prev; } ;
struct ta_ext_header {TYPE_1__ children; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct ta_header* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

void FUNC_3(void *VAR_0)
{
    struct ta_header *VAR_1 = FUNC_1(VAR_0);
    struct ta_ext_header *VAR_2 = VAR_1 ? VAR_1->ext : ((void*)0);
    if (!VAR_2)
        return;
    while (VAR_2->children.prev != &VAR_2->children)
        FUNC_2(FUNC_0(VAR_2->children.prev));
}
