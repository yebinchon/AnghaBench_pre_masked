
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_5__ {scalar_t__ Type; size_t dwEnumOptions; size_t cchValueLength; int * pszValue; TYPE_1__* pEnumOptions; } ;
struct TYPE_4__ {int pszValue; } ;
typedef TYPE_2__* PPARAMETER ;
typedef size_t INT ;
typedef int HWND ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int ) ;
 size_t FUNC_8 (int ) ;

__attribute__((used)) static
VOID
FUNC_9(
     HWND VAR_4,
     PPARAMETER VAR_5)
{
    INT VAR_6, VAR_7;

    if (VAR_5->Type == VAR_1)
    {
        VAR_6 = FUNC_0(FUNC_3(VAR_4, VAR_3));
        if (VAR_6 != VAR_0 && VAR_6 < VAR_5->dwEnumOptions)
        {
            VAR_7 = FUNC_8(VAR_5->pEnumOptions[VAR_6].pszValue);
            if (VAR_7 > VAR_5->cchValueLength)
            {
                if (VAR_5->pszValue != ((void*)0))
                    FUNC_6(FUNC_4(), 0, VAR_5->pszValue);

                VAR_5->pszValue = FUNC_5(FUNC_4(), 0, (VAR_7 + 1) * sizeof(WCHAR));
            }

            if (VAR_5->pszValue != ((void*)0))
            {
                FUNC_7(VAR_5->pszValue,
                       VAR_5->pEnumOptions[VAR_6].pszValue);
                VAR_5->cchValueLength = VAR_7;
            }
        }
    }
    else
    {
        VAR_7 = FUNC_2(FUNC_3(VAR_4, VAR_2));
        if (VAR_7 > VAR_5->cchValueLength)
        {
            if (VAR_5->pszValue != ((void*)0))
                FUNC_6(FUNC_4(), 0, VAR_5->pszValue);

            VAR_5->pszValue = FUNC_5(FUNC_4(), 0, (VAR_7 + 1) * sizeof(WCHAR));
        }

        if (VAR_5->pszValue != ((void*)0))
        {
            FUNC_1(FUNC_3(VAR_4, VAR_2),
                         VAR_5->pszValue,
                         VAR_7 + 1);
            VAR_5->cchValueLength = VAR_7;
        }
    }
}
