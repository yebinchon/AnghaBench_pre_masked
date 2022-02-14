
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * alloc_cipher; int cipher; int engine; } ;
typedef TYPE_1__ PROV_CIPHER ;


 int FUNC_0 (int *) ;

int FUNC_1(PROV_CIPHER *VAR_0, const PROV_CIPHER *VAR_1)
{
    if (VAR_1->alloc_cipher != ((void*)0) && !FUNC_0(VAR_1->alloc_cipher))
        return 0;
    VAR_0->engine = VAR_1->engine;
    VAR_0->cipher = VAR_1->cipher;
    VAR_0->alloc_cipher = VAR_1->alloc_cipher;
    return 1;
}
