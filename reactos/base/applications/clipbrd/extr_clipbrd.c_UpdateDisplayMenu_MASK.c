
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_2__ {int hInstance; int hMainWnd; int hMenu; } ;
typedef int HMENU ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ,int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,int ,int *,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_11(void)
{
    UINT VAR_9;
    HMENU VAR_10;
    WCHAR VAR_11[VAR_3 + 1];

    VAR_10 = FUNC_7(VAR_2.hMenu, VAR_1);

    while (FUNC_6(VAR_10) > 1)
    {
        FUNC_4(VAR_10, 1, VAR_4);
    }

    if (FUNC_3() == 0)
        return;

    if (!FUNC_9(VAR_2.hMainWnd))
        return;

    FUNC_1(VAR_10, VAR_6, 0, ((void*)0));


    for (VAR_9 = FUNC_5(0); VAR_9;
         VAR_9 = FUNC_5(VAR_9))
    {
        if (FUNC_8(VAR_9))
        {
            FUNC_10(VAR_2.hInstance, VAR_9, VAR_8,
                                        VAR_11, FUNC_0(VAR_11));
            FUNC_1(VAR_10, VAR_7, VAR_0 + VAR_9, VAR_11);
        }
    }


    for (VAR_9 = FUNC_5(0); VAR_9;
         VAR_9 = FUNC_5(VAR_9))
    {
        if (!FUNC_8(VAR_9))
        {
            FUNC_10(VAR_2.hInstance, VAR_9, VAR_8,
                                        VAR_11, FUNC_0(VAR_11));
            FUNC_1(VAR_10, VAR_7 | VAR_5, 0, VAR_11);
        }
    }

    FUNC_2();
}
