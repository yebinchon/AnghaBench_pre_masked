
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wState; int dwStyle; int buttonRect; int self; int textRect; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef int HTHEME ;
typedef TYPE_1__ HEADCOMBO ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,int,int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static LRESULT FUNC_10(HTHEME VAR_9, HEADCOMBO *VAR_10, HDC VAR_11)
{
    int VAR_12;
    RECT VAR_13;


    if (FUNC_1(VAR_10) != VAR_3)
        FUNC_6(VAR_10->self, &VAR_13);
    else
    {
        VAR_13 = VAR_10->textRect;
        FUNC_7(&VAR_13, FUNC_5(), FUNC_5());
        FUNC_7(&VAR_13, FUNC_2(), FUNC_3());
    }

    FUNC_4(VAR_9, VAR_11, 0, FUNC_9(VAR_10->self) ? VAR_6 : VAR_4, &VAR_13, ((void*)0));


    if (!FUNC_8(&VAR_10->buttonRect))
    {
        if (!FUNC_9(VAR_10->self))
            VAR_12 = VAR_4;
        else if (VAR_10->wState & VAR_0)
            VAR_12 = VAR_7;
        else if (VAR_10->wState & VAR_1)
            VAR_12 = VAR_5;
        else
            VAR_12 = VAR_6;
        FUNC_4(VAR_9, VAR_11, VAR_8, VAR_12, &VAR_10->buttonRect, ((void*)0));
    }

    if ((VAR_10->dwStyle & VAR_2) == VAR_2)
        FUNC_0(VAR_10, VAR_11);

    return 0;
}
