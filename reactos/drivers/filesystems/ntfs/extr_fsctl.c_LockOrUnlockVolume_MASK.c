
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int Flags; int OpenHandleCount; } ;
struct TYPE_10__ {TYPE_1__* FsContext; } ;
struct TYPE_9__ {TYPE_3__* FileObject; } ;
struct TYPE_8__ {int Flags; } ;
typedef TYPE_1__* PNTFS_FCB ;
typedef int PIRP ;
typedef TYPE_2__* PIO_STACK_LOCATION ;
typedef TYPE_3__* PFILE_OBJECT ;
typedef TYPE_4__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,TYPE_4__*,int ,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(PDEVICE_EXTENSION VAR_4,
                   PIRP VAR_5,
                   BOOLEAN VAR_6)
{
    PFILE_OBJECT VAR_7;
    PNTFS_FCB VAR_8;
    PIO_STACK_LOCATION VAR_9;

    FUNC_0("LockOrUnlockVolume(%p, %p, %d)\n", VAR_4, VAR_5, VAR_6);

    VAR_9 = FUNC_1(VAR_5);
    VAR_7 = VAR_9->FileObject;
    VAR_8 = VAR_7->FsContext;


    if (!(VAR_8->Flags & VAR_0))
    {
        return VAR_1;
    }


    if (((VAR_4->Flags & VAR_3) && VAR_6) ||
        (!(VAR_4->Flags & VAR_3) && !VAR_6))
    {
        return VAR_1;
    }


    if (VAR_6 && VAR_4->OpenHandleCount != 1)
    {
        return VAR_1;
    }


    if (VAR_6)
    {
        VAR_4->Flags |= VAR_3;
    }
    else
    {
        VAR_4->Flags &= ~VAR_3;
    }

    return VAR_2;
}
