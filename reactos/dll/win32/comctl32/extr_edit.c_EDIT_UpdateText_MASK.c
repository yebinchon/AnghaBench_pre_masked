
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int hwndSelf; } ;
typedef int RECT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,int ) ;

__attribute__((used)) static void FUNC_2(EDITSTATE *VAR_2, const RECT *VAR_3, BOOL VAR_4)
{
    if (VAR_2->flags & VAR_0) {
        VAR_2->flags &= ~VAR_0;
        FUNC_0(VAR_2, VAR_1);
    }
    FUNC_1(VAR_2->hwndSelf, VAR_3, VAR_4);
}
