
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int D3DXPARAMETER_TYPE ;
typedef int BOOL ;





 int FUNC_0 (int,void const*) ;
 float FUNC_1 (int,void const*) ;
 int FUNC_2 (int,void const*) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_0, D3DXPARAMETER_TYPE VAR_1, const void *VAR_2, D3DXPARAMETER_TYPE VAR_3)
{
    if (VAR_1 == VAR_3)
    {
        *(DWORD *)VAR_0 = *(DWORD *)VAR_2;
        return;
    }

    switch (VAR_1)
    {
        case 129:
            *(float *)VAR_0 = FUNC_1(VAR_3, VAR_2);
            break;

        case 130:
            *(BOOL *)VAR_0 = FUNC_0(VAR_3, VAR_2);
            break;

        case 128:
            *(int *)VAR_0 = FUNC_2(VAR_3, VAR_2);
            break;

        default:
            *(DWORD *)VAR_0 = 0;
            break;
    }
}
