
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT16 ;
typedef int HPDF_BYTE ;


 char* FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static char*
FUNC_1 (char *VAR_0,
                HPDF_UINT16 VAR_1,
                HPDF_UINT16 VAR_2,
                char *VAR_3)
{
    HPDF_BYTE VAR_4 = (VAR_2 > 255) ? 2 : 1;
    char *VAR_5;

    VAR_5 = FUNC_0 (VAR_0, VAR_1, VAR_3, VAR_4);
    *VAR_5++ = ' ';
    VAR_5 = FUNC_0 (VAR_5, VAR_2, VAR_3, VAR_4);

    return VAR_5;
}
