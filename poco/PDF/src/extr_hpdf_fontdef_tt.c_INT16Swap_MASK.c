
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_INT16 ;
typedef scalar_t__ HPDF_BYTE ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_1 (HPDF_INT16 *VAR_0)
{
    HPDF_BYTE VAR_1[2];

    FUNC_0 (VAR_1, (HPDF_BYTE *)VAR_0, 2);
    *VAR_0 = (HPDF_INT16)((HPDF_INT16)VAR_1[0] << 8 | (HPDF_INT16)VAR_1[1]);
}
