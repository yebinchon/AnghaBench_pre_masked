
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int Selection; TYPE_1__* ScreenSaverItems; } ;
struct TYPE_7__ {scalar_t__ szDisplayName; int szFilename; } ;
typedef TYPE_2__* PDATA ;
typedef scalar_t__ LPTSTR ;
typedef int LPARAM ;
typedef int LONG_PTR ;
typedef size_t INT ;
typedef int HWND ;
typedef int DATA ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,TYPE_2__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int VAR_5 ;
 TYPE_2__* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (short,short) ;
 size_t VAR_8 ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int ,int ,int ,int ,int) ;
 size_t FUNC_11 (int ,int ,size_t,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_16(HWND VAR_12, PDATA VAR_13)
{
    LPTSTR VAR_14;
    HWND VAR_15 = FUNC_4(VAR_12, VAR_6);
    INT VAR_16;

    VAR_13 = FUNC_6(FUNC_5(),
                            VAR_5,
                            sizeof(DATA));
    if (!VAR_13)
    {
        FUNC_2(VAR_12, -1);
        return VAR_4;
    }

    FUNC_12(VAR_12,
                     VAR_3,
                     (LONG_PTR)VAR_13);

    VAR_13->Selection = -1;

    FUNC_10(VAR_12,
                       VAR_7,
                       VAR_11,
                       0,
                       FUNC_8
                       ((short) 240, (short) 1));

    FUNC_0(VAR_12,
                    VAR_13);

    FUNC_1(VAR_12);


    VAR_14 = FUNC_3(FUNC_13("SCRNSAVE.EXE"));
    if (VAR_14)
    {
        BOOL VAR_17 = VAR_4;
        INT VAR_18;

        for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
        {
            if (!FUNC_14(VAR_14, VAR_13->ScreenSaverItems[VAR_18].szFilename))
            {
                VAR_17 = VAR_9;
                break;
            }
        }

        if (VAR_17)
        {
            VAR_16 = FUNC_11(VAR_15,
                              VAR_1,
                              -1,
                              (LPARAM)VAR_13->ScreenSaverItems[VAR_18].szDisplayName);
            if (VAR_16 != VAR_0)
                FUNC_11(VAR_15,
                            VAR_2,
                            VAR_16,
                            0);
        }
        else
        {
            FUNC_11(VAR_15,
                        VAR_2,
                        0,
                        0);
        }

        FUNC_7(FUNC_5(),
                 0,
                 VAR_14);
    }
    else
    {

        FUNC_11(VAR_15,
                    VAR_2,
                    0,
                    0);
    }


    VAR_14 = FUNC_3(FUNC_13("ScreenSaveTimeOut"));
    if (VAR_14)
    {
        UINT VAR_19 = FUNC_15(VAR_14);

        VAR_19 /= 60;

        FUNC_10(VAR_12,
                           VAR_7,
                           VAR_10,
                           0,
                           VAR_19);

        FUNC_7(FUNC_5(),
                 0,
                 VAR_14);

    }

    FUNC_9(VAR_12,
                     VAR_13);

    return VAR_9;
}
