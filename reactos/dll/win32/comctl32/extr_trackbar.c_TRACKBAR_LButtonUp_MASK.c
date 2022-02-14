
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int lPos; int hwndSelf; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static LRESULT
FUNC_6 (TRACKBAR_INFO *VAR_7)
{
    if (VAR_7->flags & VAR_3) {
        FUNC_5 (VAR_7, VAR_6 | (VAR_7->lPos<<16));
        FUNC_5 (VAR_7, VAR_4);
        VAR_7->flags &= ~VAR_3;
        FUNC_1 ();
 FUNC_4(VAR_7, VAR_1);
        FUNC_2(VAR_7, VAR_0);
 FUNC_3(VAR_7, VAR_7->lPos);
    }
    if (VAR_7->flags & VAR_2) {
 FUNC_0 (VAR_7->hwndSelf, VAR_5);
        VAR_7->flags &= ~VAR_2;
        FUNC_5 (VAR_7, VAR_4);
        FUNC_1 ();
 FUNC_4(VAR_7, VAR_1);
    }

    return 0;
}
