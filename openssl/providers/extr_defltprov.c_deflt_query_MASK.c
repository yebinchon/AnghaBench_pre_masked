
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
 int const* VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;

__attribute__((used)) static const OSSL_ALGORITHM *FUNC_0(OSSL_PROVIDER *VAR_7,
                                         int VAR_8,
                                         int *VAR_9)
{
    *VAR_9 = 0;
    switch (VAR_8) {
    case 133:
        return VAR_1;
    case 134:
        return VAR_0;
    case 129:
        return VAR_5;
    case 132:
        return VAR_2;
    case 130:
        return VAR_4;
    case 131:
        return VAR_3;
    case 128:
        return VAR_6;
    }
    return ((void*)0);
}
