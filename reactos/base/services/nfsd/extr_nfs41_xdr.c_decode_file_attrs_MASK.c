
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef size_t uint32_t ;
struct TYPE_9__ {int count; int aces; } ;
typedef TYPE_2__ nfsacl41 ;
typedef int nfsace4 ;
struct TYPE_10__ {char* owner; char* owner_group; int suppattr_exclcreat; int mdsthreshold; int fs_layout_types; TYPE_2__* acl; int time_modify; int * time_delta; int time_create; int time_access; int system; int space_total; int space_free; int space_avail; int numlinks; int mode; int maxwrite; int maxread; int hidden; int fs_locations; int fileid; int case_preserving; int case_insensitive; int cansettime; int archive; int aclsupport; int rdattr_error; int lease_time; int fsid; int symlink_support; int link_support; int size; int change; int type; int supported_attrs; } ;
typedef TYPE_3__ nfs41_file_info ;
struct TYPE_8__ {int count; int* arr; } ;
struct TYPE_11__ {TYPE_1__ attrmask; } ;
typedef TYPE_4__ fattr4 ;
typedef int bool_t ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char**,int *,int,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char**,size_t*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_39 ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_12(
    XDR *VAR_40,
    fattr4 *VAR_41,
    nfs41_file_info *VAR_42)
{
    if (VAR_41->attrmask.count >= 1) {
        if (VAR_41->attrmask.arr[0] & VAR_18) {
            if (!FUNC_2(VAR_40, VAR_42->supported_attrs))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_20) {
            if (!FUNC_11(VAR_40, &VAR_42->type))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_7) {
            if (!FUNC_10(VAR_40, &VAR_42->change))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_17) {
            if (!FUNC_10(VAR_40, &VAR_42->size))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_13) {
            if (!FUNC_3(VAR_40, &VAR_42->link_support))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_19) {
            if (!FUNC_3(VAR_40, &VAR_42->symlink_support))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_9) {
            if (!FUNC_5(VAR_40, &VAR_42->fsid))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_12) {
            if (!FUNC_11(VAR_40, &VAR_42->lease_time))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_16) {
            if (!FUNC_11(VAR_40, &VAR_42->rdattr_error))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_1) {
            nfsacl41 *VAR_43 = VAR_42->acl;
            if (!FUNC_1(VAR_40, (char**)&VAR_43->aces, &VAR_43->count,
                32, sizeof(nfsace4), (xdrproc_t)VAR_39))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_2) {
            if (!FUNC_11(VAR_40, &VAR_42->aclsupport))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_3) {
            if (!FUNC_3(VAR_40, &VAR_42->archive))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_4) {
            if (!FUNC_3(VAR_40, &VAR_42->cansettime))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_5) {
            if (!FUNC_3(VAR_40, &VAR_42->case_insensitive))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_6) {
            if (!FUNC_3(VAR_40, &VAR_42->case_preserving))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_8) {
            if (!FUNC_10(VAR_40, &VAR_42->fileid))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_10) {
            if (!FUNC_0(VAR_40, VAR_42->fs_locations))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_11) {
            if (!FUNC_3(VAR_40, &VAR_42->hidden))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_14) {
            if (!FUNC_10(VAR_40, &VAR_42->maxread))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[0] & VAR_15) {
            if (!FUNC_10(VAR_40, &VAR_42->maxwrite))
                return VAR_0;
        }
    }
    if (VAR_41->attrmask.count >= 2) {
        if (VAR_41->attrmask.arr[1] & VAR_23) {
            if (!FUNC_11(VAR_40, &VAR_42->mode))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_24) {
            if (!FUNC_11(VAR_40, &VAR_42->numlinks))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_25) {
            char *VAR_44 = &VAR_42->owner[0];
            uint32_t VAR_45;
            if (!FUNC_4(VAR_40, &VAR_44, &VAR_45,
                            VAR_37))
                return VAR_0;
            VAR_42->owner[VAR_45] = '\0';
        }
        if (VAR_41->attrmask.arr[1] & VAR_26) {
            char *VAR_46 = &VAR_42->owner_group[0];
            uint32_t VAR_47;
            if (!FUNC_4(VAR_40, &VAR_46, &VAR_47,
                            VAR_37))
                return VAR_0;
            VAR_42->owner_group[VAR_47] = '\0';
        }
        if (VAR_41->attrmask.arr[1] & VAR_27) {
            if (!FUNC_10(VAR_40, &VAR_42->space_avail))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_28) {
            if (!FUNC_10(VAR_40, &VAR_42->space_free))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_29) {
            if (!FUNC_10(VAR_40, &VAR_42->space_total))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_30) {
            if (!FUNC_3(VAR_40, &VAR_42->system))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_31) {
            if (!FUNC_9(VAR_40, &VAR_42->time_access))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_32) {
            if (!FUNC_9(VAR_40, &VAR_42->time_create))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_33) {
            if (!FUNC_9(VAR_40, VAR_42->time_delta))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_34) {
            if (!FUNC_9(VAR_40, &VAR_42->time_modify))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_21) {
            if (!FUNC_8(VAR_40, VAR_42->acl))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[1] & VAR_22) {
            if (!FUNC_6(VAR_40, &VAR_42->fs_layout_types))
                return VAR_0;
        }
    }
    if (VAR_41->attrmask.count >= 3) {
        if (VAR_41->attrmask.arr[2] & VAR_35) {
            if (!FUNC_7(VAR_40, &VAR_42->mdsthreshold))
                return VAR_0;
        }
        if (VAR_41->attrmask.arr[2] & VAR_36) {
            if (!FUNC_2(VAR_40, VAR_42->suppattr_exclcreat))
                return VAR_0;
        }
    }
    return VAR_38;
}
