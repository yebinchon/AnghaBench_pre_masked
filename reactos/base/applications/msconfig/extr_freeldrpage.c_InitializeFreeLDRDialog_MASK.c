
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ) ;
 int VAR_1 ;
 int* FUNC_2 (int*,int) ;

__attribute__((used)) static BOOL
FUNC_3(HWND VAR_2)
{
    WCHAR VAR_3[VAR_1];
    WCHAR* VAR_4 = ((void*)0);

    FUNC_0(VAR_3, VAR_1);
    VAR_4 = FUNC_2(VAR_3, L'\\');
    if (VAR_4 == ((void*)0))
    {
        return VAR_0;
    }
    VAR_4[1] = L'\0';
    return FUNC_1(VAR_3, VAR_2);
}
