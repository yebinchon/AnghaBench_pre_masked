
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int style; int hwndSelf; scalar_t__ wheelDeltaRemainder; int selection_end; int selection_start; int flags; } ;
typedef int LRESULT ;
typedef scalar_t__ HTHEME ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int *,int) ;

__attribute__((used)) static LRESULT FUNC_4(HTHEME VAR_6, EDITSTATE *VAR_7)
{
    UINT VAR_8 = VAR_4 | VAR_5;

    VAR_7->flags &= ~VAR_0;
    FUNC_0();
    if (!(VAR_7->style & VAR_2))
        FUNC_1(VAR_7, VAR_7->selection_start, VAR_7->selection_end);
    FUNC_2(VAR_7, VAR_1);

    VAR_7->wheelDeltaRemainder = 0;

    if (VAR_6)
        VAR_8 |= VAR_3;

    FUNC_3(VAR_7->hwndSelf, ((void*)0), ((void*)0), VAR_8);
    return 0;
}
