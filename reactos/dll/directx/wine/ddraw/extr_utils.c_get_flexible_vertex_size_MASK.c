
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int D3DVALUE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

DWORD
FUNC_3(DWORD VAR_5)
{
    DWORD VAR_6 = 0;
    DWORD VAR_7;

    if (VAR_5 & VAR_1) VAR_6 += 3 * sizeof(D3DVALUE);
    if (VAR_5 & VAR_0) VAR_6 += sizeof(DWORD);
    if (VAR_5 & VAR_4) VAR_6 += sizeof(DWORD);
    if (VAR_5 & VAR_3) VAR_6 += sizeof(DWORD);
    switch (VAR_5 & VAR_2)
    {
        case 134: VAR_6 += 3 * sizeof(D3DVALUE); break;
        case 128: VAR_6 += 4 * sizeof(D3DVALUE); break;
        case 133: VAR_6 += 4 * sizeof(D3DVALUE); break;
        case 132: VAR_6 += 5 * sizeof(D3DVALUE); break;
        case 131: VAR_6 += 6 * sizeof(D3DVALUE); break;
        case 130: VAR_6 += 7 * sizeof(D3DVALUE); break;
        case 129: VAR_6 += 8 * sizeof(D3DVALUE); break;
        default: FUNC_0("Unexpected position mask\n");
    }
    for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_5); VAR_7++)
    {
        VAR_6 += FUNC_1(VAR_5, VAR_7) * sizeof(D3DVALUE);
    }

    return VAR_6;
}
