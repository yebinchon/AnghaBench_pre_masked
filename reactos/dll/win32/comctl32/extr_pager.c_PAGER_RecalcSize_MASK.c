
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nPos; scalar_t__ hwndChild; int hwndSelf; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_4(PAGER_INFO *VAR_2)
{
    FUNC_3("[%p]\n", VAR_2->hwndSelf);

    if (VAR_2->hwndChild)
    {
        INT VAR_3 = FUNC_0(VAR_2, VAR_1);

        if (VAR_3 <= 0)
        {
            VAR_2->nPos = -1;
            FUNC_2(VAR_2, 0, VAR_0, VAR_1);
        }
        else
            FUNC_1(VAR_2);
    }

    return 1;
}
