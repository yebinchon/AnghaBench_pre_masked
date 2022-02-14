
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int hwndList; int hwndEdit; } ;
struct TYPE_8__ {int hwndNavigation; } ;
struct TYPE_12__ {TYPE_3__ search; TYPE_2__* tabs; int hwndTabCtrl; TYPE_1__ WinType; } ;
struct TYPE_11__ {int left; int top; int bottom; int right; } ;
struct TYPE_9__ {int hwnd; } ;
typedef TYPE_4__ RECT ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef TYPE_5__ HHInfo ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int,int,int,int,int) ;

 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_4(HHInfo *VAR_12, int VAR_13)
{
    HWND VAR_14 = VAR_12->tabs[VAR_13].hwnd;
    INT VAR_15, VAR_16;
    RECT VAR_17, VAR_18;
    DWORD VAR_19;

    FUNC_0(VAR_12->WinType.hwndNavigation, &VAR_17);
    FUNC_2(VAR_12->hwndTabCtrl, VAR_10, 0, (LPARAM)&VAR_18);
    VAR_19 = FUNC_2(VAR_12->hwndTabCtrl, VAR_11, 0, 0);

    VAR_17.left = VAR_7;
    VAR_17.top = VAR_9 + VAR_19*(VAR_18.bottom-VAR_18.top) + VAR_7;
    VAR_17.right -= VAR_8 + VAR_7;
    VAR_17.bottom -= VAR_7;
    VAR_15 = VAR_17.right-VAR_17.left;
    VAR_16 = VAR_17.bottom-VAR_17.top;

    FUNC_3(VAR_14, ((void*)0), VAR_17.left, VAR_17.top, VAR_15, VAR_16,
                 VAR_6 | VAR_5);

    switch (VAR_13)
    {
    case 129: {
        int VAR_20 = FUNC_1(VAR_4);
        int VAR_21 = FUNC_1(VAR_2);
        int VAR_22 = FUNC_1(VAR_3);




        FUNC_2(VAR_12->tabs[129].hwnd, VAR_1, 0,
                     VAR_15-VAR_20-2*VAR_21-2*VAR_22);

        break;
    }
    case 128: {
        int VAR_23 = FUNC_1(VAR_4);
        int VAR_24 = FUNC_1(VAR_2);
        int VAR_25 = FUNC_1(VAR_3);
        int VAR_26 = 0;

        FUNC_3(VAR_12->search.hwndEdit, ((void*)0), 0, VAR_26, VAR_15,
                      VAR_0, VAR_6 | VAR_5);
        VAR_26 += VAR_0 + VAR_7;
        FUNC_3(VAR_12->search.hwndList, ((void*)0), 0, VAR_26, VAR_15,
                      VAR_16-VAR_26, VAR_6 | VAR_5);



        FUNC_2(VAR_12->search.hwndList, VAR_1, 0,
                     VAR_15-VAR_23-2*VAR_24-2*VAR_25);

        break;
    }
    }
}
