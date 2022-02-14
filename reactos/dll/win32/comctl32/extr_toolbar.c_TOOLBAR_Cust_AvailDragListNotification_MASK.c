
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
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int *,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int const*,int ,int,int) ;
 int VAR_6 ;

__attribute__((used)) static LRESULT FUNC_8(const CUSTDLG_INFO *VAR_7, HWND VAR_8,
                                                      const DRAGLISTINFO *VAR_9)
{
    HWND VAR_10 = FUNC_2(VAR_8, VAR_3);
    switch (VAR_9->uNotification)
    {
    case 131:
        return VAR_6;
    case 129:
    {
        INT VAR_11 = FUNC_3(VAR_10, VAR_9->ptCursor, VAR_6);
        INT VAR_12 = FUNC_6(VAR_10, VAR_4, 0, 0);

        if ((VAR_11 >= 0) && (VAR_11 < VAR_12))
        {
            FUNC_1(VAR_8, VAR_10, VAR_11);

            return VAR_0;
        }


        if (VAR_11 < 0)
        {
            POINT VAR_13 = VAR_9->ptCursor;
            HWND VAR_14 = FUNC_2(VAR_8, VAR_2);
            FUNC_4(((void*)0), VAR_8, &VAR_13, 1);

            if (FUNC_0(VAR_8, VAR_13) == VAR_14)

                return VAR_0;
        }

        FUNC_1(VAR_8, VAR_10, -1);
        return VAR_1;
    }
    case 128:
    {
        INT VAR_15 = FUNC_3(VAR_10, VAR_9->ptCursor, VAR_6);
        INT VAR_16 = FUNC_6(VAR_10, VAR_4, 0, 0);
        INT VAR_17 = FUNC_5(VAR_8, VAR_2, VAR_5, 0, 0);
        if ((VAR_15 >= 0) && (VAR_15 < VAR_16))
        {

            FUNC_1(VAR_8, VAR_10, -1);

            FUNC_7(VAR_7, VAR_8, VAR_17, VAR_15);
        }
    }
    case 130:

        FUNC_1(VAR_8, VAR_10, -1);
        break;
    }
    return 0;
}
