
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ealen; } ;
typedef TYPE_1__ fcb ;
struct TYPE_6__ {int EaSize; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_2__ FILE_EA_INFORMATION ;


 int VAR_0 ;

__attribute__((used)) static NTSTATUS FUNC_0(FILE_EA_INFORMATION* VAR_1, fcb* VAR_2, LONG* VAR_3) {
    *VAR_3 -= sizeof(FILE_EA_INFORMATION);






    VAR_1->EaSize = VAR_2->ealen;

    return VAR_0;
}
