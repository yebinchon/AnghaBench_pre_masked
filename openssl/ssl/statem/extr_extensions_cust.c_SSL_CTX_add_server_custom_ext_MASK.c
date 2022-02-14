
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int custom_ext_parse_cb ;
typedef int custom_ext_free_cb ;
typedef int custom_ext_add_cb ;
typedef int SSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,unsigned int,int,int ,int ,void*,int ,void*) ;

int FUNC_1(SSL_CTX *VAR_5, unsigned int VAR_6,
                                  custom_ext_add_cb VAR_7,
                                  custom_ext_free_cb VAR_8,
                                  void *VAR_9,
                                  custom_ext_parse_cb VAR_10, void *VAR_11)
{
    return FUNC_0(VAR_5, VAR_0, VAR_6,
                              VAR_3
                              | VAR_1
                              | VAR_4
                              | VAR_2,
                              VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
