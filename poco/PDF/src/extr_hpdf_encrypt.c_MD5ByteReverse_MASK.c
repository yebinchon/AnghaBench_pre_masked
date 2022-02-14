
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT32 ;
typedef int HPDF_BYTE ;



__attribute__((used)) static void
FUNC_0 (HPDF_BYTE *VAR_0,
                 HPDF_UINT32 VAR_1)
{
    HPDF_UINT32 VAR_2;
    do
    {
        VAR_2 = (HPDF_UINT32) ((HPDF_UINT32) VAR_0[3] << 8 | VAR_0[2]) << 16 |
        ((HPDF_UINT32) VAR_0[1] << 8 | VAR_0[0]);
        *(HPDF_UINT32 *) VAR_0 = VAR_2;
        VAR_0 += 4;
    }
    while (--VAR_1);
}
