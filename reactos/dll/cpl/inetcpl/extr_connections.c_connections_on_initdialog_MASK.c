
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pac_url ;
typedef int enabled ;
struct TYPE_5__ {scalar_t__ version; int flags; } ;
typedef TYPE_1__ connection_settings ;
typedef int address ;
typedef scalar_t__ WCHAR ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,int *,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (int ,int ,scalar_t__*) ;
 int FUNC_9 (char*,scalar_t__) ;
 int VAR_16 ;
 scalar_t__* VAR_17 ;
 int VAR_18 ;
 scalar_t__* VAR_19 ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,scalar_t__) ;
 int VAR_20 ;
 scalar_t__* VAR_21 ;
 scalar_t__* VAR_22 ;
 scalar_t__* FUNC_12 (scalar_t__*,char) ;
 scalar_t__ FUNC_13 (scalar_t__*) ;

__attribute__((used)) static void FUNC_14(HWND VAR_23)
{
    DWORD VAR_24, VAR_25, VAR_26;
    WCHAR VAR_27[VAR_12], *VAR_28;
    WCHAR VAR_29[VAR_12];
    HKEY VAR_30, VAR_31;
    LONG VAR_32;

    FUNC_7(FUNC_3(VAR_23, VAR_6),
            VAR_3, VAR_12, 0);
    FUNC_7(FUNC_3(VAR_23, VAR_8),
            VAR_3, VAR_12-10, 0);
    FUNC_7(FUNC_3(VAR_23, VAR_7), VAR_3, 8, 0);

    VAR_32 = FUNC_5(VAR_5, VAR_20, &VAR_30);
    if(VAR_32)
        return;

    VAR_25 = sizeof(VAR_26);
    VAR_32 = FUNC_6(VAR_30, VAR_21, ((void*)0), &VAR_24, (BYTE*)&VAR_26, &VAR_25);
    if(VAR_32 || VAR_24 != VAR_14)
        VAR_26 = 0;
    VAR_25 = sizeof(VAR_27);
    VAR_32 = FUNC_6(VAR_30, VAR_22, ((void*)0), &VAR_24, (BYTE*)VAR_27, &VAR_25);
    if(VAR_32 || VAR_24 != VAR_15)
        VAR_27[0] = 0;
    VAR_25 = sizeof(VAR_29);
    VAR_32 = FUNC_6(VAR_30, VAR_17, ((void*)0), &VAR_24, (BYTE*)VAR_29, &VAR_25);
    if(VAR_32 || VAR_24 != VAR_15)
        VAR_29[0] = 0;

    VAR_32 = FUNC_5(VAR_30, VAR_18, &VAR_31);
    FUNC_4(VAR_30);
    if(!VAR_32)
    {
        connection_settings *VAR_33 = ((void*)0);
        VAR_25 = 0;

        while((VAR_32 = FUNC_6(VAR_31, VAR_19, ((void*)0), &VAR_24,
                        (BYTE*)VAR_33, &VAR_25)) == VAR_4 || !VAR_33)
        {
            connection_settings *VAR_34 = FUNC_11(VAR_33, VAR_25);
            if(!VAR_34)
            {
                FUNC_4(VAR_31);
                FUNC_10(VAR_33);
                return;
            }
            VAR_33 = VAR_34;
        }
        FUNC_4(VAR_31);

        if(!VAR_32 && VAR_24 == VAR_13)
        {
            if(VAR_33->version != VAR_1)
                FUNC_2("unexpected structure version (%x)\n", VAR_33->version);
            else if(VAR_33->flags & VAR_2)
                FUNC_0(VAR_23, VAR_11, VAR_0);
        }
        FUNC_10(VAR_33);
    }

    FUNC_9("ProxyEnable = %x\n", VAR_26);
    FUNC_9("ProxyServer = %s\n", FUNC_13(VAR_27));
    FUNC_9("AutoConfigURL = %s\n", FUNC_13(VAR_17));

    if(VAR_26)
    {
        FUNC_0(VAR_23, VAR_10, VAR_0);
        FUNC_1(FUNC_3(VAR_23, VAR_8), VAR_16);
        FUNC_1(FUNC_3(VAR_23, VAR_7), VAR_16);
    }

    VAR_28 = FUNC_12(VAR_27, ':');
    if(VAR_28)
    {
        *VAR_28 = 0;
        VAR_28++;
    }
    FUNC_8(VAR_23, VAR_8, VAR_27);
    if(VAR_28)
        FUNC_8(VAR_23, VAR_7, VAR_28);

    if(VAR_29[0])
    {
        FUNC_0(VAR_23, VAR_9, VAR_0);
        FUNC_1(FUNC_3(VAR_23, VAR_6), VAR_16);
        FUNC_8(VAR_23, VAR_6, VAR_29);
    }

    return;
}
