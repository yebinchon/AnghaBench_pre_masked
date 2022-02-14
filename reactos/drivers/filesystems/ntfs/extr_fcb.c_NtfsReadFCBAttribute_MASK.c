
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_14__ {int pRecord; } ;
struct TYPE_13__ {int MFTIndex; } ;
struct TYPE_12__ {int FileRecLookasideList; } ;
typedef int * PVOID ;
typedef TYPE_1__* PNTFS_VCB ;
typedef TYPE_2__* PNTFS_FCB ;
typedef TYPE_3__* PNTFS_ATTR_CONTEXT ;
typedef int * PFILE_RECORD_HEADER ;
typedef int PCWSTR ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ,int ,TYPE_3__**,int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,int ,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS
FUNC_9(PNTFS_VCB VAR_4,
                     PNTFS_FCB VAR_5,
                     ULONG VAR_6,
                     PCWSTR VAR_7,
                     ULONG VAR_8,
                     PVOID * VAR_9)
{
    NTSTATUS VAR_10;
    PFILE_RECORD_HEADER VAR_11;
    PNTFS_ATTR_CONTEXT VAR_12;
    ULONGLONG VAR_13;

    VAR_11 = FUNC_1(&VAR_4->FileRecLookasideList);
    if (VAR_11 == ((void*)0))
    {
        return VAR_1;
    }

    VAR_10 = FUNC_7(VAR_4, VAR_5->MFTIndex, VAR_11);
    if (!FUNC_5(VAR_10))
    {
        FUNC_3(&VAR_4->FileRecLookasideList, VAR_11);
        return VAR_10;
    }

    VAR_10 = FUNC_4(VAR_4, VAR_11, VAR_6, VAR_7, VAR_8, &VAR_12, ((void*)0));
    if (!FUNC_5(VAR_10))
    {
        FUNC_3(&VAR_4->FileRecLookasideList, VAR_11);
        return VAR_10;
    }

    VAR_13 = FUNC_0(VAR_12->pRecord);
    *VAR_9 = FUNC_2(VAR_0, VAR_13, VAR_3);
    if (*VAR_9 == ((void*)0))
    {
        FUNC_8(VAR_12);
        FUNC_3(&VAR_4->FileRecLookasideList, VAR_11);
        return VAR_1;
    }

    FUNC_6(VAR_4, VAR_12, 0, *VAR_9, VAR_13);

    FUNC_8(VAR_12);
    FUNC_3(&VAR_4->FileRecLookasideList, VAR_11);

    return VAR_2;
}
