
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uNotification; int ptCursor; } ;
typedef int POINT ;
typedef int LRESULT ;
typedef int INT ;
typedef int HWND ;
typedef TYPE_1__ DRAGLISTINFO ;
typedef int CUSTDLG_INFO ;


 int FUNC_0 (int ,int ) ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int *,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int const*,int ,int,int) ;
 int FUNC_7 (int const*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static LRESULT FUNC_8(const CUSTDLG_INFO *VAR_8, HWND VAR_9,
                                                        const DRAGLISTINFO *VAR_10)
{
    HWND VAR_11 = FUNC_2(VAR_9, VAR_4);
    switch (VAR_10->uNotification)
    {
    case 131:
    {
        INT VAR_12 = FUNC_3(VAR_11, VAR_10->ptCursor, VAR_7);
        INT VAR_13 = FUNC_5(VAR_11, VAR_5, 0, 0);

        if (VAR_12 >= (VAR_13 - 1)) return VAR_2;
        return VAR_7;
    }
    case 129:
    {
        INT VAR_14 = FUNC_3(VAR_11, VAR_10->ptCursor, VAR_7);
        INT VAR_15 = FUNC_5(VAR_11, VAR_5, 0, 0);

        if ((VAR_14 >= 0) && (VAR_14 < (VAR_15 - 1)))
        {
            FUNC_1(VAR_9, VAR_11, VAR_14);

            return VAR_0;
        }


        if (VAR_14 < 0)
        {
            POINT VAR_16 = VAR_10->ptCursor;
            HWND VAR_17 = FUNC_2(VAR_9, VAR_3);
            FUNC_4(((void*)0), VAR_9, &VAR_16, 1);

            if (FUNC_0(VAR_9, VAR_16) == VAR_17)

                return VAR_0;
        }

        FUNC_1(VAR_9, VAR_11, -1);
        return VAR_1;
    }
    case 128:
    {
        INT VAR_18 = FUNC_3(VAR_11, VAR_10->ptCursor, VAR_7);
        INT VAR_19 = FUNC_5(VAR_11, VAR_6, 0, 0);
        INT VAR_20 = FUNC_5(VAR_11, VAR_5, 0, 0);
        if ((VAR_18 >= 0) && (VAR_18 < (VAR_20 - 1)))
        {

            FUNC_1(VAR_9, VAR_11, -1);

            FUNC_6(VAR_8, VAR_9, VAR_19, VAR_18);
        }

        if (VAR_18 < 0)
        {
            POINT VAR_21 = VAR_10->ptCursor;
            HWND VAR_22 = FUNC_2(VAR_9, VAR_3);
            FUNC_4(((void*)0), VAR_9, &VAR_21, 1);

            if (FUNC_0(VAR_9, VAR_21) == VAR_22)
                FUNC_7(VAR_8, VAR_9, VAR_19);
        }
        break;
    }
    case 130:

        FUNC_1(VAR_9, VAR_11, -1);
        break;
    }

    return 0;
}
