
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ nNumNegFormat; int szNumNegativeSign; int szNumDecimalSep; } ;
typedef int * PWSTR ;
typedef TYPE_1__* PGLOBALDATA ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int * FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int ** VAR_5 ;

__attribute__((used)) static VOID
FUNC_4(HWND VAR_6, PGLOBALDATA VAR_7)
{
    PWSTR VAR_8, VAR_9;
    INT VAR_10;


    FUNC_3(VAR_6, VAR_3,
                        VAR_1,
                        (WPARAM)0,
                        (LPARAM)0);


    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    {

        VAR_8 = FUNC_2(VAR_5[VAR_10],
                                   VAR_7->szNumDecimalSep,
                                   L",");
        if (VAR_8 != ((void*)0))
        {

            VAR_9 = FUNC_2(VAR_8,
                                       VAR_7->szNumNegativeSign,
                                       L"-");
            if (VAR_9 != ((void*)0))
            {
                FUNC_3(VAR_6, VAR_3,
                                    VAR_0,
                                    0,
                                    (LPARAM)VAR_9);

                FUNC_1(FUNC_0(), 0, VAR_9);
            }

            FUNC_1(FUNC_0(), 0, VAR_8);
        }
    }


    FUNC_3(VAR_6, VAR_3,
                        VAR_2,
                        (WPARAM)VAR_7->nNumNegFormat,
                        (LPARAM)0);
}
