
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * opts; int status; int total_chunks; int chunks_left; scalar_t__ shrinking; scalar_t__ removing; scalar_t__ paused; int thread; } ;
struct TYPE_6__ {TYPE_1__ balance; } ;
typedef TYPE_2__ device_extension ;
struct TYPE_7__ {int system_opts; int metadata_opts; int data_opts; int error; int total_chunks; int chunks_left; int status; } ;
typedef TYPE_3__ btrfs_query_balance ;
typedef int btrfs_balance_opts ;
typedef int ULONG ;
typedef int NTSTATUS ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_9 ;
 int VAR_10 ;

NTSTATUS FUNC_2(device_extension* VAR_11, void* VAR_12, ULONG VAR_13) {
    btrfs_query_balance* VAR_14 = (btrfs_query_balance*)VAR_12;

    if (VAR_13 < sizeof(btrfs_query_balance) || !VAR_12)
        return VAR_9;

    if (!VAR_11->balance.thread) {
        VAR_14->status = VAR_8;

        if (!FUNC_0(VAR_11->balance.status)) {
            VAR_14->status |= VAR_3;
            VAR_14->error = VAR_11->balance.status;
        }

        return VAR_10;
    }

    VAR_14->status = VAR_11->balance.paused ? VAR_4 : VAR_6;

    if (VAR_11->balance.removing)
        VAR_14->status |= VAR_5;

    if (VAR_11->balance.shrinking)
        VAR_14->status |= VAR_7;

    if (!FUNC_0(VAR_11->balance.status))
        VAR_14->status |= VAR_3;

    VAR_14->chunks_left = VAR_11->balance.chunks_left;
    VAR_14->total_chunks = VAR_11->balance.total_chunks;
    VAR_14->error = VAR_11->balance.status;
    FUNC_1(&VAR_14->data_opts, &VAR_11->balance.opts[VAR_0], sizeof(btrfs_balance_opts));
    FUNC_1(&VAR_14->metadata_opts, &VAR_11->balance.opts[VAR_1], sizeof(btrfs_balance_opts));
    FUNC_1(&VAR_14->system_opts, &VAR_11->balance.opts[VAR_2], sizeof(btrfs_balance_opts));

    return VAR_10;
}
