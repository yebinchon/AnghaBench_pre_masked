
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int cAltEntry; int * rgAltEntry; } ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef TYPE_1__ CERT_ALT_NAME_INFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int *,int *,int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4(DWORD VAR_6, DWORD VAR_7,
 const CERT_ALT_NAME_INFO *VAR_8, LPWSTR VAR_9, DWORD *VAR_10)
{
    DWORD VAR_11, VAR_12, VAR_13 = 0;
    BOOL VAR_14 = VAR_3;
    LPCWSTR VAR_15;
    DWORD VAR_16;

    if (VAR_6 & VAR_0)
    {
        VAR_15 = VAR_5;
        VAR_16 = FUNC_3(VAR_5) * sizeof(WCHAR);
    }
    else
    {
        VAR_15 = VAR_4;
        VAR_16 = FUNC_3(VAR_4) * sizeof(WCHAR);
    }

    for (VAR_11 = 0; VAR_14 && VAR_11 < VAR_8->cAltEntry; VAR_11++)
    {
        VAR_14 = FUNC_0(VAR_6, VAR_7,
         &VAR_8->rgAltEntry[VAR_11], ((void*)0), &VAR_12);
        if (VAR_14)
        {
            VAR_13 += VAR_12 - sizeof(WCHAR);
            if (VAR_11 < VAR_8->cAltEntry - 1)
                VAR_13 += VAR_16;
        }
    }
    if (VAR_14)
    {
        VAR_13 += sizeof(WCHAR);
        if (!VAR_9)
            *VAR_10 = VAR_13;
        else if (*VAR_10 < VAR_13)
        {
            *VAR_10 = VAR_13;
            FUNC_1(VAR_1);
            VAR_14 = VAR_2;
        }
        else
        {
            *VAR_10 = VAR_13;
            for (VAR_11 = 0; VAR_14 && VAR_11 < VAR_8->cAltEntry; VAR_11++)
            {
                VAR_14 = FUNC_0(VAR_6, VAR_7,
                 &VAR_8->rgAltEntry[VAR_11], VAR_9, &VAR_12);
                if (VAR_14)
                {
                    VAR_9 += VAR_12 / sizeof(WCHAR) - 1;
                    if (VAR_11 < VAR_8->cAltEntry - 1)
                    {
                        FUNC_2(VAR_9, VAR_15);
                        VAR_9 += VAR_16 / sizeof(WCHAR);
                    }
                }
            }
        }
    }
    return VAR_14;
}
