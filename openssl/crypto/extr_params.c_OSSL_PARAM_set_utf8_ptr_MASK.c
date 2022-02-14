
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ return_size; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(OSSL_PARAM *VAR_1, const char *VAR_2)
{
    if (VAR_1 == ((void*)0))
        return 0;
    VAR_1->return_size = 0;
    if (VAR_2 == ((void*)0))
        return 0;
    return FUNC_0(VAR_1, VAR_2, VAR_0, FUNC_1(VAR_2) + 1);
}
