
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WORD ;
typedef int UINT ;
struct TYPE_2__ {int nFocusPanel; int hTreeWnd; int hListWnd; } ;
typedef int * LPCWSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HTREEITEM ;
typedef int HKEY ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int *) ;

__attribute__((used)) static BOOL FUNC_18(HWND VAR_11, UINT VAR_12, WPARAM VAR_13, LPARAM VAR_14)
{
    HTREEITEM VAR_15;
    HKEY VAR_16;
    LPCWSTR VAR_17, VAR_18;
    WORD VAR_19 = FUNC_8(VAR_13);

    FUNC_16(VAR_12);

    switch (VAR_19)
    {

    case 135:
        FUNC_4(VAR_11);
        break;
    case 128:

        break;
    case 131:
        FUNC_14(VAR_9->hTreeWnd, FUNC_15(VAR_9->hTreeWnd), VAR_7);
        break;
    case 133:
        FUNC_14(VAR_9->hTreeWnd, FUNC_15(VAR_9->hTreeWnd), VAR_6);
        break;
    case 129:
        FUNC_12(VAR_9->hTreeWnd);
        FUNC_13(VAR_9->hTreeWnd, FUNC_15(VAR_9->hTreeWnd));
        break;
    case 132:
        VAR_15 = FUNC_15(VAR_9->hTreeWnd);
        VAR_17 = FUNC_7(VAR_9->hTreeWnd, VAR_15, &VAR_16);

        if (VAR_17 == 0 || *VAR_17 == 0)
        {
            FUNC_9(VAR_3);
        }
        else if (FUNC_2(VAR_11, VAR_16, VAR_17))
            FUNC_3(VAR_9->hTreeWnd, 0);
        break;
    case 130:
        FUNC_5(VAR_9->hTreeWnd);
        break;
    case 140:
        FUNC_6(VAR_11);
        break;
    case 141:
        VAR_15 = FUNC_15(VAR_9->hTreeWnd);
        VAR_17 = FUNC_7(VAR_9->hTreeWnd, VAR_15, &VAR_16);
        FUNC_0(VAR_11, VAR_16, VAR_17);
        break;
    case 137:
        FUNC_1(VAR_9->hTreeWnd, FUNC_15(VAR_9->hTreeWnd));
        break;
    case 136:
    case 139:
    case 138:
        FUNC_11(VAR_10, VAR_8, VAR_13, VAR_14);
        break;
    case 134:
        VAR_9->nFocusPanel = !VAR_9->nFocusPanel;
        FUNC_12(VAR_9->nFocusPanel? VAR_9->hListWnd: VAR_9->hTreeWnd);
        break;
    default:
        if ((VAR_19 >= VAR_2) && (VAR_19 <= VAR_1))
        {
            VAR_18 = VAR_4;
            while(VAR_19 > VAR_2)
            {
                if (*VAR_18)
                    VAR_18 += FUNC_17(VAR_18) + 1;
                VAR_19--;
            }
            FUNC_10(VAR_9->hTreeWnd, VAR_18);
            break;
        }
        return VAR_0;
    }
    return VAR_5;
}
