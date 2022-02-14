
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ OPENSSL_INIT_SETTINGS ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

OPENSSL_INIT_SETTINGS *FUNC_2(void)
{
    OPENSSL_INIT_SETTINGS *VAR_1 = FUNC_0(sizeof(*VAR_1));

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->flags = VAR_0;

    return VAR_1;
}
