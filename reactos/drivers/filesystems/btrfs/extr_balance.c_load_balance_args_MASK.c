
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint16_t ;
struct TYPE_5__ {int flags; int convert; void* stripes_end; void* stripes_start; int limit_end; scalar_t__ limit_start; int vrange_end; int vrange_start; int drange_end; int drange_start; int devid; void* usage_end; void* usage_start; int profiles; } ;
typedef TYPE_1__ btrfs_balance_opts ;
struct TYPE_6__ {int flags; int convert; scalar_t__ stripes_end; scalar_t__ stripes_start; int limit_end; scalar_t__ limit_start; int limit; int vrange_end; int vrange_start; int drange_end; int drange_start; int devid; scalar_t__ usage_end; scalar_t__ usage_start; scalar_t__ usage; int profiles; } ;
typedef TYPE_2__ BALANCE_ARGS ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_0(btrfs_balance_opts* VAR_21, BALANCE_ARGS* VAR_22) {
    VAR_21->flags = VAR_14;

    if (VAR_22->flags & VAR_5) {
        VAR_21->flags |= VAR_16;
        VAR_21->profiles = VAR_22->profiles;
    }

    if (VAR_22->flags & VAR_8) {
        VAR_21->flags |= VAR_19;

        VAR_21->usage_start = 0;
        VAR_21->usage_end = (uint8_t)VAR_22->usage;
    } else if (VAR_22->flags & VAR_9) {
        VAR_21->flags |= VAR_19;

        VAR_21->usage_start = (uint8_t)VAR_22->usage_start;
        VAR_21->usage_end = (uint8_t)VAR_22->usage_end;
    }

    if (VAR_22->flags & VAR_1) {
        VAR_21->flags |= VAR_12;
        VAR_21->devid = VAR_22->devid;
    }

    if (VAR_22->flags & VAR_2) {
        VAR_21->flags |= VAR_13;
        VAR_21->drange_start = VAR_22->drange_start;
        VAR_21->drange_end = VAR_22->drange_end;
    }

    if (VAR_22->flags & VAR_10) {
        VAR_21->flags |= VAR_20;
        VAR_21->vrange_start = VAR_22->vrange_start;
        VAR_21->vrange_end = VAR_22->vrange_end;
    }

    if (VAR_22->flags & VAR_3) {
        VAR_21->flags |= VAR_15;

        VAR_21->limit_start = 0;
        VAR_21->limit_end = VAR_22->limit;
    } else if (VAR_22->flags & VAR_4) {
        VAR_21->flags |= VAR_15;

        VAR_21->limit_start = VAR_22->limit_start;
        VAR_21->limit_end = VAR_22->limit_end;
    }

    if (VAR_22->flags & VAR_7) {
        VAR_21->flags |= VAR_18;

        VAR_21->stripes_start = (uint16_t)VAR_22->stripes_start;
        VAR_21->stripes_end = (uint16_t)VAR_22->stripes_end;
    }

    if (VAR_22->flags & VAR_0) {
        VAR_21->flags |= VAR_11;
        VAR_21->convert = VAR_22->convert;

        if (VAR_22->flags & VAR_6)
            VAR_21->flags |= VAR_17;
    }
}
