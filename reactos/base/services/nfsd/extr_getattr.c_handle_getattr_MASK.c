
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int QuadPart; } ;
struct TYPE_19__ {TYPE_3__ IndexNumber; } ;
struct TYPE_17__ {int ReparseTag; int FileAttributes; } ;
struct TYPE_23__ {int query_class; int network_info; TYPE_4__ intr_info; TYPE_2__ tag_info; int std_info; int ctime; int basic_info; } ;
struct TYPE_16__ {TYPE_8__ getattr; } ;
struct TYPE_20__ {int root_ref; TYPE_6__* state_ref; TYPE_1__ args; } ;
typedef TYPE_5__ nfs41_upcall ;
struct TYPE_21__ {int file; int session; } ;
typedef TYPE_6__ nfs41_open_state ;
struct TYPE_22__ {scalar_t__ type; int fileid; int change; int symlink_dir; int member_0; } ;
typedef TYPE_7__ nfs41_file_info ;
typedef TYPE_8__ getattr_upcall_args ;


 int VAR_0 ;





 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int *,TYPE_7__*) ;
 int FUNC_2 (int ,int ,int *,TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 int FUNC_5 (TYPE_7__*,int *) ;
 int FUNC_6 (TYPE_7__*,int *) ;

__attribute__((used)) static int FUNC_7(nfs41_upcall *VAR_6)
{
    int VAR_7;
    getattr_upcall_args *VAR_8 = &VAR_6->args.getattr;
    nfs41_open_state *VAR_9 = VAR_6->state_ref;
    nfs41_file_info VAR_10 = { 0 };

    VAR_7 = FUNC_1(VAR_9->session, &VAR_9->file, &VAR_10);
    if (VAR_7) {
        FUNC_0("nfs41_cached_getattr() failed with %d\n", VAR_7);
        goto out;
    }

    if (VAR_10.type == VAR_3) {
        nfs41_file_info VAR_11;
        int VAR_12 = FUNC_2(VAR_6->root_ref,
            VAR_9->session, &VAR_9->file, &VAR_11);
        if (VAR_12 == VAR_4 && VAR_11.type == VAR_2)
            VAR_10.symlink_dir = VAR_5;
    }

    switch (VAR_8->query_class) {
    case 131:
        FUNC_4(&VAR_10, &VAR_8->basic_info);
        VAR_8->ctime = VAR_10.change;
        break;
    case 128:
        FUNC_6(&VAR_10, &VAR_8->std_info);
        break;
    case 132:
        VAR_8->tag_info.FileAttributes = FUNC_3(&VAR_10);
        VAR_8->tag_info.ReparseTag = VAR_10.type == VAR_3 ?
            VAR_1 : 0;
        break;
    case 130:
        VAR_8->intr_info.IndexNumber.QuadPart = VAR_10.fileid;
        break;
    case 129:
        FUNC_5(&VAR_10, &VAR_8->network_info);
        break;
    default:
        FUNC_0("unhandled file query class %d\n", VAR_8->query_class);
        VAR_7 = VAR_0;
        break;
    }
out:
    return VAR_7;
}
