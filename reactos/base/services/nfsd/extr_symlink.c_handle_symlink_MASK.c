
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_20__ {unsigned short len; int path; } ;
struct TYPE_21__ {char* target_set; TYPE_5__ target_get; scalar_t__ set; } ;
typedef TYPE_6__ symlink_upcall_args ;
struct TYPE_16__ {TYPE_6__ symlink; } ;
struct TYPE_22__ {TYPE_8__* state_ref; TYPE_1__ args; } ;
typedef TYPE_7__ nfs41_upcall ;
struct TYPE_17__ {int fileid; scalar_t__ len; } ;
struct TYPE_15__ {TYPE_4__* path; TYPE_2__ fh; int name; } ;
struct TYPE_23__ {TYPE_10__ file; int session; int parent; } ;
typedef TYPE_8__ nfs41_open_state ;
struct TYPE_18__ {int count; scalar_t__* arr; } ;
struct TYPE_24__ {int mode; TYPE_3__ attrmask; } ;
typedef TYPE_9__ nfs41_file_info ;
struct TYPE_19__ {char* path; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,TYPE_9__*,char*,int *,TYPE_10__*,TYPE_9__*) ;
 int FUNC_4 (int ,TYPE_10__*,int ,int ,scalar_t__*) ;
 int FUNC_5 (int ,int *,int *,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(nfs41_upcall *VAR_4)
{
    symlink_upcall_args *VAR_5 = &VAR_4->args.symlink;
    nfs41_open_state *VAR_6 = VAR_4->state_ref;
    int VAR_7 = VAR_3;

    if (VAR_5->set) {
        nfs41_file_info VAR_8, VAR_9;


        char *VAR_10;
        for (VAR_10 = VAR_5->target_set; *VAR_10; VAR_10++) if (*VAR_10 == '\\') *VAR_10 = '/';

        if (VAR_6->file.fh.len) {


            FUNC_1("handle_symlink: attempting to create a symlink when "
                "the file=%s was already created on open; sending REMOVE "
                "first\n", VAR_6->file.path->path);
            VAR_7 = FUNC_5(VAR_6->session, &VAR_6->parent,
                &VAR_6->file.name, VAR_6->file.fh.fileid);
            if (VAR_7) {
                FUNC_1("nfs41_remove() for symlink=%s failed with %s\n",
                    VAR_5->target_set, FUNC_6(VAR_7));
                VAR_7 = FUNC_2(VAR_7);
                goto out;
            }
        }


        VAR_9.attrmask.count = 2;
        VAR_9.attrmask.arr[0] = 0;
        VAR_9.attrmask.arr[1] = VAR_0;
        VAR_9.mode = 0777;
        VAR_7 = FUNC_3(VAR_6->session, VAR_1, &VAR_9,
            VAR_5->target_set, &VAR_6->parent, &VAR_6->file, &VAR_8);
        if (VAR_7) {
            FUNC_1("nfs41_create() for symlink=%s failed with %s\n",
                VAR_5->target_set, FUNC_6(VAR_7));
            VAR_7 = FUNC_2(VAR_7);
            goto out;
        }
    } else {
        uint32_t VAR_11;


        VAR_7 = FUNC_4(VAR_6->session, &VAR_6->file,
            VAR_2, VAR_5->target_get.path, &VAR_11);
        if (VAR_7) {
            FUNC_1("nfs41_readlink() for filename=%s failed with %s\n",
                VAR_6->file.path->path, FUNC_6(VAR_7));
            VAR_7 = FUNC_2(VAR_7);
            goto out;
        }
        VAR_5->target_get.len = (unsigned short)VAR_11;
        FUNC_0(2, "returning symlink target '%s'\n", VAR_5->target_get.path);
    }
out:
    return VAR_7;
}
