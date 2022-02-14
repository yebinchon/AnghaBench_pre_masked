
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_3__ {int Grouping; char* lpDecimalSep; char* lpThousandSep; scalar_t__ NegativeOrder; scalar_t__ LeadingZero; scalar_t__ NumDigits; } ;
typedef TYPE_1__ NUMBERFMTW ;
typedef int LPWSTR ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ,int ,int *,TYPE_1__*,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int *,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static
VOID
FUNC_3(LPWSTR VAR_2, unsigned VAR_3)
{
    WCHAR VAR_4[32];
    NUMBERFMTW VAR_5;
    unsigned VAR_6;

    FUNC_1(VAR_3 / (1024*1024), VAR_4, 10);

    VAR_5.NumDigits = 0;
    VAR_5.LeadingZero = 0;
    VAR_5.Grouping = 3;
    VAR_5.lpDecimalSep = L"";
    VAR_5.lpThousandSep = L" ";
    VAR_5.NegativeOrder = 0;

    VAR_6 = FUNC_0(VAR_1, 0, VAR_4, &VAR_5, VAR_2, VAR_0 - 3);
    if (VAR_6)
        --VAR_6;
    FUNC_2(VAR_2 + VAR_6, L" MB");
}
