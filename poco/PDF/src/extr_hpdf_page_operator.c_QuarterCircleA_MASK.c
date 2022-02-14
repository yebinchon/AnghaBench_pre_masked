
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_REAL ;


 char* FUNC_0 (char*,int,char*) ;
 scalar_t__ FUNC_1 (char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static char*
FUNC_2 (char *VAR_1,
                 char *VAR_2,
                 HPDF_REAL VAR_3,
                 HPDF_REAL VAR_4,
                 HPDF_REAL VAR_5)
{
    VAR_1 = FUNC_0 (VAR_1, VAR_3 -VAR_5, VAR_2);
    *VAR_1++ = ' ';
    VAR_1 = FUNC_0 (VAR_1, VAR_4 + VAR_5 * VAR_0, VAR_2);
    *VAR_1++ = ' ';
    VAR_1 = FUNC_0 (VAR_1, VAR_3 -VAR_5 * VAR_0, VAR_2);
    *VAR_1++ = ' ';
    VAR_1 = FUNC_0 (VAR_1, VAR_4 + VAR_5, VAR_2);
    *VAR_1++ = ' ';
    VAR_1 = FUNC_0 (VAR_1, VAR_3, VAR_2);
    *VAR_1++ = ' ';
    VAR_1 = FUNC_0 (VAR_1, VAR_4 + VAR_5, VAR_2);
    return (char *)FUNC_1 (VAR_1, " c\012", VAR_2);
}
