
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctx; } ;
typedef TYPE_1__ ctl_t ;
struct TYPE_6__ {scalar_t__ linked; } ;
typedef TYPE_2__ context_t ;
typedef int WINECRYPT_CERTSTORE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int *,TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_2(WINECRYPT_CERTSTORE *VAR_0, context_t *VAR_1)
{
    ctl_t *VAR_2 = (ctl_t*)VAR_1, *VAR_3;

    FUNC_1("(%p, %p)\n", VAR_0, VAR_2);

    VAR_3 = (ctl_t*)VAR_1->linked;
    return FUNC_0(&VAR_3->ctx);
}
