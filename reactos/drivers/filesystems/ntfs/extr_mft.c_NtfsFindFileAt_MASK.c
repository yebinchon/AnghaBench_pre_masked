
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_5__ {int FileRecLookasideList; } ;
typedef int PUNICODE_STRING ;
typedef int * PULONGLONG ;
typedef int * PULONG ;
typedef int * PFILE_RECORD_HEADER ;
typedef TYPE_1__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *,int ,scalar_t__,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_6(PDEVICE_EXTENSION VAR_3,
               PUNICODE_STRING VAR_4,
               PULONG VAR_5,
               PFILE_RECORD_HEADER *VAR_6,
               PULONGLONG VAR_7,
               ULONGLONG VAR_8,
               BOOLEAN VAR_9)
{
    NTSTATUS VAR_10;

    FUNC_0("NtfsFindFileAt(%p, %wZ, %lu, %p, %p, %I64x, %s)\n",
           VAR_3,
           VAR_4,
           *VAR_5,
           VAR_6,
           VAR_7,
           VAR_8,
           (VAR_9 ? "TRUE" : "FALSE"));

    VAR_10 = FUNC_4(VAR_3, VAR_8, VAR_4, VAR_5, VAR_2, VAR_9, &VAR_8);
    if (!FUNC_3(VAR_10))
    {
        FUNC_0("NtfsFindFileAt: NtfsFindMftRecord() failed with status 0x%08lx\n", VAR_10);
        return VAR_10;
    }

    *VAR_6 = FUNC_1(&VAR_3->FileRecLookasideList);
    if (*VAR_6 == ((void*)0))
    {
        FUNC_0("NtfsFindFileAt: Can't allocate MFT record\n");
        return VAR_0;
    }

    VAR_10 = FUNC_5(VAR_3, VAR_8, *VAR_6);
    if (!FUNC_3(VAR_10))
    {
        FUNC_0("NtfsFindFileAt: Can't read MFT record\n");
        FUNC_2(&VAR_3->FileRecLookasideList, *VAR_6);
        return VAR_10;
    }

    *VAR_7 = VAR_8;

    return VAR_1;
}
