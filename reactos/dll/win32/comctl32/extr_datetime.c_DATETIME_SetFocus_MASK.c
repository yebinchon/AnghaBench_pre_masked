
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hMonthCal; scalar_t__ haveFocus; int hwndSelf; int bDropdownEnabled; } ;
typedef int LRESULT ;
typedef scalar_t__ HWND ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_5 (DATETIME_INFO *VAR_5, HWND VAR_6)
{
    FUNC_4("got focus from %p\n", VAR_6);


    if (VAR_5->hMonthCal && (VAR_6 == VAR_5->hMonthCal) &&
        FUNC_2(VAR_5->hMonthCal))
    {
        FUNC_3(VAR_5->hMonthCal, VAR_4);
        FUNC_0(VAR_5, VAR_1);



        VAR_5->bDropdownEnabled = VAR_2;
        return 0;
    }

    if (VAR_5->haveFocus == 0) {
 FUNC_0 (VAR_5, VAR_3);
 VAR_5->haveFocus = VAR_0;
    }

    FUNC_1(VAR_5->hwndSelf, ((void*)0), VAR_2);

    return 0;
}
