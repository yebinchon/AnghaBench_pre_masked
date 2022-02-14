
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* data; } ;
struct TYPE_6__ {int type; TYPE_1__ _; } ;
typedef TYPE_2__ OSSL_STORE_INFO ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static OSSL_STORE_INFO *FUNC_1(int VAR_0, void *VAR_1)
{
    OSSL_STORE_INFO *VAR_2 = FUNC_0(sizeof(*VAR_2));

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_2->type = VAR_0;
    VAR_2->_.data = VAR_1;
    return VAR_2;
}
