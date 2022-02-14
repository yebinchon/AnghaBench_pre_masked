
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int VOID ;
typedef int TCHAR ;
typedef scalar_t__ POWER_ACTION ;
typedef size_t LRESULT ;
typedef scalar_t__ LPARAM ;
typedef int INT ;
typedef int HWND ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int VAR_3 ;
 size_t FUNC_1 (int ,int ,int,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static VOID
FUNC_2(HWND VAR_5, INT VAR_6, LPARAM VAR_7, POWER_ACTION * VAR_8)
{
    TCHAR VAR_9[VAR_3];
    LRESULT VAR_10;

    if (FUNC_0(VAR_4, VAR_6, VAR_9, VAR_3) < VAR_3)
    {
        VAR_10 = FUNC_1(VAR_5, VAR_1, -1, (LPARAM)VAR_9);
        if (VAR_10 != VAR_0)
        {
            FUNC_1(VAR_5, VAR_2, (WPARAM)VAR_10, VAR_7);
            VAR_8[VAR_10] = (POWER_ACTION)VAR_7;
        }
    }
}
