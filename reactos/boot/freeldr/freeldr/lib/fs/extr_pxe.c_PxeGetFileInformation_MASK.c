
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {int LowPart; } ;
struct TYPE_6__ {int LowPart; } ;
struct TYPE_8__ {TYPE_2__ CurrentAddress; TYPE_1__ EndingAddress; } ;
typedef TYPE_3__ FILEINFORMATION ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*,scalar_t__,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static ARC_STATUS FUNC_2(ULONG VAR_6, FILEINFORMATION* VAR_7)
{
    if (VAR_5 == VAR_2 || VAR_6 != VAR_5)
        return VAR_0;

    FUNC_0(VAR_7, sizeof(*VAR_7));
    VAR_7->EndingAddress.LowPart = VAR_4;
    VAR_7->CurrentAddress.LowPart = VAR_3;

    FUNC_1("PxeGetFileInformation(%lu) -> FileSize = %lu, FilePointer = 0x%lx\n",
          VAR_6, VAR_7->EndingAddress.LowPart, VAR_7->CurrentAddress.LowPart);

    return VAR_1;
}
