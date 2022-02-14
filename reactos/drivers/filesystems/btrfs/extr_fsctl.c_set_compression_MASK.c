
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_9__ {int InputBufferLength; } ;
struct TYPE_10__ {TYPE_1__ FileSystemControl; } ;
struct TYPE_13__ {TYPE_2__ Parameters; } ;
struct TYPE_11__ {scalar_t__* SystemBuffer; } ;
struct TYPE_12__ {TYPE_3__ AssociatedIrp; } ;
typedef TYPE_4__* PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_2(PIRP VAR_3) {
    PIO_STACK_LOCATION VAR_4 = FUNC_0(VAR_3);
    USHORT* VAR_5;

    FUNC_1("FSCTL_SET_COMPRESSION\n");

    if (VAR_4->Parameters.FileSystemControl.InputBufferLength < sizeof(USHORT))
        return VAR_1;

    VAR_5 = VAR_3->AssociatedIrp.SystemBuffer;

    if (*VAR_5 != VAR_0)
        return VAR_1;

    return VAR_2;
}
