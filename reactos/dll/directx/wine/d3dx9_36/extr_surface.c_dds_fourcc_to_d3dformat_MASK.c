
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const DWORD ;
typedef scalar_t__ const D3DFORMAT ;


 unsigned int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ const VAR_0 ;


 int FUNC_1 (char*,scalar_t__ const) ;

__attribute__((used)) static D3DFORMAT FUNC_2(DWORD VAR_1)
{
    unsigned int VAR_2;
    static const DWORD VAR_3[] = {
        129,
        128,
        130,
        133,
        140,
        139,
        138,
        137,
        136,
        132,
        135,
        142,
        131,
        134,
        141,
    };

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3); VAR_2++)
    {
        if (VAR_3[VAR_2] == VAR_1)
            return VAR_1;
    }

    FUNC_1("Unknown FourCC %#x\n", VAR_1);
    return VAR_0;
}
