
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3DXPARAMETER_TYPE ;






 int FUNC_0 (int,void const*) ;

__attribute__((used)) static inline int FUNC_1(D3DXPARAMETER_TYPE VAR_0, const void *VAR_1)
{
    switch (VAR_0)
    {
        case 130:
            return (int)(*(float *)VAR_1);

        case 129:
        case 128:
            return *(int *)VAR_1;

        case 131:
            return FUNC_0(VAR_0, VAR_1);

        default:
            return 0;
    }
}
