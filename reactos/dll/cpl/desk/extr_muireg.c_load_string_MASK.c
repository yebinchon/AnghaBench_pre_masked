
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int* LPWSTR ;
typedef int INT ;
typedef int HRSRC ;
typedef int HINSTANCE ;
typedef int HGLOBAL ;


 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int*,int*,int) ;

__attribute__((used)) static int FUNC_7(HINSTANCE VAR_1, UINT VAR_2, LPWSTR VAR_3, INT VAR_4)
{
    HGLOBAL VAR_5;
    HRSRC VAR_6;
    WCHAR *VAR_7;
    int VAR_8;


    if (FUNC_1(VAR_2) == 0xffff)
        VAR_2 = (UINT)(-((INT)VAR_2));


    VAR_6 = FUNC_0(VAR_1, FUNC_5(FUNC_2(VAR_2 >> 4) + 1), (LPWSTR)VAR_0);
    if (!VAR_6) return 0;
    VAR_5 = FUNC_3(VAR_1, VAR_6);
    if (!VAR_5) return 0;
    VAR_7 = FUNC_4(VAR_5);


    VAR_8 = VAR_2 & 0xf;
    while (VAR_8--) VAR_7 += *VAR_7 + 1;


    if (!VAR_3) return *VAR_7;


    VAR_4 = (*VAR_7 < VAR_4) ? *VAR_7 : (VAR_4 - 1);
    if (VAR_4 >= 0)
    {
        FUNC_6(VAR_3, VAR_7+1, VAR_4 * sizeof(WCHAR));
        VAR_3[VAR_4] = L'\0';
    }

    return VAR_4;
}
