
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ USHORT ;
struct TYPE_27__ {int* Buffer; int Length; int MaximumLength; } ;
typedef TYPE_2__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_29__ {int Length; int Buffer; } ;
struct TYPE_26__ {int Length; int Buffer; } ;
struct TYPE_28__ {TYPE_1__ LongNameU; TYPE_4__ PathNameU; struct TYPE_28__* parentFcb; } ;
typedef int* PWCHAR ;
typedef TYPE_3__* PVFATFCB ;
typedef TYPE_4__* PUNICODE_STRING ;
typedef int PDEVICE_EXTENSION ;
typedef int NameBuffer ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__ FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int *,int) ;
 int FUNC_10 (int*,int*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (int ,TYPE_3__*,TYPE_2__*,TYPE_3__**) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_14 (int ,TYPE_2__*) ;
 TYPE_3__* FUNC_15 (int ) ;
 int FUNC_16 (int ,TYPE_3__*) ;

NTSTATUS
FUNC_17(
    PDEVICE_EXTENSION VAR_5,
    PVFATFCB *VAR_6,
    PVFATFCB *VAR_7,
    PUNICODE_STRING VAR_8)
{
    NTSTATUS VAR_9;
    PVFATFCB VAR_10 = ((void*)0);
    PVFATFCB VAR_11;
    UNICODE_STRING VAR_12;
    UNICODE_STRING VAR_13 = FUNC_3(L"\\");
    UNICODE_STRING VAR_14;
    WCHAR VAR_15[260];
    PWCHAR VAR_16, VAR_17, VAR_18;
    ULONG VAR_19;

    FUNC_1("vfatGetFCBForFile (%p,%p,%p,%wZ)\n",
           VAR_5, VAR_6, VAR_7, VAR_8);

    FUNC_9(&VAR_14, VAR_15, sizeof(VAR_15));

    VAR_11 = *VAR_6;

    if (VAR_11 == ((void*)0))
    {

        FUNC_7(&VAR_14, VAR_8);


        if (FUNC_8(&VAR_14, &VAR_13, VAR_0))
        {
            FUNC_1("returning root FCB\n");

            VAR_10 = FUNC_15(VAR_5);
            *VAR_7 = VAR_10;
            *VAR_6 = ((void*)0);

            return (VAR_10 != ((void*)0)) ? VAR_4 : VAR_3;
        }


        VAR_10 = FUNC_14(VAR_5, &VAR_14);
        if (VAR_10)
        {
            *VAR_7 = VAR_10;
            *VAR_6 = VAR_10->parentFcb;
            FUNC_13(VAR_5, *VAR_6);
            return VAR_4;
        }

        VAR_18 = VAR_16 = VAR_14.Buffer + VAR_14.Length / sizeof(WCHAR) - 1;
        while (*VAR_16 != L'\\' && VAR_16 > VAR_14.Buffer)
        {
            VAR_16--;
        }

        if (VAR_16 > VAR_14.Buffer)
        {
            VAR_12.Buffer = VAR_14.Buffer;
            VAR_12.MaximumLength = VAR_12.Length = (VAR_16 - VAR_14.Buffer) * sizeof(WCHAR);
            VAR_10 = FUNC_14(VAR_5, &VAR_12);
            if (VAR_10)
            {
                VAR_19 = (VAR_16 - VAR_14.Buffer) * sizeof(WCHAR);
                if (VAR_19 != VAR_10->PathNameU.Length)
                {
                    if (VAR_14.Length + VAR_10->PathNameU.Length - VAR_19 > VAR_14.MaximumLength)
                    {
                        FUNC_16(VAR_5, VAR_10);
                        return VAR_1;
                    }
                    FUNC_10(VAR_14.Buffer + VAR_10->PathNameU.Length / sizeof(WCHAR),
                        VAR_16, VAR_14.Length - VAR_19);
                    VAR_14.Length += (USHORT)(VAR_10->PathNameU.Length - VAR_19);
                    VAR_16 = VAR_14.Buffer + VAR_10->PathNameU.Length / sizeof(WCHAR);
                    VAR_18 = VAR_14.Buffer + VAR_14.Length / sizeof(WCHAR) - 1;
                }
                FUNC_6(VAR_14.Buffer, VAR_10->PathNameU.Buffer, VAR_10->PathNameU.Length);
            }
        }
        else
        {
            VAR_10 = ((void*)0);
        }

        if (VAR_10 == ((void*)0))
        {
            VAR_10 = FUNC_15(VAR_5);
            VAR_16 = VAR_14.Buffer;
        }

        VAR_11 = ((void*)0);
        VAR_17 = VAR_16;
    }
    else
    {

        FUNC_7(&VAR_14, &VAR_11->PathNameU);
        VAR_16 = VAR_14.Buffer + VAR_14.Length / sizeof(WCHAR) - 1;
        if (*VAR_16 != L'\\')
        {
            FUNC_5(&VAR_14, L"\\");
            VAR_16++;
        }
        FUNC_0(*VAR_16 == L'\\');
        FUNC_4(&VAR_14, VAR_8);

        VAR_10 = VAR_11;
        VAR_11 = ((void*)0);
        VAR_17 = VAR_16;
        VAR_18 = VAR_14.Buffer + VAR_14.Length / sizeof(WCHAR) - 1;
    }

    while (VAR_16 <= VAR_18)
    {
        if (VAR_11)
        {
            FUNC_16(VAR_5, VAR_11);
            VAR_11 = ((void*)0);
        }

        if (!FUNC_12(VAR_10))
        {
            FUNC_1 ("Element in requested path is not a directory\n");

            FUNC_16(VAR_5, VAR_10);
            VAR_10 = ((void*)0);
            *VAR_6 = ((void*)0);
            *VAR_7 = ((void*)0);

            return VAR_3;
        }
        VAR_11 = VAR_10;
        if (VAR_17 < VAR_16)
        {
            VAR_19 = (VAR_16 - VAR_17) * sizeof(WCHAR);
            if (VAR_19 != VAR_11->LongNameU.Length)
            {
                if (VAR_14.Length + VAR_11->LongNameU.Length - VAR_19 > VAR_14.MaximumLength)
                {
                    FUNC_16(VAR_5, VAR_11);
                    *VAR_6 = ((void*)0);
                    *VAR_7 = ((void*)0);
                    return VAR_1;
                }
                FUNC_10(VAR_17 + VAR_11->LongNameU.Length / sizeof(WCHAR), VAR_16,
                    VAR_14.Length - (VAR_16 - VAR_14.Buffer) * sizeof(WCHAR));
                VAR_14.Length += (USHORT)(VAR_11->LongNameU.Length - VAR_19);
                VAR_16 = VAR_17 + VAR_11->LongNameU.Length / sizeof(WCHAR);
                VAR_18 = VAR_14.Buffer + VAR_14.Length / sizeof(WCHAR) - 1;
            }
            FUNC_6(VAR_17, VAR_11->LongNameU.Buffer, VAR_11->LongNameU.Length);
        }
        VAR_16++;
        VAR_17 = VAR_16;
        while (*VAR_16 != L'\\' && VAR_16 <= VAR_18)
        {
            VAR_16++;
        }
        VAR_12.Buffer = VAR_14.Buffer;
        VAR_12.Length = (VAR_16 - VAR_12.Buffer) * sizeof(WCHAR);
        VAR_12.MaximumLength = VAR_14.MaximumLength;
        FUNC_1("%wZ\n", &VAR_12);
        VAR_10 = FUNC_14(VAR_5, &VAR_12);
        if (VAR_10 == ((void*)0))
        {
            VAR_12.Buffer = VAR_17;
            VAR_12.MaximumLength = VAR_12.Length = (VAR_16 - VAR_17) * sizeof(WCHAR);
            VAR_9 = FUNC_11(VAR_5, VAR_11, &VAR_12, &VAR_10);
            if (VAR_9 == VAR_2)
            {
                *VAR_7 = ((void*)0);
                if (VAR_16 > VAR_18)
                {
                    *VAR_6 = VAR_11;
                    return VAR_2;
                }
                else
                {
                    FUNC_16(VAR_5, VAR_11);
                    *VAR_6 = ((void*)0);
                    return VAR_3;
                }
            }
            else if (!FUNC_2(VAR_9))
            {
                FUNC_16(VAR_5, VAR_11);
                *VAR_6 = ((void*)0);
                *VAR_7 = ((void*)0);

                return VAR_9;
            }
        }
    }

    *VAR_6 = VAR_11;
    *VAR_7 = VAR_10;

    return VAR_4;
}
