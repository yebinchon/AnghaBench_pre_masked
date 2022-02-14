
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ return_size; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void const*,int ,size_t) ;

int FUNC_1(OSSL_PARAM *VAR_1, const void *VAR_2,
                             size_t VAR_3)
{
    if (VAR_1 == ((void*)0))
        return 0;
    VAR_1->return_size = 0;
    if (VAR_2 == ((void*)0))
        return 0;
    return FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);
}
