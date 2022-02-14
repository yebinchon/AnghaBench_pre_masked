
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int CurrentByteOffset; } ;
struct TYPE_6__ {int CurrentByteOffset; } ;
typedef TYPE_1__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_2__ FILE_POSITION_INFORMATION ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;

__attribute__((used)) static NTSTATUS FUNC_1(FILE_POSITION_INFORMATION* VAR_1, PFILE_OBJECT VAR_2, LONG* VAR_3) {
    FUNC_0(VAR_1, sizeof(FILE_POSITION_INFORMATION));

    *VAR_3 -= sizeof(FILE_POSITION_INFORMATION);

    VAR_1->CurrentByteOffset = VAR_2->CurrentByteOffset;

    return VAR_0;
}
