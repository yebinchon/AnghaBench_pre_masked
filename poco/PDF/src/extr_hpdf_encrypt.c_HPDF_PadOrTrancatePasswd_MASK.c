
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_BYTE ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int,scalar_t__) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,scalar_t__) ;

void
FUNC_4 (const char *VAR_2,
                           HPDF_BYTE *VAR_3)
{
    HPDF_UINT VAR_4 = FUNC_3 (VAR_2, VAR_1 + 1);

    FUNC_2((" HPDF_PadOrTrancatePasswd\n"));

    FUNC_1 (VAR_3, 0x00, VAR_1);

    if (VAR_4 >= VAR_1) {
        FUNC_0 (VAR_3, (HPDF_BYTE *)VAR_2, VAR_1);
    } else {
        if (VAR_4 > 0) {
            FUNC_0 (VAR_3, (HPDF_BYTE *)VAR_2, VAR_4);
        }
        FUNC_0 (VAR_3 + VAR_4, VAR_0, VAR_1 - VAR_4);
    }
}
