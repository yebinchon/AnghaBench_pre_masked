
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_fragment_size; int app_data_size; } ;
typedef TYPE_1__ SSL_TEST_CTX ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

SSL_TEST_CTX *FUNC_1(void)
{
    SSL_TEST_CTX *VAR_2;


    if ((VAR_2 = FUNC_0(sizeof(*VAR_2))) != ((void*)0)) {
        VAR_2->app_data_size = VAR_0;
        VAR_2->max_fragment_size = VAR_1;
    }
    return VAR_2;
}
