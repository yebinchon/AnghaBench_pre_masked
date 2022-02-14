
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_20__ {TYPE_5__* parent; int datalen; } ;
typedef TYPE_6__ send_context ;
struct TYPE_17__ {scalar_t__ rtransid; int ctransid; int received_uuid; int uuid; } ;
struct TYPE_21__ {TYPE_3__ root_item; } ;
typedef TYPE_7__ root ;
struct TYPE_22__ {TYPE_2__* dc; } ;
typedef TYPE_8__ file_ref ;
typedef int ULONG ;
struct TYPE_18__ {scalar_t__ rtransid; int ctransid; int received_uuid; int uuid; } ;
struct TYPE_19__ {TYPE_4__ root_item; } ;
struct TYPE_15__ {int Length; int * Buffer; } ;
struct TYPE_16__ {TYPE_1__ utf8; } ;
typedef int BTRFS_UUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,int ,int *,int) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,int ) ;

__attribute__((used)) static void FUNC_3(send_context* VAR_7, root* VAR_8, file_ref* VAR_9) {
    ULONG VAR_10 = VAR_7->datalen;

    FUNC_1(VAR_7, VAR_7->parent ? VAR_0 : VAR_1);

    FUNC_0(VAR_7, VAR_4, VAR_9->dc->utf8.Buffer, VAR_9->dc->utf8.Length);

    FUNC_0(VAR_7, VAR_6, VAR_8->root_item.rtransid == 0 ? &VAR_8->root_item.uuid : &VAR_8->root_item.received_uuid, sizeof(BTRFS_UUID));
    FUNC_0(VAR_7, VAR_5, &VAR_8->root_item.ctransid, sizeof(uint64_t));

    if (VAR_7->parent) {
        FUNC_0(VAR_7, VAR_3,
                     VAR_7->parent->root_item.rtransid == 0 ? &VAR_7->parent->root_item.uuid : &VAR_7->parent->root_item.received_uuid, sizeof(BTRFS_UUID));
        FUNC_0(VAR_7, VAR_2, &VAR_7->parent->root_item.ctransid, sizeof(uint64_t));
    }

    FUNC_2(VAR_7, VAR_10);
}
