
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int LowPart; } ;
struct TYPE_8__ {int LowPart; } ;
struct TYPE_11__ {TYPE_2__ CurrentAddress; TYPE_1__ EndingAddress; } ;
struct TYPE_10__ {int FilePointer; int FileSize; } ;
typedef TYPE_3__* PFAT_FILE_INFO ;
typedef TYPE_4__ FILEINFORMATION ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (char*,int ,int ,int ) ;

ARC_STATUS FUNC_3(ULONG VAR_1, FILEINFORMATION* VAR_2)
{
    PFAT_FILE_INFO VAR_3 = FUNC_0(VAR_1);

    FUNC_1(VAR_2, sizeof(*VAR_2));
    VAR_2->EndingAddress.LowPart = VAR_3->FileSize;
    VAR_2->CurrentAddress.LowPart = VAR_3->FilePointer;

    FUNC_2("FatGetFileInformation(%lu) -> FileSize = %lu, FilePointer = 0x%lx\n",
          VAR_1, VAR_2->EndingAddress.LowPart, VAR_2->CurrentAddress.LowPart);

    return VAR_0;
}
