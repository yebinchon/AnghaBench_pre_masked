
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__ GpStatus ;
typedef int GpFontFamily ;
typedef int GpFont ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int ,int ,int **) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(const char* VAR_4, GpFontFamily *VAR_5, WCHAR *VAR_6)
{
    GpStatus VAR_7;
    GpFont* VAR_8;

    *VAR_6 = 0;
    VAR_7 = FUNC_3(VAR_5, VAR_6, VAR_1);
    FUNC_4(VAR_7 == VAR_2, "could not get the %s family name: %.8x\n", VAR_4, VAR_7);

    VAR_7 = FUNC_0(VAR_5, 12, VAR_0, VAR_3, &VAR_8);
    FUNC_4(VAR_7 == VAR_2, "could not create a font for the %s family: %.8x\n", VAR_4, VAR_7);
    if (VAR_7 == VAR_2)
    {
        VAR_7 = FUNC_1(VAR_8);
        FUNC_4(VAR_7 == VAR_2, "could not delete the %s family font: %.8x\n", VAR_4, VAR_7);
    }

    VAR_7 = FUNC_2(VAR_5);
    FUNC_4(VAR_7 == VAR_2, "could not delete the %s family: %.8x\n", VAR_4, VAR_7);
}
