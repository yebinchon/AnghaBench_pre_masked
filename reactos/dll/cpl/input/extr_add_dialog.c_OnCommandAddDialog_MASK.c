
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_6__ {int dwId; } ;
struct TYPE_5__ {int dwId; } ;
typedef TYPE_1__ LOCALE_LIST_NODE ;
typedef TYPE_2__ LAYOUT_LIST_NODE ;
typedef int INT ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int const) ;
 int FUNC_7 (int ) ;


 int const VAR_1 ;

 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static VOID
FUNC_10(HWND VAR_2, WPARAM VAR_3)
{
    switch (FUNC_9(VAR_3))
    {
        case 128:
        {
            HWND VAR_4 = FUNC_6(VAR_2, 129);
            HWND VAR_5 = FUNC_6(VAR_2, VAR_1);
            LOCALE_LIST_NODE *VAR_6;
            LAYOUT_LIST_NODE *VAR_7;

            VAR_6 = (LOCALE_LIST_NODE*)FUNC_2(VAR_4,
                                                                     FUNC_1(VAR_4));
            VAR_7 = (LAYOUT_LIST_NODE*)FUNC_2(VAR_5,
                                                                     FUNC_1(VAR_5));

            FUNC_8(VAR_6, VAR_7);

            FUNC_4(VAR_2, FUNC_9(VAR_3));
        }
        break;

        case 130:
        {
            FUNC_4(VAR_2, FUNC_9(VAR_3));
        }
        break;

        case 129:
        {
            if (FUNC_7(VAR_3) == VAR_0)
            {
                HWND VAR_8 = FUNC_6(VAR_2, 129);
                HWND VAR_9 = FUNC_6(VAR_2, VAR_1);
                LOCALE_LIST_NODE *VAR_10;

                VAR_10 = (LOCALE_LIST_NODE*)FUNC_2(VAR_8,
                                                                         FUNC_1(VAR_8));
                if (VAR_10 != ((void*)0))
                {
                    DWORD VAR_11;
                    INT VAR_12;
                    INT VAR_13;

                    VAR_11 = FUNC_5(VAR_10->dwId);

                    VAR_13 = FUNC_0(VAR_9);

                    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
                    {
                        LAYOUT_LIST_NODE *VAR_14;

                        VAR_14 = (LAYOUT_LIST_NODE*)FUNC_2(VAR_9, VAR_12);

                        if (VAR_14 != ((void*)0) && VAR_14->dwId == VAR_11)
                        {
                            FUNC_3(VAR_9, VAR_12);
                            break;
                        }
                    }
                }
            }
        }
        break;
    }
}
