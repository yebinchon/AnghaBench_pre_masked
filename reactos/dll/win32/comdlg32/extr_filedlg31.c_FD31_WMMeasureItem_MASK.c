
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int itemHeight; } ;
typedef TYPE_1__* LPMEASUREITEMSTRUCT ;
typedef scalar_t__ LPARAM ;
typedef int LONG ;


 int FUNC_0 () ;
 int VAR_0 ;

__attribute__((used)) static LONG FUNC_1(LPARAM VAR_1)
{
    LPMEASUREITEMSTRUCT VAR_2;

    VAR_2 = (LPMEASUREITEMSTRUCT)VAR_1;
    VAR_2->itemHeight = FUNC_0();
    return VAR_0;
}
