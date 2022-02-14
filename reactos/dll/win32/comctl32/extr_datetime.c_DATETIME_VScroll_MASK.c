
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int select; scalar_t__ pendingUpdown; int hwndSelf; int haveFocus; } ;
typedef scalar_t__ SHORT ;
typedef int LRESULT ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_4 (DATETIME_INFO *VAR_3, WORD VAR_4)
{
    int VAR_5 = VAR_3->select & VAR_0;

    if ((SHORT)FUNC_3(VAR_4) != VAR_1) return 0;
    if (!(VAR_3->haveFocus)) return 0;
    if ((VAR_5==0) && (VAR_3->select)) return 0;

    if (VAR_3->pendingUpdown >= 0) {
 FUNC_0 (VAR_3, VAR_5, 1);
 FUNC_1 (VAR_3);
    }
    else {
 FUNC_0 (VAR_3, VAR_5, -1);
 FUNC_1 (VAR_3);
    }

    FUNC_2(VAR_3->hwndSelf, ((void*)0), VAR_2);

    return 0;
}
