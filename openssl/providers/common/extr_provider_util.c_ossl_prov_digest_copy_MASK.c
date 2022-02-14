
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * alloc_md; int md; int engine; } ;
typedef TYPE_1__ PROV_DIGEST ;


 int FUNC_0 (int *) ;

int FUNC_1(PROV_DIGEST *VAR_0, const PROV_DIGEST *VAR_1)
{
    if (VAR_1->alloc_md != ((void*)0) && !FUNC_0(VAR_1->alloc_md))
        return 0;
    VAR_0->engine = VAR_1->engine;
    VAR_0->md = VAR_1->md;
    VAR_0->alloc_md = VAR_1->alloc_md;
    return 1;
}
