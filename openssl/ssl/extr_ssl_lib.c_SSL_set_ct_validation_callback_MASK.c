
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * ssl_ct_validation_cb ;
struct TYPE_4__ {void* ct_validation_callback_arg; int * ct_validation_callback; int ctx; } ;
typedef TYPE_1__ SSL ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(SSL *VAR_4, ssl_ct_validation_cb VAR_5,
                                   void *VAR_6)
{




    if (VAR_5 != ((void*)0) && FUNC_0(VAR_4->ctx,
                                                          VAR_3))
    {
        FUNC_2(VAR_0,
               VAR_1);
        return 0;
    }

    if (VAR_5 != ((void*)0)) {



        if (!FUNC_1(VAR_4, VAR_2))
            return 0;
    }

    VAR_4->ct_validation_callback = VAR_5;
    VAR_4->ct_validation_callback_arg = VAR_6;

    return 1;
}
