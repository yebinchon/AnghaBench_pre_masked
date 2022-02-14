
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int month; int day; int hour; int minutes; int seconds; char ind; int off_hour; int off_minutes; int year; } ;
struct TYPE_6__ {int mmgr; int error; } ;
typedef int HPDF_STATUS ;
typedef scalar_t__ HPDF_InfoType ;
typedef TYPE_1__* HPDF_Dict ;
typedef TYPE_2__ HPDF_Date ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int *) ;
 char* FUNC_7 (scalar_t__) ;

HPDF_STATUS
FUNC_8 (HPDF_Dict VAR_4,
                           HPDF_InfoType VAR_5,
                           HPDF_Date VAR_6)
{
    char VAR_7[VAR_0 + 1];
    char* VAR_8;
    const char* VAR_9 = FUNC_7 (VAR_5);

    FUNC_4((" HPDF_Info_SetInfoDateAttr\n"));

    if (VAR_5 > VAR_1)
        return FUNC_5 (VAR_4->error, VAR_3, 0);

    FUNC_3 (VAR_7, 0, VAR_0 + 1);
    if (VAR_6.month < 1 || 12 < VAR_6.month ||
        VAR_6.day < 1 ||
        23 < VAR_6.hour ||
        59 < VAR_6.minutes ||
        59 < VAR_6.seconds ||
        (VAR_6.ind != '+' && VAR_6.ind != '-' && VAR_6.ind != 'Z' &&
                VAR_6.ind != ' ') ||
        23 < VAR_6.off_hour ||
        59 < VAR_6.off_minutes) {
        return FUNC_5 (VAR_4->error, VAR_2, 0);
    }

    switch (VAR_6.month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (VAR_6.day > 31)
                return FUNC_5 (VAR_4->error, VAR_2, 0);

            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (VAR_6.day > 30)
                return FUNC_5 (VAR_4->error, VAR_2, 0);

            break;
        case 2:
            if (VAR_6.day > 29 || (VAR_6.day == 29 &&
                (VAR_6.year % 4 != 0 ||
                (VAR_6.year % 100 == 0 && VAR_6.year % 400 != 0))))
                return FUNC_5 (VAR_4->error, VAR_2, 0);

            break;
        default:
            return FUNC_5 (VAR_4->error, VAR_2, 0);
    }

    VAR_8 = (char *)FUNC_2 ((HPDF_BYTE *)VAR_7, (HPDF_BYTE *)"D:", 2);
    VAR_8 = FUNC_1 (VAR_8, VAR_6.year, 5);
    VAR_8 = FUNC_1 (VAR_8, VAR_6.month, 3);
    VAR_8 = FUNC_1 (VAR_8, VAR_6.day, 3);
    VAR_8 = FUNC_1 (VAR_8, VAR_6.hour, 3);
    VAR_8 = FUNC_1 (VAR_8, VAR_6.minutes, 3);
    VAR_8 = FUNC_1 (VAR_8, VAR_6.seconds, 3);
    if (VAR_6.ind != ' ') {
        *VAR_8++ = VAR_6.ind;
        VAR_8 = FUNC_1 (VAR_8, VAR_6.off_hour, 3);
        *VAR_8++ = '\'';
        VAR_8 = FUNC_1 (VAR_8, VAR_6.off_minutes, 3);
        *VAR_8++ = '\'';
    }
    *VAR_8 = 0;

    return FUNC_0 (VAR_4, VAR_9, FUNC_6 (VAR_4->mmgr, VAR_7,
                ((void*)0)));
}
