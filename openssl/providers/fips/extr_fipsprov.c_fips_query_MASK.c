
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OSSL_ALGORITHM ;






 int const* VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;

__attribute__((used)) static const OSSL_ALGORITHM *FUNC_0(OSSL_PROVIDER *VAR_4,
                                         int VAR_5,
                                         int *VAR_6)
{
    *VAR_6 = 0;
    switch (VAR_5) {
    case 130:
        return VAR_1;
    case 131:
        return VAR_0;
    case 128:
        return VAR_3;
    case 129:
        return VAR_2;
    }
    return ((void*)0);
}
