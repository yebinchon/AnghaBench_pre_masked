
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef int HPDF_INT ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;

HPDF_STATUS
FUNC_2 (HPDF_Stream VAR_1,
                       HPDF_INT VAR_2)
{
    char VAR_3[VAR_0 + 1];

    char* VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_3 + VAR_0);

    return FUNC_1(VAR_1, (HPDF_BYTE *)VAR_3, (HPDF_UINT)(VAR_4 - VAR_3));
}
