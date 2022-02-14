
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ TLbtnState; scalar_t__ BRbtnState; scalar_t__ nPos; int hwndSelf; } ;
typedef int RECT ;
typedef int POINT ;
typedef TYPE_1__ PAGER_INFO ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_6(PAGER_INFO *VAR_10, INT VAR_11, BOOL VAR_12)
{
    BOOL VAR_13;
    BOOL VAR_14;
    INT VAR_15 = VAR_10->TLbtnState;
    INT VAR_16 = VAR_10->BRbtnState;
    POINT VAR_17;
    RECT VAR_18, VAR_19;


    FUNC_1(VAR_10, &VAR_18, &VAR_19, VAR_8);

    FUNC_0(&VAR_17);
    FUNC_3( VAR_10->hwndSelf, &VAR_17 );


    if (VAR_10->nPos > 0)
    {
        if (VAR_10->TLbtnState == VAR_1 || VAR_10->TLbtnState == VAR_0)
            VAR_10->TLbtnState = VAR_2;
    }
    else if (!VAR_12 && FUNC_2(&VAR_18, VAR_17))
        VAR_10->TLbtnState = VAR_0;
    else
        VAR_10->TLbtnState = VAR_1;

    if (VAR_11 <= 0)
    {
        VAR_10->TLbtnState = VAR_1;
        VAR_10->BRbtnState = VAR_1;
    }
    else if (VAR_10->nPos < VAR_11)
    {
        if (VAR_10->BRbtnState == VAR_1 || VAR_10->BRbtnState == VAR_0)
            VAR_10->BRbtnState = VAR_2;
    }
    else if (!VAR_12 && FUNC_2(&VAR_19, VAR_17))
        VAR_10->BRbtnState = VAR_0;
    else
        VAR_10->BRbtnState = VAR_1;


    VAR_13 =
        ((VAR_15 == VAR_1) != (VAR_10->TLbtnState == VAR_1)) ||
        ((VAR_16 == VAR_1) != (VAR_10->BRbtnState == VAR_1));

    if (VAR_13)
        FUNC_5(VAR_10->hwndSelf, 0, 0, 0, 0, 0,
                     VAR_3 | VAR_6 | VAR_5 |
                     VAR_7 | VAR_4);


    VAR_14 = (VAR_15 != VAR_10->TLbtnState) ||
                  (VAR_16 != VAR_10->BRbtnState);
    if (VAR_14)
        FUNC_4(VAR_10->hwndSelf, VAR_9, 0, 0);
}
