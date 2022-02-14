
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int wState; int textRect; int buttonRect; int self; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef TYPE_1__ HEADCOMBO ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *,scalar_t__) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static LRESULT FUNC_13(HEADCOMBO *VAR_3, HDC VAR_4)
{
    HBRUSH VAR_5, VAR_6;

    FUNC_12("hdc=%p\n", VAR_4);





    VAR_6 = FUNC_4(VAR_3, VAR_4);
    VAR_5 = FUNC_11(VAR_4, VAR_6);
    if (!(VAR_3->wState & VAR_0))
        FUNC_6(VAR_4, &VAR_3->textRect, VAR_6);




    FUNC_0(VAR_3->self, VAR_3, VAR_4);

    if (!FUNC_10(&VAR_3->buttonRect))
        FUNC_1(VAR_3, VAR_4, VAR_3->buttonRect);


    if (FUNC_3(VAR_3) != VAR_1)
    {
        RECT VAR_7 = VAR_3->textRect;

        FUNC_9(&VAR_7, FUNC_5(), FUNC_5());

        FUNC_7(VAR_4, &VAR_7, FUNC_8(VAR_2));
    }

    if (!(VAR_3->wState & VAR_0))
        FUNC_2( VAR_3, VAR_4 );

    if (VAR_5)
        FUNC_11( VAR_4, VAR_5 );

    return 0;
}
