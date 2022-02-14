
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_5__ {int flags; scalar_t__ usage_start; int stripes_end; int stripes_start; scalar_t__ limit_end; scalar_t__ limit_start; int convert; int vrange_end; int vrange_start; int drange_end; int drange_start; int devid; int usage_end; int profiles; } ;
typedef TYPE_1__ btrfs_balance_opts ;
struct TYPE_6__ {scalar_t__ usage_start; scalar_t__ limit_start; int flags; int stripes_end; int stripes_start; scalar_t__ limit; void* limit_end; int convert; int vrange_end; int vrange_start; int drange_end; int drange_start; int devid; int usage; int usage_end; int profiles; } ;
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

__attribute__((used)) static void FUNC_0(btrfs_balance_opts* VAR_20, BALANCE_ARGS* VAR_21) {
    if (VAR_20->flags & VAR_15) {
        VAR_21->profiles = VAR_20->profiles;
        VAR_21->flags |= VAR_5;
    }

    if (VAR_20->flags & VAR_18) {
        if (VAR_21->usage_start == 0) {
            VAR_21->flags |= VAR_9;
            VAR_21->usage_start = VAR_20->usage_start;
            VAR_21->usage_end = VAR_20->usage_end;
        } else {
            VAR_21->flags |= VAR_8;
            VAR_21->usage = VAR_20->usage_end;
        }
    }

    if (VAR_20->flags & VAR_12) {
        VAR_21->devid = VAR_20->devid;
        VAR_21->flags |= VAR_1;
    }

    if (VAR_20->flags & VAR_13) {
        VAR_21->drange_start = VAR_20->drange_start;
        VAR_21->drange_end = VAR_20->drange_end;
        VAR_21->flags |= VAR_2;
    }

    if (VAR_20->flags & VAR_19) {
        VAR_21->vrange_start = VAR_20->vrange_start;
        VAR_21->vrange_end = VAR_20->vrange_end;
        VAR_21->flags |= VAR_10;
    }

    if (VAR_20->flags & VAR_11) {
        VAR_21->convert = VAR_20->convert;
        VAR_21->flags |= VAR_0;

        if (VAR_20->flags & VAR_16)
            VAR_21->flags |= VAR_6;
    }

    if (VAR_20->flags & VAR_14) {
        if (VAR_21->limit_start == 0) {
            VAR_21->flags |= VAR_4;
            VAR_21->limit_start = (uint32_t)VAR_20->limit_start;
            VAR_21->limit_end = (uint32_t)VAR_20->limit_end;
        } else {
            VAR_21->flags |= VAR_3;
            VAR_21->limit = VAR_20->limit_end;
        }
    }

    if (VAR_20->flags & VAR_17) {
        VAR_21->stripes_start = VAR_20->stripes_start;
        VAR_21->stripes_end = VAR_20->stripes_end;
        VAR_21->flags |= VAR_7;
    }
}
