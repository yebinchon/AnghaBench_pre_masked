
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
struct TYPE_7__ {char* lpDecimalSep; char* lpCurrencySymbol; int Grouping; scalar_t__ NegativeOrder; scalar_t__ PositiveOrder; int lpThousandSep; scalar_t__ LeadingZero; scalar_t__ NumDigits; } ;
struct TYPE_6__ {int nCurrGrouping; int UserLCID; int szCurrThousandSep; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;
typedef TYPE_2__ CURRENCYFMTW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,TYPE_2__*,int *,int) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ,int ,int ,int,int ) ;

__attribute__((used)) static VOID
FUNC_2(HWND VAR_6, PGLOBALDATA VAR_7)
{
    WCHAR VAR_8[VAR_4];
    CURRENCYFMTW VAR_9;
    INT VAR_10;


    VAR_9.NumDigits = 0;
    VAR_9.LeadingZero = 0;
    VAR_9.lpDecimalSep = L"";
    VAR_9.lpThousandSep = VAR_7->szCurrThousandSep;
    VAR_9.PositiveOrder = 0;
    VAR_9.NegativeOrder = 0;
    VAR_9.lpCurrencySymbol = L"";

    for (VAR_10 = 0 ; VAR_10 < VAR_5 ; VAR_10++)
    {
       VAR_9.Grouping = VAR_2[VAR_10].nInteger;

       FUNC_0(VAR_7->UserLCID, 0,
                          L"123456789",
                          &VAR_9, VAR_8, VAR_4);
       FUNC_1(VAR_6, VAR_3,
                           VAR_0,
                           -1,
                           (LPARAM)VAR_8);
    }

    FUNC_1(VAR_6, VAR_3,
                        VAR_1,
                        VAR_7->nCurrGrouping,
                        0);
}
