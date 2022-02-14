
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int master_key_length; scalar_t__ master_key; } ;
typedef TYPE_1__ SSL_SESSION ;
typedef int OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,void*,int ) ;

void FUNC_2(const SSL_SESSION *VAR_1,
                                       OSSL_PARAM VAR_2[])
{
    int VAR_3 = 0;
    VAR_2[VAR_3++] = FUNC_1(VAR_0,
                                                    (void *)VAR_1->master_key,
                                                    VAR_1->master_key_length);
    VAR_2[VAR_3++] = FUNC_0();
}
