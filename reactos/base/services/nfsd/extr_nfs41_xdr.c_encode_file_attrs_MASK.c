
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {size_t count; int* arr; } ;
struct TYPE_8__ {char* owner; char* owner_group; TYPE_1__ attrmask; int mode_mask; int mode; int time_delta; int time_modify; int time_create; int time_access; int system; int hidden; int archive; int acl; int size; } ;
typedef TYPE_2__ nfs41_file_info ;
struct TYPE_10__ {size_t count; int* arr; } ;
struct TYPE_9__ {int attr_vals_len; TYPE_6__ attrmask; scalar_t__ attr_vals; } ;
typedef TYPE_3__ fattr4 ;
typedef int bool_t ;
typedef int bitmap4 ;
typedef int XDR ;


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
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (char*,size_t,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char**,size_t*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,char*,int ,int ) ;

__attribute__((used)) static bool_t FUNC_12(
    fattr4 *VAR_16,
    nfs41_file_info *VAR_17)
{
    uint32_t VAR_18;
    XDR VAR_19;

    FUNC_11(&VAR_19, (char *)VAR_16->attr_vals, VAR_13, VAR_15);

    VAR_16->attr_vals_len = 0;
    FUNC_0(&VAR_16->attrmask, sizeof(bitmap4));
    VAR_16->attrmask.count = VAR_17->attrmask.count;

    if (VAR_17->attrmask.count > 0) {
        if (VAR_17->attrmask.arr[0] & VAR_4) {
            if (!FUNC_9(&VAR_19, &VAR_17->size))
                return VAR_0;
            VAR_16->attrmask.arr[0] |= VAR_4;
        }
        if (VAR_17->attrmask.arr[0] & VAR_1) {
            if (!FUNC_6(&VAR_19, VAR_17->acl))
                return VAR_0;
            VAR_16->attrmask.arr[0] |= VAR_1;
        }
        if (VAR_17->attrmask.arr[0] & VAR_2) {
            if (!FUNC_3(&VAR_19, &VAR_17->archive))
                return VAR_0;
            VAR_16->attrmask.arr[0] |= VAR_2;
        }
        if (VAR_17->attrmask.arr[0] & VAR_3) {
            if (!FUNC_3(&VAR_19, &VAR_17->hidden))
                return VAR_0;
            VAR_16->attrmask.arr[0] |= VAR_3;
        }
    }
    if (VAR_17->attrmask.count > 1) {
        if (VAR_17->attrmask.arr[1] & VAR_5) {
            if (!FUNC_10(&VAR_19, &VAR_17->mode))
                return VAR_0;
            VAR_16->attrmask.arr[1] |= VAR_5;
        }
        if (VAR_17->attrmask.arr[1] & VAR_8) {
            if (!FUNC_3(&VAR_19, &VAR_17->system))
                return VAR_0;
            VAR_16->attrmask.arr[1] |= VAR_8;
        }
        if (VAR_17->attrmask.arr[1] & VAR_9) {
            if (!FUNC_8(&VAR_19, &VAR_17->time_access, VAR_17->time_delta))
                return VAR_0;
            VAR_16->attrmask.arr[1] |= VAR_9;
        }
        if (VAR_17->attrmask.arr[1] & VAR_10) {
            if (!FUNC_7(&VAR_19, &VAR_17->time_create))
                return VAR_0;
            VAR_16->attrmask.arr[1] |= VAR_10;
        }
        if (VAR_17->attrmask.arr[1] & VAR_11) {
            if (!FUNC_8(&VAR_19, &VAR_17->time_modify, VAR_17->time_delta))
                return VAR_0;
            VAR_16->attrmask.arr[1] |= VAR_11;
        }
        if (VAR_17->attrmask.arr[1] & VAR_6) {
            char *VAR_20 = &VAR_17->owner[0];
            uint32_t VAR_21 = (uint32_t)FUNC_2(VAR_17->owner);
            if (!FUNC_4(&VAR_19, &VAR_20, &VAR_21,
                            VAR_13))
                return VAR_0;
            VAR_16->attrmask.arr[1] |= VAR_6;
        }
        if (VAR_17->attrmask.arr[1] & VAR_7) {
            char *VAR_22 = &VAR_17->owner_group[0];
            uint32_t VAR_23 = (uint32_t)FUNC_2(VAR_17->owner_group);
            if (!FUNC_4(&VAR_19, &VAR_22, &VAR_23,
                            VAR_13))
                return VAR_0;
            VAR_16->attrmask.arr[1] |= VAR_7;
        }
    }
    if (VAR_17->attrmask.count > 2) {
        if (VAR_17->attrmask.arr[2] & VAR_12) {
            if (!FUNC_10(&VAR_19, &VAR_17->mode))
                return VAR_0;
            if (!FUNC_10(&VAR_19, &VAR_17->mode_mask))
                return VAR_0;
            VAR_16->attrmask.arr[2] |= VAR_12;
        }
    }


    for (VAR_18 = 0; VAR_18 < VAR_17->attrmask.count; VAR_18++)
        if (VAR_16->attrmask.arr[VAR_18] != VAR_17->attrmask.arr[VAR_18])
            FUNC_1("encode_file_attrs() attempted to encode extra "
                "attributes in arr[%d]: encoded %d, but wanted %d.\n",
                VAR_18, VAR_16->attrmask.arr[VAR_18], VAR_17->attrmask.arr[VAR_18]);

    VAR_16->attr_vals_len = FUNC_5(&VAR_19);
    return VAR_14;
}
