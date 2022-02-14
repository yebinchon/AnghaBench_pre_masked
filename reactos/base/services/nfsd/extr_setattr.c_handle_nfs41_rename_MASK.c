
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_31__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_26__ ;
typedef struct TYPE_34__ TYPE_25__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_14__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_36__ {int root; int buf; TYPE_4__* state; } ;
typedef TYPE_2__ setattr_upcall_args ;
typedef int nfs41_session ;
struct TYPE_34__ {scalar_t__ superblock; } ;
struct TYPE_40__ {scalar_t__ name; } ;
struct TYPE_38__ {TYPE_25__ fh; TYPE_5__ name; TYPE_1__* path; } ;
typedef TYPE_3__ nfs41_path_fh ;
struct TYPE_35__ {scalar_t__ superblock; } ;
struct TYPE_32__ {TYPE_26__ fh; } ;
struct TYPE_37__ {int lock; } ;
struct TYPE_39__ {TYPE_14__ parent; int * session; TYPE_3__ file; TYPE_31__ path; } ;
typedef TYPE_4__ nfs41_open_state ;
typedef TYPE_5__ nfs41_component ;
struct TYPE_41__ {unsigned short len; scalar_t__ path; int member_0; } ;
typedef TYPE_6__ nfs41_abs_path ;
typedef int WCHAR ;
struct TYPE_42__ {int FileNameLength; int ReplaceIfExists; scalar_t__ FileName; } ;
struct TYPE_33__ {int path; } ;
typedef TYPE_7__* PFILE_RENAME_INFO ;


 int FUNC_0 (int *) ;
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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int,scalar_t__,int ,int *,int *) ;
 int FUNC_3 (TYPE_6__*,TYPE_31__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_25__*,TYPE_5__*) ;
 int FUNC_5 (int,char*,int ,...) ;
 int FUNC_6 (char*,scalar_t__,...) ;
 int FUNC_7 (TYPE_25__*,TYPE_26__*) ;
 int FUNC_8 (TYPE_6__*,int *) ;
 int FUNC_9 (scalar_t__,scalar_t__,TYPE_5__*) ;
 int FUNC_10 (int *,TYPE_3__*,int ,int ) ;
 int FUNC_11 (int ,int *,TYPE_6__*,TYPE_3__*,TYPE_3__*,int *,int **) ;
 int FUNC_12 (int *,TYPE_14__*,TYPE_5__*,TYPE_3__*,TYPE_5__*) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *,TYPE_3__*,TYPE_6__*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_18 (TYPE_3__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_19(setattr_upcall_args *VAR_14)
{
    nfs41_open_state *VAR_15 = VAR_14->state;
    nfs41_session *VAR_16;
    PFILE_RENAME_INFO VAR_17 = (PFILE_RENAME_INFO)VAR_14->buf;
    nfs41_abs_path VAR_18 = { 0 };
    nfs41_path_fh VAR_19, VAR_20;
    nfs41_component VAR_21, *VAR_22;
    uint32_t VAR_23 = 0;
    int VAR_24;

    VAR_22 = &VAR_15->file.name;

    if (VAR_17->FileNameLength == 0) {


        FUNC_0(&VAR_15->path.lock);
        FUNC_3(&VAR_18, &VAR_15->path);
        FUNC_1(&VAR_15->path.lock);

        FUNC_18(&VAR_19, &VAR_18);
        FUNC_7(&VAR_19.fh, &VAR_15->parent.fh);

        FUNC_4(&VAR_18, &VAR_15->file.fh, &VAR_21);
        FUNC_5(1, "silly rename: %s -> %s\n", VAR_22->name, VAR_21.name);


        FUNC_10(VAR_15->session, &VAR_15->file,
            VAR_12, VAR_13);

        VAR_24 = FUNC_12(VAR_15->session,
            &VAR_15->parent, VAR_22,
            &VAR_19, &VAR_21);
        if (VAR_24) {
            FUNC_5(1, "nfs41_rename() failed with error %s.\n",
                FUNC_15(VAR_24));
            VAR_24 = FUNC_16(VAR_24, VAR_1);
        } else {

            FUNC_17(VAR_15, &VAR_18);
        }
        goto out;
    }

    VAR_18.len = (unsigned short)FUNC_2(VAR_0, 0,
        VAR_17->FileName, VAR_17->FileNameLength/sizeof(WCHAR),
        VAR_18.path, VAR_9, ((void*)0), ((void*)0));
    if (VAR_18.len == 0) {
        FUNC_6("WideCharToMultiByte failed to convert destination "
            "filename %S.\n", VAR_17->FileName);
        VAR_24 = VAR_4;
        goto out;
    }
    FUNC_18(&VAR_19, &VAR_18);


    VAR_24 = FUNC_11(VAR_14->root, FUNC_13(VAR_14->root),
        &VAR_18, &VAR_19, &VAR_20, ((void*)0), &VAR_16);

    while (VAR_24 == VAR_6) {
        if (++VAR_23 > VAR_10) {
            VAR_24 = VAR_7;
            goto out;
        }


        VAR_24 = FUNC_14(VAR_16, &VAR_19, &VAR_18);
        if (VAR_24) {
            FUNC_6("nfs41_symlink_target() for %s failed with %d\n",
                VAR_19.path->path, VAR_24);
            goto out;
        }


        VAR_24 = FUNC_11(VAR_14->root, VAR_16,
            &VAR_18, &VAR_19, ((void*)0), ((void*)0), &VAR_16);
    }


    FUNC_9(VAR_18.path, VAR_18.path + VAR_18.len, &VAR_21);
    FUNC_9(VAR_18.path, VAR_21.name, &VAR_19.name);

    if (VAR_24 == VAR_11) {
        if (!VAR_17->ReplaceIfExists) {
            VAR_24 = VAR_2;
            goto out;
        }

        FUNC_10(VAR_16, &VAR_20,
            VAR_12, VAR_13);
    } else if (VAR_24 != VAR_3) {
        FUNC_5(1, "nfs41_lookup('%s') failed to find destination "
            "directory with %d\n", VAR_18.path, VAR_24);
        goto out;
    }




    if (VAR_15->parent.fh.superblock != VAR_19.fh.superblock) {
        VAR_24 = VAR_5;
        goto out;
    }

    VAR_24 = FUNC_8(&VAR_18, VAR_16);
    if (VAR_24) {



        FUNC_6("handle_nfs41_rename: %s is opened\n", VAR_18.path);
        VAR_24 = VAR_2;
        goto out;
    }


    FUNC_10(VAR_15->session, &VAR_15->file,
        VAR_12, VAR_8);

    VAR_24 = FUNC_12(VAR_15->session,
        &VAR_15->parent, VAR_22,
        &VAR_19, &VAR_21);
    if (VAR_24) {
        FUNC_5(1, "nfs41_rename() failed with error %s.\n",
            FUNC_15(VAR_24));
        VAR_24 = FUNC_16(VAR_24, VAR_1);
    } else {

        FUNC_17(VAR_15, &VAR_18);
    }
out:
    return VAR_24;
}
