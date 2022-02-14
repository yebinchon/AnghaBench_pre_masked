
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ lParam; void* iItem; void* mask; int member_0; } ;
typedef TYPE_1__ LVITEM ;
typedef int INPUT_LIST_NODE ;
typedef int * HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *,TYPE_1__*) ;
 void* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int VAR_11 ;

VOID
FUNC_12(HWND VAR_12, WPARAM VAR_13)
{
    switch (FUNC_6(VAR_13))
    {
        case 132:
        {
            if (FUNC_1(VAR_11,
                           FUNC_9(VAR_4),
                           VAR_12,
                           VAR_0) == VAR_7)
            {
                FUNC_11(FUNC_2(VAR_12, VAR_3));
                FUNC_10(FUNC_3(VAR_12), VAR_12);
            }
        }
        break;

        case 129:
        {
            HWND VAR_14;

            VAR_14 = FUNC_2(VAR_12, VAR_3);

            if (VAR_14 != ((void*)0))
            {
                LVITEM VAR_15 = { 0 };

                VAR_15.mask = VAR_9;
                VAR_15.iItem = FUNC_8(VAR_14, -1, VAR_10);

                if (FUNC_7(VAR_14, &VAR_15) != VAR_2)
                {
                    FUNC_4((INPUT_LIST_NODE*) VAR_15.lParam);
                    FUNC_11(VAR_14);
                    FUNC_10(FUNC_3(VAR_12), VAR_12);
                }
            }
        }
        break;

        case 130:
        {
            HWND VAR_16;

            VAR_16 = FUNC_2(VAR_12, VAR_3);

            if (VAR_16 != ((void*)0))
            {
                LVITEM VAR_17 = { 0 };

                VAR_17.mask = VAR_9;
                VAR_17.iItem = FUNC_8(VAR_16, -1, VAR_10);

                if (FUNC_7(VAR_16, &VAR_17) != VAR_2)
                {
                    if (FUNC_0(VAR_11,
                                        FUNC_9(VAR_5),
                                        VAR_12,
                                        VAR_1,
                                        VAR_17.lParam) == VAR_7)
                    {
                        FUNC_11(VAR_16);
                        FUNC_10(FUNC_3(VAR_12), VAR_12);
                    }
                }
            }
        }
        break;

        case 128:
        {
            HWND VAR_18;

            VAR_18 = FUNC_2(VAR_12, VAR_3);

            if (VAR_18 != ((void*)0))
            {
                LVITEM VAR_19 = { 0 };

                VAR_19.mask = VAR_9;
                VAR_19.iItem = FUNC_8(VAR_18, -1, VAR_10);

                if (FUNC_7(VAR_18, &VAR_19) != VAR_2)
                {
                    FUNC_5((INPUT_LIST_NODE*) VAR_19.lParam);
                    FUNC_11(VAR_18);
                    FUNC_10(FUNC_3(VAR_12), VAR_12);
                }
            }
        }
        break;

        case 131:
        {
            FUNC_1(VAR_11,
                       FUNC_9(VAR_6),
                       VAR_12,
                       VAR_8);
        }
        break;
    }
}
