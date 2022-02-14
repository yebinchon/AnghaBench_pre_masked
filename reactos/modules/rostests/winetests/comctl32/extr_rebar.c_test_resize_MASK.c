
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cx; int cy; int x; int y; scalar_t__ flags; int * hwndInsertAfter; int hwnd; } ;
typedef TYPE_1__ WINDOWPOS ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int,int,int,int,int,int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int,int,int,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int *,int,int,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int ,int *,int,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_11(void)
{
    DWORD VAR_20[] = {VAR_6, VAR_6 | VAR_1, VAR_0, VAR_0 | VAR_1, VAR_7, VAR_5,
        VAR_3, VAR_3 | VAR_1, VAR_4, VAR_2, VAR_2 | VAR_7,
        VAR_6 | VAR_15, VAR_3 | VAR_1 | VAR_15, VAR_4 | VAR_15,
        VAR_2 | VAR_15};

    const int VAR_21 = FUNC_0(VAR_20);
    int VAR_22;

    for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
    {
        HWND VAR_23;

        FUNC_10("style %08x", VAR_20[VAR_22]);
        FUNC_7(&VAR_19, -1, -1, -1, -1);
        VAR_23 = FUNC_1(VAR_9, "A", VAR_20[VAR_22] | VAR_16 | VAR_17, 10, 5, 500, 15, VAR_18, ((void*)0), FUNC_3(((void*)0)), 0);
        FUNC_9();
        FUNC_8(VAR_23, ((void*)0), 70, 100, 0);
        if (VAR_20[VAR_22] & VAR_3)
            FUNC_9();
        FUNC_8(VAR_23, ((void*)0), 70, 100, 0);
        FUNC_9();
        FUNC_5(VAR_23, 10, 10, 100, 100, VAR_11);
        FUNC_9();
        FUNC_5(VAR_23, 0, 0, 0, 0, VAR_11);
        FUNC_9();

        if (VAR_20[VAR_22] & (VAR_4 | VAR_3))
        {
            WINDOWPOS VAR_24;
            VAR_24.hwnd = VAR_23;
            VAR_24.hwndInsertAfter = ((void*)0);
            VAR_24.cx = 500;
            VAR_24.cy = 500;
            VAR_24.x = 10;
            VAR_24.y = 10;
            VAR_24.flags = 0;
            FUNC_6(VAR_23, VAR_14, 0, (LPARAM)&VAR_24);
            FUNC_6(VAR_23, VAR_13, 0, (LPARAM)&VAR_24);
            FUNC_9();
            FUNC_6(VAR_23, VAR_12, VAR_10, FUNC_4(500, 500));
            FUNC_9();
        }
        FUNC_6(VAR_23, VAR_8, 0, 0);
        FUNC_9();
        FUNC_6(VAR_23, VAR_8, 0, 0);
        FUNC_5(VAR_23, 0, 0, 100, 100, VAR_11);
        FUNC_9();
        FUNC_2(VAR_23);
    }
}
