
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* szArgs; scalar_t__* szDesc; scalar_t__* szTitle; scalar_t__* szText; scalar_t__* szCommand; } ;
typedef TYPE_1__ TOPIC ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int LCID ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 TYPE_1__* FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*,int,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_6 () ;
 scalar_t__* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__*,int ,scalar_t__*) ;
 int FUNC_10 (scalar_t__*,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_11 (char*) ;
 int VAR_6 ;
 int FUNC_12 (scalar_t__*) ;
 scalar_t__ FUNC_13 (scalar_t__*) ;
 scalar_t__ FUNC_14 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__* VAR_9 ;

__attribute__((used)) static BOOL
FUNC_15(LCID VAR_10, LPTSTR VAR_11)
{
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    TCHAR VAR_15[VAR_4];
    TCHAR VAR_16[VAR_5];
    LPTSTR VAR_17 = ((void*)0), VAR_18 = ((void*)0);
    LPTSTR VAR_19, VAR_20;
    TOPIC VAR_21, *VAR_22;


    VAR_12 = (DWORD)FUNC_3(VAR_10, VAR_15, FUNC_0(VAR_15));
    if (!VAR_12)
    {

        FUNC_9(VAR_15, FUNC_0(VAR_15), FUNC_11("en-US"));
    }


    FUNC_10(VAR_16, FUNC_0(VAR_16),
                    FUNC_11("%s\\%s.ini"), VAR_11, VAR_15);


    VAR_13 = FUNC_2(VAR_16);
    if ((VAR_13 == VAR_3) ||
        (VAR_13 & VAR_2))
    {
        FUNC_9(VAR_15, FUNC_0(VAR_15), FUNC_11("en-US"));

        FUNC_10(VAR_16, FUNC_0(VAR_16),
                        FUNC_11("%s\\%s.ini"), VAR_11, VAR_15);
    }


    VAR_13 = FUNC_2(VAR_16);
    if ((VAR_13 == VAR_3) ||
        (VAR_13 & VAR_2))
    {
        return VAR_1;
    }


    FUNC_5(FUNC_11("Defaults"), FUNC_11("AppTitle"), FUNC_11("ReactOS - Welcome") ,
                            VAR_7, FUNC_0(VAR_7), VAR_16);
    FUNC_5(FUNC_11("Defaults"), FUNC_11("DefaultTopicTitle"), FUNC_11("") ,
                            VAR_9, FUNC_0(VAR_9), VAR_16);
    if (!FUNC_5(FUNC_11("Defaults"), FUNC_11("DefaultTopicDescription"), FUNC_11("") ,
                                 VAR_8, FUNC_0(VAR_8), VAR_16))
    {
        *VAR_8 = 0;
    }
    else
    {
        FUNC_12(VAR_8);
    }


    for (VAR_14 = VAR_0; ; VAR_14 += VAR_0)
    {
        VAR_17 = FUNC_7(FUNC_6(), 0, VAR_14 * sizeof(TCHAR));
        if (!VAR_17)
            return VAR_6;
        VAR_12 = FUNC_4(VAR_17, VAR_14, VAR_16);
        if (VAR_12 < VAR_14 - 2)
            break;
        FUNC_8(FUNC_6(), 0, VAR_17);
    }


    VAR_18 = VAR_17;
    for (; VAR_18 && *VAR_18; VAR_18 += (FUNC_13(VAR_18) + 1))
    {

        if (FUNC_14(VAR_18, FUNC_11("Topic"), 5) != 0)
            continue;

        VAR_19 = ((void*)0), VAR_20 = ((void*)0);


        FUNC_5(VAR_18, FUNC_11("MenuText"), FUNC_11("") ,
                                VAR_21.szText, FUNC_0(VAR_21.szText), VAR_16);
        FUNC_5(VAR_18, FUNC_11("Title"), FUNC_11("") ,
                                VAR_21.szTitle, FUNC_0(VAR_21.szTitle), VAR_16);
        FUNC_5(VAR_18, FUNC_11("Description"), FUNC_11("") ,
                                VAR_21.szDesc, FUNC_0(VAR_21.szDesc), VAR_16);

        FUNC_5(VAR_18, FUNC_11("ConfigCommand"), FUNC_11("") ,
                                VAR_21.szCommand, FUNC_0(VAR_21.szCommand), VAR_16);


        if (*VAR_21.szCommand)
        {
            VAR_19 = VAR_21.szCommand;
            FUNC_5(VAR_18, FUNC_11("ConfigArgs"), FUNC_11("") ,
                                    VAR_21.szArgs, FUNC_0(VAR_21.szArgs), VAR_16);
        }

        else
        {
            VAR_20 = VAR_21.szCommand;
            FUNC_5(VAR_18, FUNC_11("Action"), FUNC_11("") ,
                                    VAR_21.szCommand, FUNC_0(VAR_21.szCommand), VAR_16);
        }


        VAR_22 = FUNC_1(VAR_21.szText,
                               VAR_21.szTitle,
                               VAR_21.szDesc,
                               VAR_19,
                               VAR_21.szArgs,
                               VAR_20);
        if (!VAR_22)
            break;
    }

    FUNC_8(FUNC_6(), 0, VAR_17);

    return VAR_6;
}
