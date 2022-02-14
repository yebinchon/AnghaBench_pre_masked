
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ fErase; int rcPaint; } ;
struct TYPE_8__ {int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ PAINTSTRUCT ;
typedef int LRESULT ;
typedef scalar_t__ HDC ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_3 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static LRESULT
FUNC_6 (const REBAR_INFO *VAR_0, HDC VAR_1)
{
    if (VAR_1) {
        FUNC_4("painting\n");



        FUNC_3 (VAR_0, VAR_1);
    } else {
        PAINTSTRUCT VAR_2;
        VAR_1 = FUNC_0 (VAR_0->hwndSelf, &VAR_2);
        FUNC_4("painting (%s)\n", FUNC_5(&VAR_2.rcPaint));
        if (VAR_2.fErase) {

            FUNC_2 (VAR_0, VAR_1);
        }
        FUNC_3 (VAR_0, VAR_1);
 FUNC_1 (VAR_0->hwndSelf, &VAR_2);
    }

    return 0;
}
