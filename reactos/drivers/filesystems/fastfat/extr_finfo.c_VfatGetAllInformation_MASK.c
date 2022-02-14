
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int NameInformation; int PositionInformation; int EaInformation; int InternalInformation; int StandardInformation; int BasicInformation; } ;
struct TYPE_13__ {int FileName; } ;
typedef TYPE_1__* PVFATFCB ;
typedef scalar_t__* PULONG ;
typedef int PFILE_OBJECT ;
typedef TYPE_1__* PFILE_ALL_INFORMATION ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_MODE_INFORMATION ;
typedef int FILE_ALIGNMENT_INFORMATION ;
typedef int FILE_ACCESS_INFORMATION ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_11__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*,int ,int *,scalar_t__*) ;
 int FUNC_4 (int ,TYPE_1__*,int ,int *,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int ,int *,scalar_t__*) ;
 int FUNC_6 (int ,TYPE_1__*,int ,int *,scalar_t__*) ;
 int FUNC_7 (int ,TYPE_1__*,int ,int *,scalar_t__*) ;
 int FUNC_8 (TYPE_1__*,int *,scalar_t__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_9(
    PFILE_OBJECT VAR_3,
    PVFATFCB VAR_4,
    PDEVICE_EXTENSION VAR_5,
    PFILE_ALL_INFORMATION VAR_6,
    PULONG VAR_7)
{
    NTSTATUS VAR_8;

    FUNC_0(VAR_6);
    FUNC_0(VAR_4);

    if (*VAR_7 < FUNC_1(VAR_0, VAR_1.FileName))
        return VAR_2;

    *VAR_7 -= (sizeof(FILE_ACCESS_INFORMATION) + sizeof(FILE_MODE_INFORMATION) + sizeof(FILE_ALIGNMENT_INFORMATION));


    VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_6->BasicInformation, VAR_7);
    if (!FUNC_2(VAR_8)) return VAR_8;

    VAR_8 = FUNC_8(VAR_4, &VAR_6->StandardInformation, VAR_7);
    if (!FUNC_2(VAR_8)) return VAR_8;

    VAR_8 = FUNC_5(VAR_4, VAR_5, &VAR_6->InternalInformation, VAR_7);
    if (!FUNC_2(VAR_8)) return VAR_8;

    VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_6->EaInformation, VAR_7);
    if (!FUNC_2(VAR_8)) return VAR_8;

    VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_5, &VAR_6->PositionInformation, VAR_7);
    if (!FUNC_2(VAR_8)) return VAR_8;

    VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_5, &VAR_6->NameInformation, VAR_7);

    return VAR_8;
}
