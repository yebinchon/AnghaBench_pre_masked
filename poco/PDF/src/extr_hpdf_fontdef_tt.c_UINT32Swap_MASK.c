
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT32 ;
typedef scalar_t__ HPDF_BYTE ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_1 (HPDF_UINT32 *VAR_0)
{
    HPDF_BYTE VAR_1[4];

    FUNC_0 (VAR_1, (HPDF_BYTE *)VAR_0, 4);
    *VAR_0 = (HPDF_UINT32)((HPDF_UINT32)VAR_1[0] << 24 |
             (HPDF_UINT32)VAR_1[1] << 16 |
             (HPDF_UINT32)VAR_1[2] << 8 |
             (HPDF_UINT32)VAR_1[3]);
}
