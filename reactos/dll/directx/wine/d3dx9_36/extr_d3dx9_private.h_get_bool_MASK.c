
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int D3DXPARAMETER_TYPE ;
typedef int BOOL ;






 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(D3DXPARAMETER_TYPE VAR_1, const void *VAR_2)
{
    switch (VAR_1)
    {
        case 130:
        case 129:
        case 131:
            return !!*(DWORD *)VAR_2;

        case 128:
            return *(BOOL *)VAR_2;

        default:
            return VAR_0;
    }
}
