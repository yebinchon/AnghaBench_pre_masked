
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const* string; } ;
typedef TYPE_1__ OSSL_PARAM_BLD_DEF ;
typedef int OSSL_PARAM_BLD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *,char const*,size_t,size_t,int ,int ) ;

int FUNC_2(OSSL_PARAM_BLD *VAR_4, const char *VAR_5,
                                     const void *VAR_6, size_t VAR_7)
{
    OSSL_PARAM_BLD_DEF *VAR_8;

    if (VAR_7 > VAR_2) {
        FUNC_0(VAR_0,
                  VAR_1);
        return 0;
    }
    VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_7, VAR_7, VAR_3, 0);
    if (VAR_8 == ((void*)0))
        return 0;
    VAR_8->string = VAR_6;
    return 1;
}
