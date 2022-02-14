
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_8__ {int FileNameLength; int FileName; } ;
struct TYPE_7__ {int PathName; } ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__* PNTFS_FCB ;
typedef int PFILE_OBJECT ;
typedef TYPE_2__* PFILE_NAME_INFORMATION ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,TYPE_1__*,int ,TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_7(PFILE_OBJECT VAR_5,
                       PNTFS_FCB VAR_6,
                       PDEVICE_OBJECT VAR_7,
                       PFILE_NAME_INFORMATION VAR_8,
                       PULONG VAR_9)
{
    ULONG VAR_10;

    FUNC_4(VAR_5);
    FUNC_4(VAR_7);

    FUNC_1("NtfsGetNameInformation(%p, %p, %p, %p, %p)\n", VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

    FUNC_0(VAR_8 != ((void*)0));
    FUNC_0(VAR_6 != ((void*)0));


    if (*VAR_9 < (ULONG)FUNC_2(VAR_0, VAR_1[0]))
        return VAR_3;


    VAR_8->FileNameLength = FUNC_6(VAR_6->PathName) * sizeof(WCHAR);


    VAR_10 = FUNC_5(VAR_8->FileNameLength,
                      *VAR_9 - FUNC_2(VAR_0, VAR_1[0]));


    FUNC_3(VAR_8->FileName, VAR_6->PathName, VAR_10);


    if (*VAR_9 < VAR_8->FileNameLength + (ULONG)FUNC_2(VAR_0, VAR_1[0]))
    {

        *VAR_9 -= FUNC_2(VAR_0, VAR_1[0]) + VAR_10;
        return VAR_2;
    }


    *VAR_9 -= (FUNC_2(VAR_0, VAR_1[0]) + VAR_8->FileNameLength);

    return VAR_4;
}
