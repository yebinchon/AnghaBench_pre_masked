
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WCHAR ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ nNumDigits; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int *,int ) ;

__attribute__((used)) static VOID
FUNC_2(HWND VAR_7, PGLOBALDATA VAR_8)
{
    WCHAR VAR_9[VAR_6];
    INT VAR_10;


    FUNC_0(VAR_7, VAR_4,
                        VAR_1,
                        (WPARAM)0,
                        (LPARAM)0);


    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
    {

        FUNC_1(VAR_10, VAR_9, VAR_3);

        FUNC_0(VAR_7, VAR_4,
                            VAR_0,
                            0,
                            (LPARAM)VAR_9);
    }


    FUNC_0(VAR_7, VAR_4,
                        VAR_2,
                        (WPARAM)VAR_8->nNumDigits,
                        (LPARAM)0);
}
