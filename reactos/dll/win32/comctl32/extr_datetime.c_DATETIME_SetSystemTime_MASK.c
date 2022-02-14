
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ wYear; int wMonth; int wDay; int wHour; int wMinute; int wSecond; int wMilliseconds; } ;
struct TYPE_9__ {int dwStyle; int hwndSelf; int hwndCheckbut; void* dateValid; TYPE_1__ date; int hMonthCal; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int LPARAM ;
typedef scalar_t__ DWORD ;
typedef TYPE_2__ DATETIME_INFO ;
typedef void* BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__ const*) ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int *,void*) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*,scalar_t__,int,int,int,int,int) ;
 void* VAR_8 ;

__attribute__((used)) static BOOL
FUNC_6 (DATETIME_INFO *VAR_9, DWORD VAR_10, const SYSTEMTIME *VAR_11)
{
    if (!VAR_11) return VAR_4;

    FUNC_5("%04d/%02d/%02d %02d:%02d:%02d\n",
          VAR_11->wYear, VAR_11->wMonth, VAR_11->wDay,
          VAR_11->wHour, VAR_11->wMinute, VAR_11->wSecond);

    if (VAR_10 == VAR_6) {
        if (VAR_11->wYear == 0 ||
            VAR_11->wMonth < 1 || VAR_11->wMonth > 12 ||
            VAR_11->wDay < 1 ||
            VAR_11->wDay > FUNC_3(VAR_11->wMonth, VAR_11->wYear) ||
            VAR_11->wHour > 23 ||
            VAR_11->wMinute > 59 ||
            VAR_11->wSecond > 59 ||
            VAR_11->wMilliseconds > 999
           )
            return VAR_4;


        if (!FUNC_0(VAR_9, VAR_11))
            return VAR_8;

        VAR_9->dateValid = VAR_8;
        VAR_9->date = *VAR_11;

        FUNC_2(&VAR_9->date, VAR_8);

        FUNC_4 (VAR_9->hMonthCal, VAR_7, 0, (LPARAM)(&VAR_9->date));
        FUNC_4 (VAR_9->hwndCheckbut, VAR_0, VAR_1, 0);
    } else if ((VAR_9->dwStyle & VAR_3) && (VAR_10 == VAR_5)) {
        VAR_9->dateValid = VAR_4;
        FUNC_4 (VAR_9->hwndCheckbut, VAR_0, VAR_2, 0);
    }
    else
        return VAR_4;

    FUNC_1(VAR_9->hwndSelf, ((void*)0), VAR_8);
    return VAR_8;
}
