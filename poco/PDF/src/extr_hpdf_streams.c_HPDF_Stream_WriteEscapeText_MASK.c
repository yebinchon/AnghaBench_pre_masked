
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,char const*,int ) ;

HPDF_STATUS
FUNC_3 (HPDF_Stream VAR_1,
                              const char *VAR_2)
{
    HPDF_UINT VAR_3;

    FUNC_0((" HPDF_Stream_WriteEscapeText\n"));

    VAR_3 = (VAR_2 == ((void*)0)) ? 0 : FUNC_1 (VAR_2, VAR_0);

    return FUNC_2(VAR_1, VAR_2, VAR_3);
}
