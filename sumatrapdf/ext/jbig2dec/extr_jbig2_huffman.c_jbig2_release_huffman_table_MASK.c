
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int allocator; } ;
struct TYPE_6__ {struct TYPE_6__* entries; } ;
typedef TYPE_1__ Jbig2HuffmanTable ;
typedef TYPE_2__ Jbig2Ctx ;


 int FUNC_0 (int ,TYPE_1__*) ;

void
FUNC_1(Jbig2Ctx *VAR_0, Jbig2HuffmanTable *VAR_1)
{
    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_0->allocator, VAR_1->entries);
        FUNC_0(VAR_0->allocator, VAR_1);
    }
}
