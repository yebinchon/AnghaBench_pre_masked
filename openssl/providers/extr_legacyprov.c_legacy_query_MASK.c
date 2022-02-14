
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OSSL_ALGORITHM ;



 int const* VAR_0 ;

__attribute__((used)) static const OSSL_ALGORITHM *FUNC_0(OSSL_PROVIDER *VAR_1,
                                          int VAR_2,
                                          int *VAR_3)
{
    *VAR_3 = 0;
    switch (VAR_2) {
    case 128:
        return VAR_0;
    }
    return ((void*)0);
}
