
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int wYear; int wMonth; int wDay; int wHour; int wMinute; int wSecond; } ;
struct TYPE_10__ {int select; int nCharsEntered; int* fieldspec; int* charsEntered; TYPE_1__ date; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__ DATETIME_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;

 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ VAR_3 ;
__attribute__((used)) static void
FUNC_4 (DATETIME_INFO *VAR_4)
{
    int VAR_5 = VAR_4->select & VAR_0;
    int VAR_6, VAR_7 = 0;
    BOOL VAR_8 = VAR_1;
    SYSTEMTIME VAR_9 = VAR_4->date;
    int VAR_10;

    if (VAR_4->select == -1 || VAR_4->nCharsEntered == 0)
        return;

    if ((VAR_4->fieldspec[VAR_5] == 136) ||
        (VAR_4->fieldspec[VAR_5] == 128))
        VAR_7 = VAR_4->charsEntered[0];
    else {
        for (VAR_6=0; VAR_6<VAR_4->nCharsEntered; VAR_6++)
            VAR_7 = VAR_7 * 10 + VAR_4->charsEntered[VAR_6] - '0';
    }

    VAR_4->nCharsEntered = 0;

    switch (VAR_4->fieldspec[VAR_5]) {
        case 137:
        case 129:
            VAR_10 = VAR_9.wYear;
            VAR_9.wYear = VAR_9.wYear - (VAR_9.wYear%100) + VAR_7;

            if (FUNC_0(VAR_4, &VAR_9))
                VAR_8 = VAR_3;
            else
                VAR_9.wYear = VAR_10;

            break;
        case 144:
        case 145:
            VAR_10 = VAR_9.wYear;
            VAR_9.wYear = VAR_7;

            if (FUNC_0(VAR_4, &VAR_9))
                VAR_8 = VAR_3;
            else
                VAR_9.wYear = VAR_10;

            break;
        case 139:
        case 131:
            VAR_9.wMonth = VAR_7;
            VAR_8 = VAR_3;
            break;
        case 141:
        case 133:
            VAR_9.wDay = VAR_7;
            break;
        case 143:
        case 135:
            if (VAR_7 >= 24)
                VAR_7 -= 20;

            if (VAR_7 >= 13)
                VAR_9.wHour = VAR_7;
            else if (VAR_7 != 0) {
                if (VAR_9.wHour >= 12)
                    VAR_9.wHour = (VAR_7 == 12 ? 12 : VAR_7 + 12);
                else
                    VAR_9.wHour = (VAR_7 == 12 ? 0 : VAR_7);
            }
            break;
        case 142:
        case 134:
            VAR_9.wHour = VAR_7;
            break;
        case 140:
        case 132:
            VAR_9.wMinute = VAR_7;
            break;
        case 138:
        case 130:
            VAR_9.wSecond = VAR_7;
            break;
        case 136:
        case 128:
            if (VAR_7 == 'a' || VAR_7 == 'A') {
                if (VAR_9.wHour >= 12)
                    VAR_9.wHour -= 12;
            } else if (VAR_7 == 'p' || VAR_7 == 'P') {
                if (VAR_9.wHour < 12)
                    VAR_9.wHour += 12;
            }
            break;
    }

    if (VAR_8 && VAR_9.wDay > FUNC_3(VAR_9.wMonth, VAR_9.wYear))
        VAR_9.wDay = FUNC_3(VAR_9.wMonth, VAR_9.wYear);

    if (FUNC_2(VAR_4, VAR_2, &VAR_9))
        FUNC_1 (VAR_4);
}
