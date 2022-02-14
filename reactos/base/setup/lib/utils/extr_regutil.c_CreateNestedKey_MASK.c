
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_12__ {int* Buffer; int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_13__ {TYPE_1__* ObjectName; } ;
typedef int* PWCHAR ;
typedef TYPE_2__* POBJECT_ATTRIBUTES ;
typedef int * PHANDLE ;
typedef TYPE_2__ OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int HANDLE ;
typedef int ACCESS_MASK ;


 int FUNC_0 (char*,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (char*,TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_2__*,int ,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int*) ;
 int* FUNC_9 (int*,char) ;

NTSTATUS
FUNC_10(PHANDLE VAR_7,
                ACCESS_MASK VAR_8,
                POBJECT_ATTRIBUTES VAR_9,
                ULONG VAR_10)
{
    OBJECT_ATTRIBUTES VAR_11;
    UNICODE_STRING VAR_12;
    ULONG VAR_13;
    NTSTATUS VAR_14;
    USHORT VAR_15;
    PWCHAR VAR_16;
    HANDLE VAR_17;

    VAR_14 = FUNC_4(VAR_7,
                         VAR_0,
                         VAR_9,
                         0,
                         ((void*)0),
                         VAR_10,
                         &VAR_13);
    FUNC_0("NtCreateKey(%wZ) called (Status %lx)\n", VAR_9->ObjectName, VAR_14);
    if (VAR_14 != VAR_3)
    {
        if (!FUNC_2(VAR_14))
            FUNC_1("CreateNestedKey: NtCreateKey(%wZ) failed (Status %lx)\n", VAR_9->ObjectName, VAR_14);

        return VAR_14;
    }


    FUNC_5(&VAR_11,
                  VAR_9,
                  sizeof(OBJECT_ATTRIBUTES));
    FUNC_6(&VAR_12,
                           VAR_9->ObjectName->Buffer);
    VAR_11.ObjectName = &VAR_12;
    VAR_15 = VAR_12.Length;


    while (VAR_14 == VAR_3)
    {
        VAR_16 = FUNC_9(VAR_12.Buffer, '\\');
        if (VAR_16 == ((void*)0) || VAR_16 == VAR_12.Buffer)
        {
            VAR_14 = VAR_5;
            break;
        }
        *VAR_16 = (WCHAR)0;
        VAR_12.Length = FUNC_8(VAR_12.Buffer) * sizeof(WCHAR);

        VAR_14 = FUNC_4(&VAR_17,
                             VAR_1,
                             &VAR_11,
                             0,
                             ((void*)0),
                             VAR_2,
                             &VAR_13);
        FUNC_0("NtCreateKey(%wZ) called (Status %lx)\n", &VAR_12, VAR_14);
        if (!FUNC_2(VAR_14) && VAR_14 != VAR_3)
            FUNC_1("CreateNestedKey: NtCreateKey(%wZ) failed (Status %lx)\n", VAR_11.ObjectName, VAR_14);
    }

    if (!FUNC_2(VAR_14))
    {
        FUNC_7(&VAR_12);
        return VAR_14;
    }


    while (VAR_6)
    {
        if (VAR_12.Length == VAR_15)
        {
            VAR_14 = VAR_4;
            *VAR_7 = VAR_17;
            break;
        }
        FUNC_3(VAR_17);

        VAR_12.Buffer[VAR_12.Length / sizeof(WCHAR)] = L'\\';
        VAR_12.Length = FUNC_8(VAR_12.Buffer) * sizeof(WCHAR);

        VAR_14 = FUNC_4(&VAR_17,
                             VAR_0,
                             &VAR_11,
                             0,
                             ((void*)0),
                             VAR_10,
                             &VAR_13);
        FUNC_0("NtCreateKey(%wZ) called (Status %lx)\n", &VAR_12, VAR_14);
        if (!FUNC_2(VAR_14))
        {
            FUNC_1("CreateNestedKey: NtCreateKey(%wZ) failed (Status %lx)\n", VAR_11.ObjectName, VAR_14);
            break;
        }
    }

    FUNC_7(&VAR_12);

    return VAR_14;
}
