
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_8__ {scalar_t__ FileNameLength; int FileName; } ;
struct TYPE_6__ {scalar_t__ Length; int Buffer; } ;
struct TYPE_7__ {TYPE_1__ PathNameU; } ;
typedef TYPE_2__* PVFATFCB ;
typedef scalar_t__* PULONG ;
typedef int PFILE_OBJECT ;
typedef TYPE_3__* PFILE_NAME_INFORMATION ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static
NTSTATUS
FUNC_5(
    PFILE_OBJECT VAR_4,
    PVFATFCB VAR_5,
    PDEVICE_EXTENSION VAR_6,
    PFILE_NAME_INFORMATION VAR_7,
    PULONG VAR_8)
{
    ULONG VAR_9;

    FUNC_3(VAR_4);
    FUNC_3(VAR_6);

    FUNC_0(VAR_7 != ((void*)0));
    FUNC_0(VAR_5 != ((void*)0));


    if (*VAR_8 < (ULONG)FUNC_1(VAR_0, VAR_1[0]))
        return VAR_2;


    VAR_7->FileNameLength = VAR_5->PathNameU.Length;


    VAR_9 = FUNC_4(VAR_5->PathNameU.Length,
                      *VAR_8 - FUNC_1(VAR_0, VAR_1[0]));


    FUNC_2(VAR_7->FileName, VAR_5->PathNameU.Buffer, VAR_9);


    if (*VAR_8 < VAR_5->PathNameU.Length + (ULONG)FUNC_1(VAR_0, VAR_1[0]))
    {

        *VAR_8 -= FUNC_1(VAR_0, VAR_1[0]) + VAR_9;
        return VAR_2;
    }


    *VAR_8 -= (FUNC_1(VAR_0, VAR_1[0]) + VAR_5->PathNameU.Length);

    return VAR_3;
}
