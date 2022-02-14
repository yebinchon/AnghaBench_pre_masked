
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_16__ {scalar_t__ QuadPart; } ;
struct TYPE_15__ {scalar_t__ QuadPart; } ;
struct TYPE_14__ {scalar_t__ QuadPart; } ;
struct TYPE_17__ {TYPE_6__ AllocationSize; TYPE_5__ ValidDataLength; TYPE_4__ FileSize; } ;
struct TYPE_12__ {scalar_t__ FileSize; } ;
struct TYPE_11__ {scalar_t__ FileSize; } ;
struct TYPE_13__ {TYPE_2__ Fat; TYPE_1__ FatX; } ;
struct TYPE_18__ {TYPE_7__ RFCB; TYPE_3__ entry; } ;
typedef TYPE_8__* PVFATFCB ;
typedef int PFILE_OBJECT ;
typedef int PCC_FILE_SIZES ;
typedef scalar_t__ LONGLONG ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_8__*) ;

__attribute__((used)) static
VOID
FUNC_3(
    PFILE_OBJECT VAR_0,
    PVFATFCB VAR_1,
    ULONG VAR_2,
    ULONG VAR_3,
    BOOLEAN VAR_4)
{
    if (VAR_2 > 0)
    {
        VAR_1->RFCB.AllocationSize.QuadPart = FUNC_1(VAR_2, VAR_3);
    }
    else
    {
        VAR_1->RFCB.AllocationSize.QuadPart = (LONGLONG)0;
    }
    if (!FUNC_2(VAR_1))
    {
        if (VAR_4)
            VAR_1->entry.FatX.FileSize = VAR_2;
        else
            VAR_1->entry.Fat.FileSize = VAR_2;
    }
    VAR_1->RFCB.FileSize.QuadPart = VAR_2;
    VAR_1->RFCB.ValidDataLength.QuadPart = VAR_2;

    FUNC_0(VAR_0, (PCC_FILE_SIZES)&VAR_1->RFCB.AllocationSize);
}
