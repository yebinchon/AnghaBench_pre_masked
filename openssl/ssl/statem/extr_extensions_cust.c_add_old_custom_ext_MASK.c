
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parse_cb; void* parse_arg; int free_cb; int add_cb; void* add_arg; } ;
typedef TYPE_1__ custom_ext_parse_cb_wrap ;
typedef int custom_ext_parse_cb ;
typedef int custom_ext_free_cb ;
typedef TYPE_1__ custom_ext_add_cb_wrap ;
typedef int custom_ext_add_cb ;
typedef int SSL_CTX ;
typedef int ENDPOINT ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,unsigned int,unsigned int,int ,int ,TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(SSL_CTX *VAR_3, ENDPOINT VAR_4,
                              unsigned int VAR_5,
                              unsigned int VAR_6,
                              custom_ext_add_cb VAR_7,
                              custom_ext_free_cb VAR_8,
                              void *VAR_9,
                              custom_ext_parse_cb VAR_10, void *VAR_11)
{
    custom_ext_add_cb_wrap *VAR_12
        = FUNC_1(sizeof(*VAR_12));
    custom_ext_parse_cb_wrap *VAR_13
        = FUNC_1(sizeof(*VAR_13));
    int VAR_14;

    if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
        FUNC_0(VAR_12);
        FUNC_0(VAR_13);
        return 0;
    }

    VAR_12->add_arg = VAR_9;
    VAR_12->add_cb = VAR_7;
    VAR_12->free_cb = VAR_8;
    VAR_13->parse_arg = VAR_11;
    VAR_13->parse_cb = VAR_10;

    VAR_14 = FUNC_2(VAR_3, VAR_4, VAR_5,
                                VAR_6,
                                VAR_0,
                                VAR_1,
                                VAR_12,
                                VAR_2,
                                VAR_13);

    if (!VAR_14) {
        FUNC_0(VAR_12);
        FUNC_0(VAR_13);
    }

    return VAR_14;
}
