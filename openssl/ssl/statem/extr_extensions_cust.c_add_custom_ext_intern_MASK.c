
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int meths_count; TYPE_3__* meths; } ;
typedef TYPE_2__ custom_ext_methods ;
struct TYPE_13__ {unsigned int context; unsigned int ext_type; void* parse_arg; void* add_arg; int * free_cb; int * add_cb; int parse_cb; int role; } ;
typedef TYPE_3__ custom_ext_method ;
struct TYPE_14__ {TYPE_1__* cert; } ;
struct TYPE_11__ {TYPE_2__ custext; } ;
typedef int SSL_custom_ext_parse_cb_ex ;
typedef int * SSL_custom_ext_free_cb_ex ;
typedef int * SSL_custom_ext_add_cb_ex ;
typedef TYPE_4__ SSL_CTX ;
typedef int ENDPOINT ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,unsigned int,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_5(SSL_CTX *VAR_2, ENDPOINT VAR_3,
                                 unsigned int VAR_4,
                                 unsigned int VAR_5,
                                 SSL_custom_ext_add_cb_ex VAR_6,
                                 SSL_custom_ext_free_cb_ex VAR_7,
                                 void *VAR_8,
                                 SSL_custom_ext_parse_cb_ex VAR_9,
                                 void *VAR_10)
{
    custom_ext_methods *VAR_11 = &VAR_2->cert->custext;
    custom_ext_method *VAR_12, *VAR_13;





    if (VAR_6 == ((void*)0) && VAR_7 != ((void*)0))
        return 0;







    if (VAR_4 == VAR_1
            && (VAR_5 & VAR_0) != 0
            && FUNC_1(VAR_2))
        return 0;






    if (FUNC_2(VAR_4)
            && VAR_4 != VAR_1)
        return 0;


    if (VAR_4 > 0xffff)
        return 0;

    if (FUNC_3(VAR_11, VAR_3, VAR_4, ((void*)0)))
        return 0;
    VAR_13 = FUNC_0(VAR_11->meths,
                          (VAR_11->meths_count + 1) * sizeof(custom_ext_method));
    if (VAR_13 == ((void*)0))
        return 0;

    VAR_11->meths = VAR_13;
    VAR_12 = VAR_11->meths + VAR_11->meths_count;
    FUNC_4(VAR_12, 0, sizeof(*VAR_12));
    VAR_12->role = VAR_3;
    VAR_12->context = VAR_5;
    VAR_12->parse_cb = VAR_9;
    VAR_12->add_cb = VAR_6;
    VAR_12->free_cb = VAR_7;
    VAR_12->ext_type = VAR_4;
    VAR_12->add_arg = VAR_8;
    VAR_12->parse_arg = VAR_10;
    VAR_11->meths_count++;
    return 1;
}
