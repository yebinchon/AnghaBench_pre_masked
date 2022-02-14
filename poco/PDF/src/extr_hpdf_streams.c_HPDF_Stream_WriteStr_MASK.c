
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef int HPDF_BYTE ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int ,int *,int ) ;

HPDF_STATUS
FUNC_2 (HPDF_Stream VAR_0,
                       const char *VAR_1)
{
    HPDF_UINT VAR_2 = FUNC_0(VAR_1, -1);

    return FUNC_1(VAR_0, (HPDF_BYTE *)VAR_1, VAR_2);
}
