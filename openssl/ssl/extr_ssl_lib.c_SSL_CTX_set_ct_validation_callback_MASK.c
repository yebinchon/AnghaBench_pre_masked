
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * ssl_ct_validation_cb ;
struct TYPE_4__ {void* ct_validation_callback_arg; int * ct_validation_callback; } ;
typedef TYPE_1__ SSL_CTX ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;

int FUNC_2(SSL_CTX *VAR_3,
                                       ssl_ct_validation_cb VAR_4, void *VAR_5)
{




    if (VAR_4 != ((void*)0) && FUNC_0(VAR_3,
                                                          VAR_2))
    {
        FUNC_1(VAR_0,
               VAR_1);
        return 0;
    }

    VAR_3->ct_validation_callback = VAR_4;
    VAR_3->ct_validation_callback_arg = VAR_5;
    return 1;
}
