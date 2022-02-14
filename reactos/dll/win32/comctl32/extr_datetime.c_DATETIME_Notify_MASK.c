
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int wDayOfWeek; int wDay; int wMonth; int wYear; } ;
struct TYPE_12__ {scalar_t__ hUpdown; int pendingUpdown; int hwndSelf; int hwndCheckbut; TYPE_1__ date; int hMonthCal; int dateValid; } ;
struct TYPE_11__ {scalar_t__ code; scalar_t__ hwndFrom; } ;
struct TYPE_10__ {int iDelta; } ;
typedef TYPE_2__ NM_UPDOWN ;
typedef TYPE_3__ NMHDR ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_4__ DATETIME_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,scalar_t__,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static LRESULT
FUNC_6 (DATETIME_INFO *VAR_8, const NMHDR *VAR_9)
{
    FUNC_5 ("Got notification %x from %p\n", VAR_9->code, VAR_9->hwndFrom);
    FUNC_5 ("info: %p %p %p\n", VAR_8->hwndSelf, VAR_8->hMonthCal, VAR_8->hUpdown);

    if (VAR_9->code == VAR_4) {
        FUNC_4(VAR_8->hMonthCal, VAR_5);
        VAR_8->dateValid = VAR_6;
        FUNC_3 (VAR_8->hMonthCal, VAR_3, 0, (LPARAM)&VAR_8->date);
        FUNC_5("got from calendar %04d/%02d/%02d day of week %d\n",
        VAR_8->date.wYear, VAR_8->date.wMonth, VAR_8->date.wDay, VAR_8->date.wDayOfWeek);
        FUNC_3 (VAR_8->hwndCheckbut, VAR_0, VAR_1, 0);
        FUNC_2(VAR_8->hwndSelf, ((void*)0), VAR_6);
        FUNC_0 (VAR_8);
        FUNC_1(VAR_8, VAR_2);
    }
    if ((VAR_9->hwndFrom == VAR_8->hUpdown) && (VAR_9->code == VAR_7)) {
        const NM_UPDOWN *VAR_10 = (const NM_UPDOWN*)VAR_9;
        FUNC_5("Delta pos %d\n", VAR_10->iDelta);
        VAR_8->pendingUpdown = VAR_10->iDelta;
    }
    return 0;
}
