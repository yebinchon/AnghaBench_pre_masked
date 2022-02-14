
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_8__ {int nInteger; } ;
struct TYPE_7__ {int lpCurrencySymbol; int PositiveOrder; int NegativeOrder; int lpThousandSep; int lpDecimalSep; int Grouping; int LeadingZero; int NumDigits; } ;
struct TYPE_6__ {size_t nCurrGrouping; int UserLCID; int szCurrSymbol; int nCurrPosFormat; int nCurrNegFormat; int szCurrThousandSep; int szCurrDecimalSep; int nNumLeadingZero; int nCurrDigits; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_2__ CURRENCYFMTW ;


 int FUNC_0 (int ,int ,int ,TYPE_2__*,int *,int) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static VOID
FUNC_2(HWND VAR_7, PGLOBALDATA VAR_8)
{
    WCHAR VAR_9[VAR_3];
    CURRENCYFMTW VAR_10;

    VAR_10.NumDigits = VAR_8->nCurrDigits;
    VAR_10.LeadingZero = VAR_8->nNumLeadingZero;
    VAR_10.Grouping = VAR_0[VAR_8->nCurrGrouping].nInteger;
    VAR_10.lpDecimalSep = VAR_8->szCurrDecimalSep;
    VAR_10.lpThousandSep = VAR_8->szCurrThousandSep;
    VAR_10.NegativeOrder = VAR_8->nCurrNegFormat;
    VAR_10.PositiveOrder = VAR_8->nCurrPosFormat;
    VAR_10.lpCurrencySymbol = VAR_8->szCurrSymbol;


    FUNC_0(VAR_8->UserLCID, 0,
                       VAR_5,
                       &VAR_10, VAR_9, VAR_3);

    FUNC_1(VAR_7, VAR_2, VAR_6, 0, (LPARAM)VAR_9);


    FUNC_0(VAR_8->UserLCID, 0,
                       VAR_4,
                       &VAR_10, VAR_9, VAR_3);

    FUNC_1(VAR_7, VAR_1, VAR_6, 0, (LPARAM)VAR_9);
}
