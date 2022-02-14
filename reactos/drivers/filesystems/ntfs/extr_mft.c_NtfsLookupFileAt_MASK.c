
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_13__ {int FileRecLookasideList; } ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int * PULONGLONG ;
typedef int * PFILE_RECORD_HEADER ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_1__*,int *,int ,scalar_t__,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_7(PDEVICE_EXTENSION VAR_3,
                 PUNICODE_STRING VAR_4,
                 BOOLEAN VAR_5,
                 PFILE_RECORD_HEADER *VAR_6,
                 PULONGLONG VAR_7,
                 ULONGLONG VAR_8)
{
    UNICODE_STRING VAR_9, VAR_10;
    NTSTATUS VAR_11;
    ULONG VAR_12 = 0;

    FUNC_0("NtfsLookupFileAt(%p, %wZ, %s, %p, %p, %I64x)\n",
           VAR_3,
           VAR_4,
           VAR_5 ? "TRUE" : "FALSE",
           VAR_6,
           VAR_7,
           VAR_8);

    FUNC_3(*VAR_4, &VAR_9, &VAR_10);

    while (VAR_9.Length != 0)
    {
        FUNC_0("Current: %wZ\n", &VAR_9);

        VAR_11 = FUNC_5(VAR_3, VAR_8, &VAR_9, &VAR_12, VAR_0, VAR_5, &VAR_8);
        if (!FUNC_4(VAR_11))
        {
            return VAR_11;
        }

        if (VAR_10.Length == 0)
            break;

        FUNC_3(VAR_9, &VAR_9, &VAR_10);
    }

    *VAR_6 = FUNC_1(&VAR_3->FileRecLookasideList);
    if (*VAR_6 == ((void*)0))
    {
        FUNC_0("NtfsLookupFileAt: Can't allocate MFT record\n");
        return VAR_1;
    }

    VAR_11 = FUNC_6(VAR_3, VAR_8, *VAR_6);
    if (!FUNC_4(VAR_11))
    {
        FUNC_0("NtfsLookupFileAt: Can't read MFT record\n");
        FUNC_2(&VAR_3->FileRecLookasideList, *VAR_6);
        return VAR_11;
    }

    *VAR_7 = VAR_8;

    return VAR_2;
}
