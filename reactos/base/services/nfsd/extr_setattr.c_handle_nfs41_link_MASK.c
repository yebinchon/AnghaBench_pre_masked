
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_28__ {int ctime; int root; int buf; TYPE_5__* state; } ;
typedef TYPE_3__ setattr_upcall_args ;
typedef int nfs41_session ;
struct TYPE_27__ {scalar_t__ superblock; int fileid; } ;
struct TYPE_32__ {scalar_t__ name; } ;
struct TYPE_29__ {TYPE_2__ fh; TYPE_7__ name; TYPE_1__* path; } ;
typedef TYPE_4__ nfs41_path_fh ;
struct TYPE_30__ {TYPE_4__ file; int * session; } ;
typedef TYPE_5__ nfs41_open_state ;
struct TYPE_31__ {int change; int member_0; } ;
typedef TYPE_6__ nfs41_file_info ;
typedef TYPE_7__ nfs41_component ;
struct TYPE_33__ {unsigned short len; scalar_t__ path; int member_0; } ;
typedef TYPE_8__ nfs41_abs_path ;
typedef int WCHAR ;
struct TYPE_34__ {int FileNameLength; int ReplaceIfExists; int FileName; } ;
struct TYPE_26__ {int path; } ;
typedef TYPE_9__* PFILE_LINK_INFORMATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,scalar_t__,int ,int *,int *) ;
 int FUNC_1 (int,char*,int ,...) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (scalar_t__,scalar_t__,TYPE_7__*) ;
 int FUNC_4 (int *,TYPE_4__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_4__*,TYPE_4__*,TYPE_7__*,TYPE_6__*) ;
 int FUNC_6 (int ,int *,TYPE_8__*,TYPE_4__*,TYPE_4__*,int *,int **) ;
 int FUNC_7 (int *,TYPE_4__*,TYPE_7__*,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_4__*,TYPE_8__*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (TYPE_4__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_13(setattr_upcall_args *VAR_14)
{
    nfs41_open_state *VAR_15 = VAR_14->state;
    PFILE_LINK_INFORMATION VAR_16 = (PFILE_LINK_INFORMATION)VAR_14->buf;
    nfs41_session *VAR_17;
    nfs41_abs_path VAR_18 = { 0 };
    nfs41_path_fh VAR_19, VAR_20;
    nfs41_component VAR_21;
    uint32_t VAR_22 = 0;
    nfs41_file_info VAR_23 = { 0 };
    int VAR_24;

    VAR_18.len = (unsigned short)FUNC_0(VAR_0, 0,
        VAR_16->FileName, VAR_16->FileNameLength/sizeof(WCHAR),
        VAR_18.path, VAR_8, ((void*)0), ((void*)0));
    if (VAR_18.len == 0) {
        FUNC_2("WideCharToMultiByte failed to convert destination "
            "filename %S.\n", VAR_16->FileName);
        VAR_24 = VAR_3;
        goto out;
    }
    FUNC_12(&VAR_19, &VAR_18);


    VAR_24 = FUNC_6(VAR_14->root, FUNC_8(VAR_14->root),
        &VAR_18, &VAR_19, &VAR_20, ((void*)0), &VAR_17);

    while (VAR_24 == VAR_5) {
        if (++VAR_22 > VAR_9) {
            VAR_24 = VAR_6;
            goto out;
        }


        VAR_24 = FUNC_9(VAR_17, &VAR_19, &VAR_18);
        if (VAR_24) {
            FUNC_2("nfs41_symlink_target() for %s failed with %d\n",
                VAR_19.path->path, VAR_24);
            goto out;
        }


        VAR_24 = FUNC_6(VAR_14->root, VAR_17,
            &VAR_18, &VAR_19, &VAR_20, ((void*)0), &VAR_17);
    }


    FUNC_3(VAR_18.path, VAR_18.path + VAR_18.len, &VAR_21);
    FUNC_3(VAR_18.path, VAR_21.name, &VAR_19.name);

    if (VAR_24 == VAR_10) {
        if (!VAR_16->ReplaceIfExists) {
            VAR_24 = VAR_1;
            goto out;
        }
    } else if (VAR_24 != VAR_2) {
        FUNC_1(1, "nfs41_lookup('%s') failed to find destination "
            "directory with %d\n", VAR_18.path, VAR_24);
        goto out;
    }




    if (VAR_15->file.fh.superblock != VAR_19.fh.superblock) {
        VAR_24 = VAR_4;
        goto out;
    }

    if (VAR_24 == VAR_10) {

        FUNC_4(VAR_17, &VAR_20,
            VAR_12, VAR_13);



        VAR_24 = FUNC_7(VAR_15->session,
            &VAR_19, &VAR_21, VAR_20.fh.fileid);
        if (VAR_24) {
            FUNC_1(1, "nfs41_remove() failed with error %s.\n",
                FUNC_10(VAR_24));
            VAR_24 = VAR_1;
            goto out;
        }
    }


    FUNC_4(VAR_15->session, &VAR_15->file,
        VAR_11, VAR_7);

    VAR_24 = FUNC_5(VAR_15->session, &VAR_15->file, &VAR_19, &VAR_21,
            &VAR_23);
    if (VAR_24) {
        FUNC_1(1, "nfs41_link() failed with error %s.\n",
            FUNC_10(VAR_24));
        VAR_24 = FUNC_11(VAR_24, VAR_3);
    }
    VAR_14->ctime = VAR_23.change;
out:
    return VAR_24;
}
