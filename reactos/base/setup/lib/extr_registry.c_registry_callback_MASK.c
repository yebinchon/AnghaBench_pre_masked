
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int UNICODE_STRING ;
typedef int UINT ;
typedef int * PUNICODE_STRING ;
typedef int PINT ;
typedef int PCWSTR ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int INFCONTEXT ;
typedef int HINF ;
typedef int HANDLE ;
typedef int Buffer ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (int *,int *,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int,int ) ;
 scalar_t__ FUNC_12 (int *,int,scalar_t__*,int,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (int ,int *,int *,int) ;

__attribute__((used)) static BOOLEAN
FUNC_14(HINF VAR_7, PCWSTR VAR_8, BOOLEAN VAR_9)
{
    NTSTATUS VAR_10;
    OBJECT_ATTRIBUTES VAR_11;
    UNICODE_STRING VAR_12, VAR_13;
    PUNICODE_STRING VAR_14;
    UINT VAR_15;
    WCHAR VAR_16[VAR_3];

    INFCONTEXT VAR_17;
    PCWSTR VAR_18;
    HANDLE VAR_19, VAR_20;
    BOOLEAN VAR_21;

    VAR_21 = FUNC_9(VAR_7, VAR_8, ((void*)0), &VAR_17);
    if (!VAR_21)
        return VAR_6;

    for (;VAR_21; VAR_21 = FUNC_10(&VAR_17, &VAR_17))
    {

        if (!FUNC_12(&VAR_17, 1, VAR_16, sizeof(VAR_16)/sizeof(WCHAR), ((void*)0)))
            continue;
        VAR_19 = FUNC_3(VAR_16, &VAR_18);
        if (!VAR_19)
            continue;


        if (!FUNC_12(&VAR_17, 2, VAR_16, sizeof(VAR_16)/sizeof(WCHAR), ((void*)0)))
            *VAR_16 = 0;

        FUNC_1("KeyName: <%S\\%S>\n", VAR_18, VAR_16);


        if (!FUNC_11(&VAR_17, 4, (PINT)&VAR_15))
            VAR_15 = 0;

        FUNC_1("Flags: %lx\n", VAR_15);

        FUNC_8(&VAR_12, VAR_16);
        FUNC_4(&VAR_11,
                                   &VAR_12,
                                   VAR_4,
                                   VAR_19,
                                   ((void*)0));

        if (VAR_9 || (VAR_15 & VAR_1))
        {
            VAR_10 = FUNC_7(&VAR_20,
                               VAR_2,
                               &VAR_11);
            if (!FUNC_5(VAR_10))
            {
                FUNC_2("NtOpenKey(%wZ) failed (Status %lx)\n", &VAR_12, VAR_10);
                continue;
            }
        }
        else
        {
            VAR_10 = FUNC_0(&VAR_20,
                                     VAR_2,
                                     &VAR_11,
                                     VAR_5);
            if (!FUNC_5(VAR_10))
            {
                FUNC_2("CreateNestedKey(%wZ) failed (Status %lx)\n", &VAR_12, VAR_10);
                continue;
            }
        }


        if (FUNC_12(&VAR_17, 3, VAR_16, sizeof(VAR_16)/sizeof(WCHAR), ((void*)0)))
        {
            FUNC_8(&VAR_13, VAR_16);
            VAR_14 = &VAR_13;
        }
        else
        {
            VAR_14 = ((void*)0);
        }


        if (!FUNC_13(VAR_20, VAR_14, &VAR_17, VAR_15))
        {
            FUNC_6(VAR_20);
            return VAR_0;
        }

        FUNC_6(VAR_20);
    }

    return VAR_6;
}
