
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int hcurArrow; int hcurDivopen; int hcurDivider; int hwndSelf; } ;
typedef int POINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int INT ;
typedef TYPE_1__ HEADER_INFO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static LRESULT
FUNC_7 (HEADER_INFO *VAR_2, LPARAM VAR_3)
{
    POINT VAR_4;
    UINT VAR_5;
    INT VAR_6;

    FUNC_6("code=0x%X  id=0x%X\n", FUNC_3(VAR_3), FUNC_2(VAR_3));

    FUNC_0 (&VAR_4);
    FUNC_4 (VAR_2->hwndSelf, &VAR_4);

    FUNC_1 (VAR_2, &VAR_4, &VAR_5, &VAR_6);

    if (VAR_5 == VAR_0)
        FUNC_5 (VAR_2->hcurDivider);
    else if (VAR_5 == VAR_1)
        FUNC_5 (VAR_2->hcurDivopen);
    else
        FUNC_5 (VAR_2->hcurArrow);

    return 0;
}
