
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; } ;
typedef TYPE_1__ OSSL_PARAM_BLD_DEF ;
typedef int OSSL_PARAM_BLD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,void*,size_t) ;
 TYPE_1__* FUNC_2 (int *,char const*,size_t,size_t,int,int ) ;

__attribute__((used)) static int FUNC_3(OSSL_PARAM_BLD *VAR_2, const char *VAR_3,
                          void *VAR_4, size_t VAR_5, int VAR_6)
{
    OSSL_PARAM_BLD_DEF *VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_5, VAR_6, 0);

    if (VAR_7 == ((void*)0))
        return 0;
    if (VAR_5 > sizeof(VAR_7->num)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    FUNC_1(&VAR_7->num, VAR_4, VAR_5);
    return 1;
}
