
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int VOID ;
struct TYPE_3__ {int nCurrDigits; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static VOID
FUNC_1(HWND VAR_4, PGLOBALDATA VAR_5)
{
    WCHAR VAR_6[VAR_3];
    int VAR_7;


    for (VAR_7 = 0; VAR_7 < 10; VAR_7++)
    {
        VAR_6[0] = L'0' + VAR_7;
        VAR_6[1] = 0;
        FUNC_0(VAR_4, VAR_2,
                            VAR_0,
                            0,
                            (LPARAM)VAR_6);
    }

    FUNC_0(VAR_4, VAR_2,
                        VAR_1,
                        VAR_5->nCurrDigits,
                        0);
}
