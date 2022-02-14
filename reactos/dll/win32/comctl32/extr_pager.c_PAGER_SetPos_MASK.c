
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nPos; int hwndSelf; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_4(PAGER_INFO* VAR_0, INT VAR_1, BOOL VAR_2, BOOL VAR_3)
{
    INT VAR_4 = FUNC_0(VAR_0, VAR_3);
    INT VAR_5 = VAR_0->nPos;

    if ((VAR_4 <= 0) || (VAR_1 < 0))
        VAR_0->nPos = 0;
    else if (VAR_1 > VAR_4)
        VAR_0->nPos = VAR_4;
    else
        VAR_0->nPos = VAR_1;

    FUNC_3("[%p] pos=%d, oldpos=%d\n", VAR_0->hwndSelf, VAR_0->nPos, VAR_5);

    if (VAR_0->nPos != VAR_5)
    {

        FUNC_2(VAR_0, VAR_4, !VAR_2);
        FUNC_1(VAR_0);
    }

    return 0;
}
