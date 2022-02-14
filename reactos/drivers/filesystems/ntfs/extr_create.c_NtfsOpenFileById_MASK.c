
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONGLONG ;
struct TYPE_14__ {int FileRecLookasideList; } ;
struct TYPE_13__ {int Flags; } ;
typedef int * PNTFS_FCB ;
typedef TYPE_1__* PFILE_RECORD_HEADER ;
typedef int PFILE_OBJECT ;
typedef TYPE_2__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_2__*,int ,int,int **) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int * FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int *,TYPE_1__*,int,int **) ;
 int FUNC_8 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
NTSTATUS
FUNC_10(PDEVICE_EXTENSION VAR_6,
                 PFILE_OBJECT VAR_7,
                 ULONGLONG VAR_8,
                 PNTFS_FCB * VAR_9)
{
    NTSTATUS VAR_10;
    PNTFS_FCB VAR_11;
    PFILE_RECORD_HEADER VAR_12;

    FUNC_1("NtfsOpenFileById(%p, %p, %I64x, %p)\n", VAR_6, VAR_7, VAR_8, VAR_9);

    FUNC_0(VAR_8 < VAR_2);
    if (VAR_8 > 0xb)
    {
        return VAR_4;
    }

    VAR_12 = FUNC_2(&VAR_6->FileRecLookasideList);
    if (VAR_12 == ((void*)0))
    {
        return VAR_3;
    }

    VAR_10 = FUNC_8(VAR_6, VAR_8, VAR_12);
    if (!FUNC_4(VAR_10))
    {
        FUNC_3(&VAR_6->FileRecLookasideList, VAR_12);
        return VAR_10;
    }

    if (!(VAR_12->Flags & VAR_0))
    {
        FUNC_3(&VAR_6->FileRecLookasideList, VAR_12);
        return VAR_5;
    }

    VAR_11 = FUNC_6(VAR_6, VAR_1[VAR_8]);
    if (VAR_11 == ((void*)0))
    {
        UNICODE_STRING VAR_13;

        FUNC_9(&VAR_13, VAR_1[VAR_8]);
        VAR_10 = FUNC_7(VAR_6, ((void*)0), &VAR_13, ((void*)0), VAR_12, VAR_8, &VAR_11);
        if (!FUNC_4(VAR_10))
        {
            FUNC_3(&VAR_6->FileRecLookasideList, VAR_12);
            return VAR_10;
        }
    }

    FUNC_0(VAR_11 != ((void*)0));

    FUNC_3(&VAR_6->FileRecLookasideList, VAR_12);

    VAR_10 = FUNC_5(VAR_6,
                                       VAR_11,
                                       VAR_7);
    *VAR_9 = VAR_11;

    return VAR_10;
}
