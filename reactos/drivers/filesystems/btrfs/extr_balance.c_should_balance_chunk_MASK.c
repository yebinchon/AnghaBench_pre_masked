
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint16_t ;
struct TYPE_10__ {TYPE_5__* opts; } ;
struct TYPE_12__ {TYPE_1__ balance; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_13__ {scalar_t__ offset; int used; TYPE_2__* chunk_item; } ;
typedef TYPE_4__ chunk ;
struct TYPE_14__ {int flags; scalar_t__ profiles; scalar_t__ devid; scalar_t__ drange_end; scalar_t__ drange_start; scalar_t__ vrange_start; scalar_t__ vrange_end; scalar_t__ stripes_start; scalar_t__ stripes_end; scalar_t__ usage_start; scalar_t__ usage_end; scalar_t__ convert; } ;
typedef TYPE_5__ btrfs_balance_opts ;
struct TYPE_15__ {scalar_t__ dev_id; scalar_t__ offset; } ;
struct TYPE_11__ {size_t num_stripes; int type; size_t sub_stripes; size_t size; } ;
typedef TYPE_6__ CHUNK_ITEM_STRIPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static bool FUNC_1(device_extension* VAR_13, uint8_t VAR_14, chunk* VAR_15) {
    btrfs_balance_opts* VAR_16;

    VAR_16 = &VAR_13->balance.opts[VAR_14];

    if (!(VAR_16->flags & VAR_7))
        return 0;

    if (VAR_16->flags & VAR_8) {
        uint64_t VAR_17 = FUNC_0(VAR_15);

        if (!(VAR_17 & VAR_16->profiles))
            return 0;
    }

    if (VAR_16->flags & VAR_5) {
        uint16_t VAR_18;
        CHUNK_ITEM_STRIPE* VAR_19 = (CHUNK_ITEM_STRIPE*)&VAR_15->chunk_item[1];
        bool VAR_20 = 0;

        for (VAR_18 = 0; VAR_18 < VAR_15->chunk_item->num_stripes; VAR_18++) {
            if (VAR_19[VAR_18].dev_id == VAR_16->devid) {
                VAR_20 = 1;
                break;
            }
        }

        if (!VAR_20)
            return 0;
    }

    if (VAR_16->flags & VAR_6) {
        uint16_t VAR_21, VAR_22;
        uint64_t VAR_23;
        CHUNK_ITEM_STRIPE* VAR_24 = (CHUNK_ITEM_STRIPE*)&VAR_15->chunk_item[1];
        bool VAR_25 = 0;

        if (VAR_15->chunk_item->type & VAR_0)
            VAR_22 = VAR_15->chunk_item->num_stripes;
        else if (VAR_15->chunk_item->type & VAR_1)
            VAR_22 = VAR_15->chunk_item->num_stripes / VAR_15->chunk_item->sub_stripes;
        else if (VAR_15->chunk_item->type & VAR_2)
            VAR_22 = VAR_15->chunk_item->num_stripes - 1;
        else if (VAR_15->chunk_item->type & VAR_3)
            VAR_22 = VAR_15->chunk_item->num_stripes - 2;
        else
            VAR_22 = 1;

        VAR_23 = VAR_15->chunk_item->size / VAR_22;

        for (VAR_21 = 0; VAR_21 < VAR_15->chunk_item->num_stripes; VAR_21++) {
            if (VAR_24[VAR_21].offset < VAR_16->drange_end && VAR_24[VAR_21].offset + VAR_23 >= VAR_16->drange_start &&
                (!(VAR_16->flags & VAR_5) || VAR_24[VAR_21].dev_id == VAR_16->devid)) {
                VAR_25 = 1;
                break;
            }
        }

        if (!VAR_25)
            return 0;
    }

    if (VAR_16->flags & VAR_12) {
        if (VAR_15->offset + VAR_15->chunk_item->size <= VAR_16->vrange_start || VAR_15->offset > VAR_16->vrange_end)
            return 0;
    }

    if (VAR_16->flags & VAR_10) {
        if (VAR_15->chunk_item->num_stripes < VAR_16->stripes_start || VAR_15->chunk_item->num_stripes < VAR_16->stripes_end)
            return 0;
    }

    if (VAR_16->flags & VAR_11) {
        uint64_t VAR_26 = VAR_15->used * 100 / VAR_15->chunk_item->size;


        if (VAR_15->used > 0 && VAR_26 == 0)
            VAR_26 = 1;

        if (VAR_26 < VAR_16->usage_start || VAR_26 > VAR_16->usage_end)
            return 0;
    }

    if (VAR_16->flags & VAR_4 && VAR_16->flags & VAR_9) {
        uint64_t VAR_27 = FUNC_0(VAR_15);

        if (VAR_27 == VAR_16->convert)
            return 0;
    }

    return 1;
}
