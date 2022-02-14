
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int member_1; TYPE_1__* member_0; } ;
struct TYPE_5__ {int member_0; } ;
typedef char TCHAR ;
typedef int * PWCHAR ;
typedef int * PVOID ;
typedef scalar_t__ ENCODING ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CON_SCREEN ;
typedef TYPE_2__ CON_PAGER ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,void*,int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (char*,int,int,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int *,int ,int **,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (scalar_t__,int *) ;
 int FUNC_13 (int *,int ,char*,int *) ;
 int FUNC_14 () ;
 void* FUNC_15 (int ) ;
 int * FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_18 (int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_19 (scalar_t__,int *,int ,scalar_t__*,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_20 (scalar_t__,scalar_t__,int *,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 void* VAR_32 ;
 scalar_t__ FUNC_21 (int *,char*) ;

int FUNC_22(int VAR_33, WCHAR* VAR_34[])
{

    CON_SCREEN VAR_35 = {VAR_23};
    CON_PAGER VAR_36 = {&VAR_35, 0};

    int VAR_37;

    BOOL VAR_38, VAR_39;

    ENCODING VAR_40;
    DWORD VAR_41 = 0;


    PVOID VAR_42 = ((void*)0);
    PWCHAR VAR_43 = ((void*)0);
    DWORD VAR_44 = 0;
    DWORD VAR_45, VAR_46;

    TCHAR VAR_47[VAR_15];

    VAR_31 = FUNC_15(VAR_19);
    VAR_32 = FUNC_15(VAR_20);


    FUNC_6(VAR_22 , FUNC_15(VAR_19) , VAR_25, VAR_12);
    FUNC_6(VAR_23, FUNC_15(VAR_20), VAR_25, VAR_12);
    FUNC_6(VAR_21, FUNC_15(VAR_18) , VAR_25, VAR_12);





    if (VAR_33 > 1 && FUNC_21(VAR_34[1], L"/?") == 0)
    {
        FUNC_5(VAR_23, VAR_11);
        return 0;
    }






    VAR_30 = FUNC_9(L"CONIN$", VAR_8|VAR_9,
                            VAR_5|VAR_6, ((void*)0),
                            VAR_16, 0, ((void*)0));
    FUNC_11(VAR_30);
    FUNC_7(VAR_22, VAR_30);


    VAR_42 = FUNC_16(FUNC_14(), 0, 4096);
    if (!VAR_42)
    {
        FUNC_2(VAR_21, L"Error: no memory\n");
        FUNC_1(VAR_30);
        return 1;
    }


    if (VAR_33 <= 1)
    {




        VAR_29 = VAR_31;


        VAR_26 = 0;
        VAR_27 = VAR_28 = 0;





        VAR_40 = VAR_0;

        VAR_39 = FUNC_3(&VAR_36, VAR_17, VAR_24, L"");
        if (!VAR_39)
            goto Quit;

        do
        {
            VAR_38 = FUNC_10(VAR_29, VAR_40,
                                 VAR_42, 4096,
                                 &VAR_43, &VAR_44,
                                 &VAR_45, &VAR_46);
            if (!VAR_38 || VAR_45 == 0 || VAR_46 == 0)
            {

                break;
            }


            VAR_27 += VAR_45;
            VAR_28 += VAR_46;

            VAR_39 = FUNC_8(&VAR_36, VAR_17, VAR_3,
                                       VAR_43, VAR_46);

            if (!VAR_39)
                goto Quit;
        }
        while (VAR_38 && VAR_45 > 0);
        goto Quit;
    }


    for (VAR_37 = 1; VAR_37 < VAR_33; VAR_37++)
    {
        FUNC_13(VAR_34[VAR_37], FUNC_0(VAR_47), VAR_47, ((void*)0));
        VAR_29 = FUNC_9(VAR_47,
                            VAR_8,
                            VAR_5,
                            ((void*)0),
                            VAR_16,
                            0,
                            ((void*)0));
        if (VAR_29 == VAR_14)
        {
            FUNC_4(VAR_21, VAR_10, VAR_47);
            continue;
        }


        VAR_26 = FUNC_12(VAR_29, ((void*)0));
        if (VAR_26 == VAR_13)
        {
            FUNC_2(VAR_21, L"ERROR: Invalid file size!\n");
            FUNC_1(VAR_29);
            continue;
        }




        FUNC_20(VAR_29, 0, ((void*)0), VAR_4);
        VAR_38 = FUNC_19(VAR_29, VAR_42, 4096, &VAR_45, ((void*)0));
        FUNC_18(VAR_42, VAR_45, &VAR_40, &VAR_41);
        FUNC_20(VAR_29, VAR_41, ((void*)0), VAR_4);


        VAR_27 = VAR_28 = 0;

        VAR_39 = FUNC_3(&VAR_36, VAR_17, VAR_24, L"");
        if (!VAR_39)
        {
            FUNC_1(VAR_29);
            goto Quit;
        }

        do
        {
            VAR_38 = FUNC_10(VAR_29, VAR_40,
                                 VAR_42, 4096,
                                 &VAR_43, &VAR_44,
                                 &VAR_45, &VAR_46);
            if (!VAR_38 || VAR_45 == 0 || VAR_46 == 0)
            {




                break;
            }


            VAR_27 += VAR_45;
            VAR_28 += VAR_46;

            if ((VAR_40 == VAR_2) || (VAR_40 == VAR_1))
            {
                VAR_39 = FUNC_8(&VAR_36, VAR_17, VAR_3,
                                           VAR_42, VAR_46);
            }
            else
            {
                VAR_39 = FUNC_8(&VAR_36, VAR_17, VAR_3,
                                           VAR_43, VAR_46);
            }

            if (!VAR_39)
            {
                FUNC_1(VAR_29);
                goto Quit;
            }
        }
        while (VAR_38 && VAR_45 > 0);

        FUNC_1(VAR_29);
    }

Quit:
    if (VAR_43) FUNC_17(FUNC_14(), 0, VAR_43);
    FUNC_17(FUNC_14(), 0, VAR_42);
    FUNC_1(VAR_30);
    return 0;
}
