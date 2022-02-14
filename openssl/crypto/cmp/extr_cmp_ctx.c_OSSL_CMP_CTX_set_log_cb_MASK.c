
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int log_cb; } ;
typedef int OSSL_cmp_log_cb_t ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;

int FUNC_2(OSSL_CMP_CTX *VAR_3, OSSL_cmp_log_cb_t VAR_4)
{
    if (VAR_3 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return 0;
    }
    VAR_3->log_cb = VAR_4;



    if (!FUNC_1(VAR_1,
                                 VAR_2, VAR_3))
        return 0;


    return 1;
}
