
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint16_t ;
struct TYPE_8__ {scalar_t__ offset; TYPE_1__* chunk_item; } ;
typedef TYPE_2__ btrfs_chunk ;
typedef int ULONG ;
struct TYPE_10__ {scalar_t__ offset; } ;
struct TYPE_9__ {scalar_t__ QuadPart; } ;
struct TYPE_7__ {size_t num_stripes; } ;
typedef int NTSTATUS ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_4__ CHUNK_ITEM_STRIPE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *,void*,int ,TYPE_3__*,int *) ;
 int VAR_0 ;

__attribute__((used)) static NTSTATUS FUNC_2(HANDLE VAR_1, uint64_t VAR_2, btrfs_chunk* VAR_3, void* VAR_4, ULONG VAR_5) {
    NTSTATUS VAR_6;
    uint16_t VAR_7;
    IO_STATUS_BLOCK VAR_8;
    LARGE_INTEGER VAR_9;
    CHUNK_ITEM_STRIPE* VAR_10;

    VAR_10 = (CHUNK_ITEM_STRIPE*)&VAR_3->chunk_item[1];

    for (VAR_7 = 0; VAR_7 < VAR_3->chunk_item->num_stripes; VAR_7++) {
        VAR_9.QuadPart = VAR_10[VAR_7].offset + VAR_2 - VAR_3->offset;

        VAR_6 = FUNC_1(VAR_1, ((void*)0), ((void*)0), ((void*)0), &VAR_8, VAR_4, VAR_5, &VAR_9, ((void*)0));
        if (!FUNC_0(VAR_6))
            return VAR_6;
    }

    return VAR_0;
}
