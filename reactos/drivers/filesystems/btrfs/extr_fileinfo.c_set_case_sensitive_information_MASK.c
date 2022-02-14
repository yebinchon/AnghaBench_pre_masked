
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int atts; int case_sensitive; TYPE_3__* Vcb; } ;
typedef TYPE_5__ fcb ;
struct TYPE_22__ {int Flags; } ;
struct TYPE_21__ {TYPE_5__* FsContext; } ;
struct TYPE_14__ {int InputBufferLength; } ;
struct TYPE_15__ {TYPE_1__ FileSystemControl; } ;
struct TYPE_20__ {TYPE_8__* FileObject; TYPE_2__ Parameters; } ;
struct TYPE_17__ {scalar_t__ SystemBuffer; } ;
struct TYPE_19__ {TYPE_4__ AssociatedIrp; } ;
struct TYPE_16__ {int tree_lock; } ;
typedef TYPE_6__* PIRP ;
typedef TYPE_7__* PIO_STACK_LOCATION ;
typedef TYPE_8__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef TYPE_9__ FILE_CASE_SENSITIVE_INFORMATION ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_2 (TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static NTSTATUS FUNC_5(PIRP VAR_5) {
    FILE_CASE_SENSITIVE_INFORMATION* VAR_6 = (FILE_CASE_SENSITIVE_INFORMATION*)VAR_5->AssociatedIrp.SystemBuffer;
    PIO_STACK_LOCATION VAR_7 = FUNC_2(VAR_5);

    if (VAR_7->Parameters.FileSystemControl.InputBufferLength < sizeof(FILE_CASE_SENSITIVE_INFORMATION))
        return VAR_2;

    PFILE_OBJECT VAR_8 = VAR_7->FileObject;

    if (!VAR_8)
        return VAR_3;

    fcb* VAR_9 = VAR_8->FsContext;

    if (!VAR_9)
        return VAR_3;

    if (!(VAR_9->atts & VAR_0)) {
        FUNC_3("cannot set case-sensitive flag on anything other than directory\n");
        return VAR_3;
    }

    FUNC_0(&VAR_9->Vcb->tree_lock, 1);

    VAR_9->case_sensitive = VAR_6->Flags & VAR_1;
    FUNC_4(VAR_9);

    FUNC_1(&VAR_9->Vcb->tree_lock);

    return VAR_4;
}
