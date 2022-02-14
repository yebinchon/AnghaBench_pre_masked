
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_24__ {int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONGLONG ;
struct TYPE_27__ {int Flags; } ;
struct TYPE_26__ {int MFTIndex; } ;
struct TYPE_25__ {int FileRecLookasideList; } ;
typedef int* PWSTR ;
typedef TYPE_2__* PNTFS_VCB ;
typedef TYPE_3__* PNTFS_FCB ;
typedef int PNTFS_ATTR_CONTEXT ;
typedef TYPE_4__* PFILE_RECORD_HEADER ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,TYPE_3__*,int*,char*,TYPE_3__**) ;
 int FUNC_1 (char*,TYPE_1__*,int*) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,int ,int*,int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ,TYPE_4__**,int *,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_1__*,int*,TYPE_4__*,int ,TYPE_3__**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int*,char*) ;
 int FUNC_10 (int*) ;
 int* FUNC_11 (int*,int) ;

__attribute__((used)) static NTSTATUS
FUNC_12(PNTFS_VCB VAR_5,
                PNTFS_FCB VAR_6,
                PWSTR VAR_7,
                BOOLEAN VAR_8,
                PNTFS_FCB *VAR_9)
{
    NTSTATUS VAR_10;
    ULONGLONG VAR_11;
    UNICODE_STRING VAR_12;
    PFILE_RECORD_HEADER VAR_13;
    ULONGLONG VAR_14;
    PWSTR VAR_15, VAR_16;
    PNTFS_ATTR_CONTEXT VAR_17;
    USHORT VAR_18 = 0;

    FUNC_0("NtfsDirFindFile(%p, %p, %S, %s, %p)\n",
           VAR_5,
           VAR_6,
           VAR_7,
           VAR_8 ? "TRUE" : "FALSE",
           VAR_9);

    *VAR_9 = ((void*)0);
    FUNC_8(&VAR_12, VAR_7);
    VAR_11 = VAR_6->MFTIndex;

    VAR_15 = FUNC_11(VAR_7, L':');
    if (VAR_15 != ((void*)0))
    {
        VAR_18 = VAR_12.Length;
        VAR_12.Length = (VAR_15 - VAR_7) * sizeof(WCHAR);

        if (FUNC_9(VAR_15 + 1, L"$DATA") == 0)
        {
            VAR_16 = VAR_15;
            VAR_15[0] = VAR_4;
            VAR_15 = FUNC_11(VAR_7, L':');
            if (VAR_15 != ((void*)0))
            {
                VAR_18 = VAR_12.Length;
                VAR_12.Length = (VAR_15 - VAR_7) * sizeof(WCHAR);
            }
            else
            {
                VAR_15 = VAR_16;
                VAR_15[0] = L':';
            }
        }


        ++VAR_15;
        FUNC_1("Will now look for file '%wZ' with stream '%S'\n", &VAR_12, VAR_15);
    }

    VAR_10 = FUNC_5(VAR_5, &VAR_12, VAR_8, &VAR_13, &VAR_14, VAR_11);
    if (!FUNC_4(VAR_10))
    {
        return VAR_10;
    }

    if (VAR_18 != 0)
    {
        VAR_12.Length = VAR_18;
    }

    if ((VAR_13->Flags & VAR_1) && VAR_15 != 0)
    {
        FUNC_2(&VAR_5->FileRecLookasideList, VAR_13);
        return VAR_2;
    }
    else if (VAR_15 != 0)
    {
        VAR_10 = FUNC_3(VAR_5, VAR_13, VAR_0, VAR_15, FUNC_10(VAR_15), &VAR_17, ((void*)0));
        if (!FUNC_4(VAR_10))
        {
            return VAR_3;
        }
        FUNC_7(VAR_17);
    }

    VAR_10 = FUNC_6(VAR_5, VAR_6, &VAR_12, VAR_15, VAR_13, VAR_14, VAR_9);
    FUNC_2(&VAR_5->FileRecLookasideList, VAR_13);

    return VAR_10;
}
