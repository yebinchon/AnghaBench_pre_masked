
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ locked_fileobj; int locked; } ;
typedef TYPE_1__ device_extension ;
struct TYPE_7__ {scalar_t__ FileObject; } ;
typedef int PIRP ;
typedef TYPE_2__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static NTSTATUS FUNC_4(device_extension* VAR_3, PIRP VAR_4) {
    PIO_STACK_LOCATION VAR_5 = FUNC_1(VAR_4);

    FUNC_2("FSCTL_UNLOCK_VOLUME\n");

    if (!VAR_3->locked || VAR_5->FileObject != VAR_3->locked_fileobj)
        return VAR_1;

    FUNC_2("unlocking volume\n");

    FUNC_3(VAR_3);

    FUNC_0(VAR_5->FileObject, VAR_0);

    return VAR_2;
}
