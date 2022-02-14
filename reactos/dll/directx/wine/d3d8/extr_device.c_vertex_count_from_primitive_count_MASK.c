
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int D3DPRIMITIVETYPE ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static UINT FUNC_1(D3DPRIMITIVETYPE VAR_0, UINT VAR_1)
{
    switch (VAR_0)
    {
        case 131:
            return VAR_1;

        case 133:
            return VAR_1 * 2;

        case 132:
            return VAR_1 + 1;

        case 129:
            return VAR_1 * 3;

        case 128:
        case 130:
            return VAR_1 + 2;

        default:
            FUNC_0("Unhandled primitive type %#x.\n", VAR_0);
            return 0;
    }
}
