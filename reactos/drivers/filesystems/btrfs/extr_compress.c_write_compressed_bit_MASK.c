
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct TYPE_12__ {scalar_t__ prop_compression; TYPE_3__* Vcb; } ;
typedef TYPE_4__ fcb ;
struct TYPE_10__ {int incompat_flags; } ;
struct TYPE_9__ {scalar_t__ compress_type; } ;
struct TYPE_11__ {TYPE_2__ superblock; TYPE_1__ options; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_4__*,int ,int ,void*,int*,int ,int *) ;
 int FUNC_1 (TYPE_4__*,int ,int ,void*,int*,int ,int *) ;
 int FUNC_2 (TYPE_4__*,int ,int ,void*,int*,int ,int *) ;

NTSTATUS FUNC_3(fcb* VAR_9, uint64_t VAR_10, uint64_t VAR_11, void* VAR_12, bool* VAR_13, PIRP VAR_14, LIST_ENTRY* VAR_15) {
    uint8_t VAR_16;

    if (VAR_9->Vcb->options.compress_type != 0 && VAR_9->prop_compression == VAR_6)
        VAR_16 = VAR_9->Vcb->options.compress_type;
    else {
        if (!(VAR_9->Vcb->superblock.incompat_flags & VAR_4) && VAR_9->prop_compression == VAR_7)
            VAR_16 = VAR_2;
        else if (VAR_9->Vcb->superblock.incompat_flags & VAR_4 && VAR_9->prop_compression != VAR_8 && VAR_9->prop_compression != VAR_5)
            VAR_16 = VAR_2;
        else if (!(VAR_9->Vcb->superblock.incompat_flags & VAR_3) && VAR_9->prop_compression == VAR_5)
            VAR_16 = VAR_0;
        else if (VAR_9->Vcb->superblock.incompat_flags & VAR_3 && VAR_9->prop_compression != VAR_8)
            VAR_16 = VAR_0;
        else
            VAR_16 = VAR_1;
    }

    if (VAR_16 == VAR_2) {
        VAR_9->Vcb->superblock.incompat_flags |= VAR_4;
        return FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    } else if (VAR_16 == VAR_0) {
        VAR_9->Vcb->superblock.incompat_flags |= VAR_3;
        return FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    } else
        return FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
}
