
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* dh; } ;
typedef TYPE_1__ PROV_DH_CTX ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, void *VAR_1)
{
    PROV_DH_CTX *VAR_2 = (PROV_DH_CTX *)VAR_0;

    if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0) || !FUNC_1(VAR_1))
        return 0;
    FUNC_0(VAR_2->dh);
    VAR_2->dh = VAR_1;
    return 1;
}
