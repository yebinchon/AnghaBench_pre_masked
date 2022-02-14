
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {void* nCurrDigits; void* nCurrNegFormat; void* nCurrPosFormat; int szCurrThousandSep; int szCurrDecimalSep; void* nCurrGrouping; int szCurrSymbol; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef void* INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void**) ;
 int FUNC_1 (int ,int ,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static
BOOL
FUNC_3(
     HWND VAR_12,
     PGLOBALDATA VAR_13)
{
    WCHAR VAR_14[VAR_9];
    WCHAR VAR_15[VAR_8];
    WCHAR VAR_16[VAR_10];
    INT VAR_17;
    INT VAR_18;
    INT VAR_19;
    INT VAR_20;


    FUNC_1(VAR_12,
                            VAR_7,
                            VAR_14,
                            VAR_9);

    if (VAR_14[0] == L'\0')
    {


        return VAR_0;
    }


    FUNC_0(VAR_12,
                             VAR_6,
                             &VAR_17);


    FUNC_0(VAR_12,
                             VAR_5,
                             &VAR_18);


    FUNC_1(VAR_12,
                            VAR_2,
                            VAR_15,
                            VAR_8);

    if (VAR_15[0] == L'\0')
    {


        return VAR_0;
    }


    FUNC_0(VAR_12,
                             VAR_1,
                             &VAR_19);


    FUNC_1(VAR_12,
                            VAR_4,
                            VAR_16,
                            VAR_10);

    if (VAR_16[0] == L'\0')
    {


        return VAR_0;
    }


    FUNC_0(VAR_12,
                             VAR_3,
                             &VAR_20);


    FUNC_2(VAR_13->szCurrSymbol, VAR_14);
    VAR_13->nCurrGrouping = VAR_20;
    FUNC_2(VAR_13->szCurrDecimalSep, VAR_15);
    FUNC_2(VAR_13->szCurrThousandSep, VAR_16);
    VAR_13->nCurrPosFormat = VAR_17;
    VAR_13->nCurrNegFormat = VAR_18;
    VAR_13->nCurrDigits = VAR_19;

    return VAR_11;
}
