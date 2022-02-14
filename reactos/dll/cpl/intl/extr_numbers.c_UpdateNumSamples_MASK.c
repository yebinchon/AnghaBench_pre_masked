
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
struct TYPE_7__ {int NegativeOrder; int lpThousandSep; int lpDecimalSep; int Grouping; int LeadingZero; int NumDigits; } ;
struct TYPE_6__ {size_t nNumGrouping; int UserLCID; int nNumNegFormat; int szNumThousandSep; int szNumDecimalSep; int nNumLeadingZero; int nNumDigits; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef TYPE_2__ NUMBERFMT ;
typedef int LPARAM ;
typedef int HWND ;


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
FUNC_2(HWND VAR_7,
                 PGLOBALDATA VAR_8)
{
    WCHAR VAR_9[VAR_3];
    NUMBERFMT VAR_10;

    VAR_10.NumDigits = VAR_8->nNumDigits;
    VAR_10.LeadingZero = VAR_8->nNumLeadingZero;
    VAR_10.Grouping = VAR_0[VAR_8->nNumGrouping].nInteger;
    VAR_10.lpDecimalSep = VAR_8->szNumDecimalSep;
    VAR_10.lpThousandSep = VAR_8->szNumThousandSep;
    VAR_10.NegativeOrder = VAR_8->nNumNegFormat;


    FUNC_0(VAR_8->UserLCID,
                     0,
                     VAR_5,
                     &VAR_10,
                     VAR_9,
                     VAR_3);

    FUNC_1(VAR_7, VAR_2,
                        VAR_6,
                        0,
                        (LPARAM)VAR_9);


    FUNC_0(VAR_8->UserLCID,
                     0,
                     VAR_4,
                     &VAR_10,
                     VAR_9,
                     VAR_3);

    FUNC_1(VAR_7, VAR_1,
                        VAR_6,
                        0,
                        (LPARAM)VAR_9);
}
