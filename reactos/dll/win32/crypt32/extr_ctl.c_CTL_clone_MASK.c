
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hCertStore; } ;
struct TYPE_4__ {int base; TYPE_1__ ctx; } ;
typedef TYPE_2__ ctl_t ;
typedef int context_t ;
typedef int WINECRYPT_CERTSTORE ;
typedef int CTL_CONTEXT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int,int *,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static context_t *FUNC_2(context_t *VAR_0, WINECRYPT_CERTSTORE *VAR_1, BOOL VAR_2)
{
    ctl_t *VAR_3;

    if(!VAR_2) {
        FUNC_1("Only links supported\n");
        return ((void*)0);
    }

    VAR_3 = (ctl_t*)FUNC_0(sizeof(CTL_CONTEXT), VAR_0, VAR_1);
    if(!VAR_3)
        return ((void*)0);

    VAR_3->ctx.hCertStore = VAR_1;
    return &VAR_3->base;
}
