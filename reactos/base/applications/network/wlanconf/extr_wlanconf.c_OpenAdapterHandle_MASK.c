
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {int Name; } ;
struct TYPE_10__ {scalar_t__ DeviceNameLength; size_t NumAdapters; TYPE_3__* Adapter; struct TYPE_10__* DeviceNameOffset; scalar_t__ BindingIndex; } ;
typedef int PWCHAR ;
typedef int PUCHAR ;
typedef TYPE_1__* PNDISUIO_QUERY_BINDING ;
typedef TYPE_1__* PIP_INTERFACE_INFO ;
typedef int NDISUIO_QUERY_BINDING ;
typedef size_t LONG ;
typedef int IP_INTERFACE_INFO ;
typedef TYPE_3__ IP_ADAPTER_INDEX_MAP ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,TYPE_1__*,scalar_t__,TYPE_1__*,scalar_t__,scalar_t__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__*) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ) ;

BOOL
FUNC_8(DWORD VAR_7, HANDLE *VAR_8, IP_ADAPTER_INDEX_MAP *VAR_9)
{
    HANDLE VAR_10;
    BOOL VAR_11;
    DWORD VAR_12;
    DWORD VAR_13 = sizeof(NDISUIO_QUERY_BINDING) + (1024 * sizeof(WCHAR));
    PNDISUIO_QUERY_BINDING VAR_14;
    DWORD VAR_15, VAR_16;
    LONG VAR_17;
    PIP_INTERFACE_INFO VAR_18 = ((void*)0);


    VAR_10 = FUNC_6();
    if (VAR_10 == VAR_2)
        return VAR_1;


    VAR_14 = FUNC_4(FUNC_3(), 0, VAR_13);
    if (!VAR_14)
    {
        FUNC_0(VAR_10);
        return VAR_1;
    }


    VAR_14->BindingIndex = VAR_7;
    VAR_11 = FUNC_1(VAR_10,
                               VAR_4,
                               VAR_14,
                               VAR_13,
                               VAR_14,
                               VAR_13,
                               &VAR_12,
                               ((void*)0));

    if (!VAR_11)
    {
        FUNC_5(FUNC_3(), 0, VAR_14);
        FUNC_0(VAR_10);
        return VAR_1;
    }


    VAR_11 = FUNC_1(VAR_10,
                               VAR_3,
                               (PUCHAR)VAR_14 + VAR_14->DeviceNameOffset,
                               VAR_14->DeviceNameLength,
                               ((void*)0),
                               0,
                               &VAR_12,
                               ((void*)0));

    if (!VAR_11)
    {
        FUNC_5(FUNC_3(), 0, VAR_14);
        FUNC_0(VAR_10);
        return VAR_1;
    }


    VAR_16 = sizeof(IP_INTERFACE_INFO);
    do {
        if (VAR_18) FUNC_5(FUNC_3(), 0, VAR_18);
        VAR_18 = FUNC_4(FUNC_3(), 0, VAR_16);
        if (!VAR_18)
        {
            FUNC_5(FUNC_3(), 0, VAR_14);
            FUNC_0(VAR_10);
            return VAR_1;
        }
        VAR_15 = FUNC_2(VAR_18, &VAR_16);
    } while (VAR_15 == VAR_0);

    if (VAR_15 != VAR_5)
    {
        FUNC_5(FUNC_3(), 0, VAR_14);
        FUNC_5(FUNC_3(), 0, VAR_18);
        FUNC_0(VAR_10);
        return VAR_1;
    }

    for (VAR_17 = 0; VAR_17 < VAR_18->NumAdapters; VAR_17++)
    {
        if (FUNC_7((PWCHAR)((PUCHAR)VAR_14 + VAR_14->DeviceNameOffset),
                   VAR_18->Adapter[VAR_17].Name))
        {
            *VAR_9 = VAR_18->Adapter[VAR_17];
            *VAR_8 = VAR_10;

            FUNC_5(FUNC_3(), 0, VAR_14);
            FUNC_5(FUNC_3(), 0, VAR_18);

            return VAR_6;
        }
    }

    FUNC_5(FUNC_3(), 0, VAR_14);
    FUNC_5(FUNC_3(), 0, VAR_18);
    FUNC_0(VAR_10);

    return VAR_1;
}
