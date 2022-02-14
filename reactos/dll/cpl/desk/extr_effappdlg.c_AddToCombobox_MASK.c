
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int TCHAR ;
typedef int LPTSTR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static VOID
FUNC_3(INT VAR_2, HWND VAR_3, INT VAR_4, INT VAR_5)
{
    INT VAR_6;
    TCHAR VAR_7[80];

    for (VAR_6 = VAR_4; VAR_6 <= VAR_5; VAR_6++)
    {
        FUNC_1(VAR_1, VAR_6, (LPTSTR)VAR_7, FUNC_0(VAR_7));
        FUNC_2(VAR_3, VAR_2, VAR_0, 0, (LPARAM)VAR_7);
    }
}
