
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_7__ {int wFlags; } ;
struct TYPE_6__ {int code; int hwndFrom; int idFrom; } ;
struct TYPE_5__ {int iItem; scalar_t__ lParam; int mask; int member_0; } ;
typedef TYPE_1__ LVITEM ;
typedef TYPE_2__* LPNMHDR ;
typedef scalar_t__ LPARAM ;
typedef int INT ;
typedef TYPE_3__ INPUT_LIST_NODE ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,int ,int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ,int *,int *,int) ;


 int VAR_13 ;
 int FUNC_9 (int ,int ) ;
 int VAR_14 ;
 int FUNC_10 (int *) ;
 int VAR_15 ;

__attribute__((used)) static VOID
FUNC_11(HWND VAR_16, LPARAM VAR_17)
{
    LPNMHDR VAR_18;

    VAR_18 = (LPNMHDR)VAR_17;

    switch (VAR_18->code)
    {
        case 129:
        {
            if (VAR_18->idFrom == VAR_3)
            {
                INT VAR_19 = FUNC_6(VAR_18->hwndFrom, -1, VAR_10);

                if (VAR_19 != -1)
                {
                    LVITEM VAR_20 = { 0 };

                    FUNC_9(VAR_16, VAR_14);

                    VAR_20.mask = VAR_9;
                    VAR_20.iItem = VAR_19;

                    if (FUNC_5(VAR_18->hwndFrom, &VAR_20) != VAR_2)
                    {
                        INPUT_LIST_NODE *VAR_21;

                        VAR_21 = (INPUT_LIST_NODE*) VAR_20.lParam;

                        if (VAR_21 != ((void*)0) && VAR_21->wFlags & VAR_8)
                        {
                            FUNC_1(FUNC_3(VAR_16, VAR_4), VAR_2);
                        }
                    }
                }
                else
                {
                    FUNC_9(VAR_16, VAR_2);
                }
            }
        }
        break;

        case 128:
        {

            if (FUNC_4())
            {

                WCHAR VAR_22[128], VAR_23[64];
                FUNC_7(VAR_15, VAR_6, VAR_22, FUNC_10(VAR_22));
                FUNC_7(VAR_15, VAR_5, VAR_23, FUNC_10(VAR_23));

                if (FUNC_8(VAR_16, VAR_22, VAR_23,
                                VAR_11 | VAR_12) == VAR_7)
                {
                    FUNC_0(VAR_13, VAR_14);
                    FUNC_2(VAR_1 | VAR_0, 0);
                }
            }
        }
        break;
    }
}
