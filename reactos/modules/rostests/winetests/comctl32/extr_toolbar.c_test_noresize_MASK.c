
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
struct TYPE_4__ {int member_1; int member_2; int member_6; int idCommand; int fsState; int member_5; TYPE_1__ member_4; int member_3; int member_0; } ;
typedef TYPE_2__ TBBUTTON ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HMENU ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int,int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    HWND VAR_14;
    int VAR_15;
    TBBUTTON VAR_16 = {0, 10, VAR_2, 0, 0,  0, -1};

    VAR_14 = FUNC_0(0, VAR_10, ((void*)0), VAR_11 | VAR_12 | VAR_0 | VAR_4, 0, 0, 100, 20,
                          VAR_13, (HMENU)5, FUNC_2(((void*)0)), ((void*)0));
    FUNC_4(VAR_14, VAR_7, sizeof(TBBUTTON), 0);

    for (VAR_15=0; VAR_15<30; VAR_15++)
    {
        VAR_16.idCommand = 10 + VAR_15;
        FUNC_4(VAR_14, VAR_5, 1, (LPARAM)&VAR_16);
    }

    FUNC_4(VAR_14, VAR_9, 10, VAR_3|VAR_2);


    FUNC_4(VAR_14, VAR_6, 0, 0);
    for (VAR_15=0; VAR_15<30; VAR_15++)
    {
        FUNC_4(VAR_14, VAR_8, VAR_15, (LPARAM)&VAR_16);
        if (VAR_15 % 4 == 3)
            FUNC_5(VAR_16.fsState == (VAR_3|VAR_2), "%d: got %08x\n", VAR_15, VAR_16.fsState);
        else
            FUNC_5(VAR_16.fsState == VAR_2, "%d: got %08x\n", VAR_15, VAR_16.fsState);
    }


    FUNC_3(VAR_13, 0,0, 400, 200, VAR_1);
    for (VAR_15=0; VAR_15<30; VAR_15++)
    {
        FUNC_4(VAR_14, VAR_8, VAR_15, (LPARAM)&VAR_16);
        if (VAR_15 % 4 == 3)
            FUNC_5(VAR_16.fsState == (VAR_3|VAR_2), "%d: got %08x\n", VAR_15, VAR_16.fsState);
        else
            FUNC_5(VAR_16.fsState == VAR_2, "%d: got %08x\n", VAR_15, VAR_16.fsState);
    }


    FUNC_4(VAR_14, VAR_6, 0, 0);
    for (VAR_15=0; VAR_15<30; VAR_15++)
    {
        FUNC_4(VAR_14, VAR_8, VAR_15, (LPARAM)&VAR_16);
        if (VAR_15 % 4 == 3)
            FUNC_5(VAR_16.fsState == (VAR_3|VAR_2), "%d: got %08x\n", VAR_15, VAR_16.fsState);
        else
            FUNC_5(VAR_16.fsState == VAR_2, "%d: got %08x\n", VAR_15, VAR_16.fsState);
    }

    FUNC_1(VAR_14);

}
