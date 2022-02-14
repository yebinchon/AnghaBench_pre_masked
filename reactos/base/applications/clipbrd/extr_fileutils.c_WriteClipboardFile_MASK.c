
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_10__ {int hMainWnd; int hInstance; } ;
struct TYPE_9__ {int wFileIdentifier; int wFormatCount; int szName; scalar_t__ dwOffData; scalar_t__ dwLenData; scalar_t__ dwFormatID; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__ NTCLIPFORMATHEADER ;
typedef TYPE_1__ NTCLIPFILEHEADER ;
typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CLIPFORMATHEADER ;
typedef TYPE_1__ CLIPFILEHEADER ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 int FUNC_10 (scalar_t__,TYPE_1__*,scalar_t__,scalar_t__*,int *) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (int ) ;

void FUNC_13(LPCWSTR VAR_12, WORD VAR_13)
{
    CLIPFILEHEADER VAR_14;
    CLIPFORMATHEADER VAR_15;
    NTCLIPFILEHEADER VAR_16;
    NTCLIPFORMATHEADER VAR_17;
    PVOID VAR_18;
    PVOID VAR_19;
    DWORD VAR_20, VAR_21;

    WORD VAR_22;
    DWORD VAR_23;
    DWORD VAR_24;
    DWORD VAR_25;


    HANDLE VAR_26;
    DWORD VAR_27;
    int VAR_28;


    VAR_26 = FUNC_4(VAR_12, VAR_5, 0, ((void*)0),
                        VAR_0, VAR_3, ((void*)0));
    if (VAR_26 == VAR_7)
    {
        FUNC_9(VAR_6.hMainWnd);
        goto done;
    }

    VAR_22 = FUNC_3();


    switch (VAR_13)
    {
        case 130:
            VAR_20 = sizeof(CLIPFILEHEADER);
            VAR_21 = sizeof(CLIPFORMATHEADER);
            VAR_18 = &VAR_14;
            VAR_19 = &VAR_15;

            VAR_14.wFileIdentifier = 130;
            VAR_14.wFormatCount = VAR_22;
            break;

        case 128:
        case 129:
            VAR_20 = sizeof(NTCLIPFILEHEADER);
            VAR_21 = sizeof(NTCLIPFORMATHEADER);
            VAR_18 = &VAR_16;
            VAR_19 = &VAR_17;

            VAR_16.wFileIdentifier = 128;
            VAR_16.wFormatCount = VAR_22;
            break;

        default:
            FUNC_6(VAR_6.hMainWnd, VAR_6.hInstance, VAR_1, 0, VAR_9 | VAR_10);
            goto done;
    }


    FUNC_8(VAR_26, 0, ((void*)0), VAR_4);
    if (!FUNC_10(VAR_26, VAR_18, VAR_20, &VAR_27, ((void*)0)) ||
        VAR_27 != VAR_20)
    {
        FUNC_9(VAR_6.hMainWnd);
        goto done;
    }


    VAR_25 = VAR_20 + VAR_22 * VAR_21;


    VAR_28 = 0;
    VAR_23 = FUNC_5(0);
    while (VAR_23)
    {
        if (VAR_28 >= VAR_22)
        {

            FUNC_12(VAR_2);
            break;
        }


        if (!FUNC_1(VAR_26, VAR_23, VAR_25, &VAR_24))
            goto Cont;


        switch (VAR_13)
        {
            case 130:
                FUNC_11(VAR_19, sizeof(CLIPFORMATHEADER));
                ((CLIPFORMATHEADER*)VAR_19)->dwFormatID = VAR_23;
                ((CLIPFORMATHEADER*)VAR_19)->dwLenData = VAR_24;
                ((CLIPFORMATHEADER*)VAR_19)->dwOffData = VAR_25;
                FUNC_7(VAR_6.hInstance,
                                            VAR_23,
                                            VAR_2,
                                            ((CLIPFORMATHEADER*)VAR_19)->szName,
                                            FUNC_0(((CLIPFORMATHEADER*)VAR_19)->szName));
                break;

            case 128:
            case 129:
                FUNC_11(VAR_19, sizeof(NTCLIPFORMATHEADER));
                ((NTCLIPFORMATHEADER*)VAR_19)->dwFormatID = VAR_23;
                ((NTCLIPFORMATHEADER*)VAR_19)->dwLenData = VAR_24;
                ((NTCLIPFORMATHEADER*)VAR_19)->dwOffData = VAR_25;
                FUNC_7(VAR_6.hInstance,
                                            VAR_23,
                                            VAR_11,
                                            ((NTCLIPFORMATHEADER*)VAR_19)->szName,
                                            FUNC_0(((NTCLIPFORMATHEADER*)VAR_19)->szName));
                break;
        }

        if (FUNC_8(VAR_26, VAR_20 + VAR_28 * VAR_21, ((void*)0), VAR_4) == VAR_8)
        {
            FUNC_9(VAR_6.hMainWnd);
            goto done;
        }

        if (!FUNC_10(VAR_26, VAR_19, VAR_21, &VAR_27, ((void*)0)))
        {
            FUNC_9(VAR_6.hMainWnd);
            goto done;
        }


        VAR_25 += VAR_24;

Cont:
        VAR_28++;
        VAR_23 = FUNC_5(VAR_23);
    }

done:
    if (VAR_26 != VAR_7)
        FUNC_2(VAR_26);

    return;
}
