
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structp ;
typedef int HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef scalar_t__ HPDF_Error ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (png_structp VAR_1,
               const char *VAR_2)
{
    char VAR_3[16];
    HPDF_UINT VAR_4;
    HPDF_STATUS VAR_5;
    HPDF_Error VAR_6;


    FUNC_1 (VAR_3, 0, 16);

     for (VAR_4 = 0; VAR_4 < 15; VAR_4++) {
         VAR_3[VAR_4] = *(VAR_2 + VAR_4);
         if (*(VAR_2 + VAR_4 + 1) == ' ')
             break;
     }

     VAR_6 = (HPDF_Error)FUNC_3 (VAR_1);
     VAR_5 = (HPDF_STATUS)FUNC_0 (VAR_3);
     FUNC_2 (VAR_6, VAR_0, VAR_5);
}
