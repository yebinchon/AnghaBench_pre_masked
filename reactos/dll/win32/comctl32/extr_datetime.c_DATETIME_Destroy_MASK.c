
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* fieldspec; struct TYPE_4__* fieldRect; struct TYPE_4__* buflen; int hwndSelf; scalar_t__ hMonthCal; scalar_t__ hUpdown; scalar_t__ hwndCheckbut; } ;
typedef int LRESULT ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static LRESULT
FUNC_3 (DATETIME_INFO *VAR_0)
{
    if (VAR_0->hwndCheckbut)
 FUNC_0(VAR_0->hwndCheckbut);
    if (VAR_0->hUpdown)
 FUNC_0(VAR_0->hUpdown);
    if (VAR_0->hMonthCal)
        FUNC_0(VAR_0->hMonthCal);
    FUNC_2( VAR_0->hwndSelf, 0, 0 );
    FUNC_1 (VAR_0->buflen);
    FUNC_1 (VAR_0->fieldRect);
    FUNC_1 (VAR_0->fieldspec);
    FUNC_1 (VAR_0);
    return 0;
}
