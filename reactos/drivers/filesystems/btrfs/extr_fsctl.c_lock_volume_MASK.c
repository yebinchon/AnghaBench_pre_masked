
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int event; scalar_t__ thread; } ;
struct TYPE_12__ {scalar_t__ thread; } ;
struct TYPE_15__ {int locked; int lock_paused_balance; TYPE_3__ balance; int locked_fileobj; TYPE_2__* Vpb; int tree_lock; int readonly; scalar_t__ need_write; int fileref_lock; TYPE_7__* root_fileref; TYPE_1__ scrub; } ;
typedef TYPE_4__ device_extension ;
struct TYPE_17__ {scalar_t__ open_count; scalar_t__ fcb; } ;
struct TYPE_16__ {int FileObject; } ;
struct TYPE_13__ {int Flags; } ;
typedef int PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;
typedef int KIRQL ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (char*) ;
 int VAR_5 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 scalar_t__ FUNC_16 (TYPE_7__*) ;

__attribute__((used)) static NTSTATUS FUNC_17(device_extension* VAR_6, PIRP VAR_7) {
    PIO_STACK_LOCATION VAR_8 = FUNC_5(VAR_7);
    NTSTATUS VAR_9;
    KIRQL VAR_10;
    bool VAR_11 = 0;

    FUNC_11("FSCTL_LOCK_VOLUME\n");

    if (VAR_6->scrub.thread) {
        FUNC_12("cannot lock while scrub running\n");
        return VAR_3;
    }

    if (VAR_6->balance.thread) {
        FUNC_12("cannot lock while balance running\n");
        return VAR_3;
    }

    FUNC_11("locking volume\n");

    FUNC_3(VAR_8->FileObject, VAR_0);

    if (VAR_6->locked)
        return VAR_4;

    FUNC_1(&VAR_6->fileref_lock, 1);

    if (VAR_6->root_fileref && VAR_6->root_fileref->fcb && (VAR_6->root_fileref->open_count > 0 || FUNC_16(VAR_6->root_fileref))) {
        VAR_9 = VAR_2;
        FUNC_2(&VAR_6->fileref_lock);
        goto end;
    }

    FUNC_2(&VAR_6->fileref_lock);

    if (VAR_6->balance.thread && FUNC_8(&VAR_6->balance.event)) {
        FUNC_1(&VAR_6->tree_lock, 1);
        FUNC_7(&VAR_6->balance.event);
        FUNC_2(&VAR_6->tree_lock);

        VAR_11 = 1;
    }

    FUNC_1(&VAR_6->tree_lock, 1);

    FUNC_14(VAR_6);

    if (VAR_6->need_write && !VAR_6->readonly)
        VAR_9 = FUNC_13(VAR_6, VAR_7);
    else
        VAR_9 = VAR_4;

    FUNC_15(VAR_6);

    FUNC_2(&VAR_6->tree_lock);

    if (!FUNC_10(VAR_9)) {
        FUNC_0("do_write returned %08x\n", VAR_9);
        goto end;
    }

    FUNC_4(&VAR_10);

    if (!(VAR_6->Vpb->Flags & VAR_5)) {
        VAR_6->Vpb->Flags |= VAR_5;
        VAR_6->locked = 1;
        VAR_6->locked_fileobj = VAR_8->FileObject;
        VAR_6->lock_paused_balance = VAR_11;
    } else {
        VAR_9 = VAR_2;
        FUNC_6(VAR_10);

        if (VAR_11)
            FUNC_9(&VAR_6->balance.event, 0, 0);

        goto end;
    }

    FUNC_6(VAR_10);

    VAR_9 = VAR_4;

end:
    if (!FUNC_10(VAR_9))
        FUNC_3(VAR_8->FileObject, VAR_1);

    return VAR_9;
}
