
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; } ;
typedef int TCHAR ;
typedef int * LPBYTE ;
typedef int INT ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ FILETIME ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (scalar_t__,int *,int ,int*,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (scalar_t__,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int VAR_25 ;
 int * FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (scalar_t__,int *,int,int*,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int ) ;
 int VAR_26 ;

INT FUNC_20(TCHAR VAR_27[VAR_9], TCHAR VAR_28[VAR_9], DWORD VAR_29, BOOL *VAR_30)
{
    TCHAR VAR_31[VAR_9];
    TCHAR VAR_32[VAR_9];
    HANDLE VAR_33, VAR_34;
    DWORD VAR_35, VAR_36, VAR_37;
    LPBYTE VAR_38;
    BOOL VAR_39 = VAR_3;
    FILETIME VAR_40, VAR_41, VAR_42, VAR_43;
    FILETIME VAR_44, VAR_45;
    FUNC_10(VAR_27, VAR_32);
    FUNC_10(VAR_28, VAR_31);
    VAR_32[0] = FUNC_19(VAR_32[0]);
    VAR_31[0] = FUNC_19(VAR_31[0]);






    VAR_33 = FUNC_5 (VAR_27, VAR_6, VAR_5,((void*)0), VAR_12, 0, ((void*)0));
    if (VAR_33 == VAR_8)
    {
        FUNC_3(VAR_17, VAR_27);
        return 0;
    }





    FUNC_9 (VAR_33, &VAR_40, &VAR_42, &VAR_44);





    VAR_35 = FUNC_8 (VAR_27);

    if (FUNC_11 (VAR_28))
    {




        FUNC_13(VAR_28,VAR_4);




        if (VAR_29 & VAR_16)
        {

            VAR_34 = FUNC_5(VAR_28, VAR_6, VAR_5, ((void*)0), VAR_12,
                0, ((void*)0));

            if (VAR_34 == VAR_8)
            {
                FUNC_3(VAR_17, VAR_28);
                FUNC_1 (VAR_33);
                return 0;
            }


            FUNC_9 (VAR_34, &VAR_41, &VAR_43, &VAR_45);
            if (!((VAR_44.dwHighDateTime > VAR_45.dwHighDateTime) ||
                    (VAR_44.dwHighDateTime == VAR_45.dwHighDateTime &&
                     VAR_44.dwLowDateTime > VAR_45.dwLowDateTime)))
            {
                FUNC_1 (VAR_33);
                FUNC_1 (VAR_34);
                return 0;
            }
            FUNC_1 (VAR_34);
        }

        FUNC_6 (VAR_28);
    }


    if (VAR_29 & VAR_15)
    {

        if (VAR_29 & VAR_14)
            FUNC_3(VAR_24, VAR_28);
        else
            FUNC_3(VAR_21, VAR_28);
        if ( !FUNC_7 (0))
        {
            FUNC_1 (VAR_33);
            return 0;
        }
    }


    if (VAR_29 & VAR_14)
        FUNC_3(VAR_22, VAR_28);
    else
        FUNC_3(VAR_23, VAR_28);


    if (!FUNC_18(VAR_32, VAR_31))
    {
        FUNC_2(VAR_25, VAR_20);
        FUNC_1 (VAR_33);
        *VAR_30 = VAR_3;
        return 0;
    }


    VAR_34 = FUNC_5 (VAR_28, VAR_7, 0, ((void*)0), VAR_2, 0, ((void*)0));
    if (VAR_34 == VAR_8)
    {
        FUNC_1 (VAR_33);
        FUNC_2(VAR_25, VAR_20);
        *VAR_30 = VAR_3;
        return 0;
    }


    VAR_38 = FUNC_15(((void*)0), VAR_1, VAR_10, VAR_13);
    if (VAR_38 == ((void*)0))
    {
        FUNC_1 (VAR_34);
        FUNC_1 (VAR_33);
        FUNC_2(VAR_25, VAR_19);
        return 0;
    }


    FUNC_13 (VAR_28, VAR_35);
    FUNC_14 (VAR_34, &VAR_40, &VAR_42, &VAR_44);
    do
    {

        FUNC_12 (VAR_33, VAR_38, VAR_1, &VAR_36, ((void*)0));


        if (VAR_36 == 0)
            break;


        FUNC_17 (VAR_34, VAR_38, VAR_36, &VAR_37, ((void*)0));


        if (VAR_37 != VAR_36 || FUNC_0(VAR_0))
        {
            FUNC_4(VAR_18);
            FUNC_16 (VAR_38, 0, VAR_11);
            FUNC_1 (VAR_34);
            FUNC_1 (VAR_33);
            VAR_26 = 1;
            return 0;
        }
    }
    while (!VAR_39);


    FUNC_16 (VAR_38, 0, VAR_11);
    FUNC_1 (VAR_34);
    FUNC_1 (VAR_33);


    return 1;
}
