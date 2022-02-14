
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndSelf; struct TYPE_4__* tics; scalar_t__ hwndToolTip; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static LRESULT
FUNC_5 (TRACKBAR_INFO *VAR_0)
{

    if (VAR_0->hwndToolTip)
     FUNC_1 (VAR_0->hwndToolTip);

    FUNC_2 (VAR_0->tics);
    VAR_0->tics = ((void*)0);

    FUNC_4 (VAR_0->hwndSelf, 0, 0);
    FUNC_0 (FUNC_3 (VAR_0->hwndSelf));
    FUNC_2 (VAR_0);

    return 0;
}
