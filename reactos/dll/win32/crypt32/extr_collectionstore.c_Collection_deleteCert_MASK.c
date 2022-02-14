
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ linked; } ;
typedef TYPE_1__ context_t ;
struct TYPE_6__ {int ctx; } ;
typedef TYPE_2__ cert_t ;
typedef int WINECRYPT_CERTSTORE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int *,TYPE_2__*) ;

__attribute__((used)) static BOOL FUNC_2(WINECRYPT_CERTSTORE *VAR_0, context_t *VAR_1)
{
    cert_t *VAR_2 = (cert_t*)VAR_1;
    cert_t *VAR_3;

    FUNC_1("(%p, %p)\n", VAR_0, VAR_2);

    VAR_3 = (cert_t*)VAR_1->linked;
    return FUNC_0(&VAR_3->ctx);
}
