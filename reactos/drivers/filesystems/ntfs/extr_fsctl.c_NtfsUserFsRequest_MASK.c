
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int DeviceExtension; } ;
struct TYPE_7__ {int FsControlCode; } ;
struct TYPE_8__ {TYPE_1__ FileSystemControl; } ;
struct TYPE_9__ {TYPE_2__ Parameters; } ;
typedef int PIRP ;
typedef TYPE_3__* PIO_STACK_LOCATION ;
typedef TYPE_4__* PDEVICE_OBJECT ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
NTSTATUS
FUNC_7(PDEVICE_OBJECT VAR_5,
                  PIRP VAR_6)
{
    NTSTATUS VAR_7;
    PIO_STACK_LOCATION VAR_8;
    PDEVICE_EXTENSION VAR_9;

    FUNC_0("NtfsUserFsRequest(%p, %p)\n", VAR_5, VAR_6);

    VAR_8 = FUNC_5(VAR_6);
    VAR_9 = VAR_5->DeviceExtension;
    switch (VAR_8->Parameters.FileSystemControl.FsControlCode)
    {
        case 143:
        case 142:
        case 141:
        case 140:

        case 137:

        case 134:
        case 133:
        case 132:
        case 131:
        case 130:

        case 128:
            VAR_4;
            FUNC_1("Unimplemented user request: %x\n", VAR_8->Parameters.FileSystemControl.FsControlCode);
            VAR_7 = VAR_2;
            break;

        case 135:
            VAR_7 = FUNC_6(VAR_9, VAR_6, VAR_3);
            break;

        case 129:
            VAR_7 = FUNC_6(VAR_9, VAR_6, VAR_0);
            break;

        case 138:
            VAR_7 = FUNC_2(VAR_9, VAR_6);
            break;

        case 139:
            VAR_7 = FUNC_3(VAR_9, VAR_6);
            break;

        case 136:
            VAR_7 = FUNC_4(VAR_9, VAR_6);
            break;

        default:
            FUNC_0("Invalid user request: %x\n", VAR_8->Parameters.FileSystemControl.FsControlCode);
            VAR_7 = VAR_1;
            break;
    }

    return VAR_7;
}
