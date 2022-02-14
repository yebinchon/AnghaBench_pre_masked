
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_6__ {int Grouping; int NegativeOrder; scalar_t__ PositiveOrder; int lpCurrencySymbol; int lpThousandSep; int lpDecimalSep; scalar_t__ LeadingZero; int NumDigits; } ;
struct TYPE_5__ {int nCurrNegFormat; int UserLCID; int szCurrSymbol; int szCurrThousandSep; int szCurrDecimalSep; int nCurrDigits; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_2__ CURRENCYFMTW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,TYPE_2__*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int,int ) ;

__attribute__((used)) static VOID
FUNC_2(HWND VAR_4, PGLOBALDATA VAR_5)
{
    WCHAR VAR_6[VAR_3];
    CURRENCYFMTW VAR_7;
    int VAR_8;


    VAR_7.NumDigits = VAR_5->nCurrDigits;
    VAR_7.LeadingZero = 0;
    VAR_7.Grouping = 3;
    VAR_7.lpDecimalSep = VAR_5->szCurrDecimalSep;
    VAR_7.lpThousandSep = VAR_5->szCurrThousandSep;
    VAR_7.lpCurrencySymbol = VAR_5->szCurrSymbol;
    VAR_7.PositiveOrder = 0;

    for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
    {
        VAR_7.NegativeOrder = VAR_8;
        FUNC_0(VAR_5->UserLCID, 0,
                           L"-1.1",
                           &VAR_7, VAR_6, VAR_3);

        FUNC_1(VAR_4, VAR_2,
                            VAR_0,
                            -1,
                            (LPARAM)VAR_6);
    }

    FUNC_1(VAR_4, VAR_2,
                        VAR_1,
                        VAR_5->nCurrNegFormat,
                        0);
}
