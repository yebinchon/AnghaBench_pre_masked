
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int hDisplayPage; int hGeneralPage; int hTab; } ;
typedef TYPE_1__* PINFO ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static VOID
FUNC_3(PINFO VAR_2)
{
    switch (FUNC_2(VAR_2->hTab))
    {
        case 0:
            FUNC_1(VAR_2->hGeneralPage, VAR_1);
            FUNC_1(VAR_2->hDisplayPage, VAR_0);
            FUNC_0(VAR_2->hGeneralPage);
            break;
        case 1:
            FUNC_1(VAR_2->hGeneralPage, VAR_0);
            FUNC_1(VAR_2->hDisplayPage, VAR_1);
            FUNC_0(VAR_2->hDisplayPage);
            break;
    }
}
