
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_20__ {scalar_t__ srv_open; scalar_t__ renamed; scalar_t__ remove; } ;
struct TYPE_16__ {TYPE_5__ close; } ;
struct TYPE_17__ {TYPE_3__* state_ref; TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
struct TYPE_15__ {int fileid; } ;
struct TYPE_19__ {int name; } ;
struct TYPE_21__ {TYPE_12__ fh; TYPE_4__ name; } ;
struct TYPE_18__ {scalar_t__ type; scalar_t__ srv_open; scalar_t__ do_close; TYPE_8__ file; int parent; int session; int path; } ;
typedef TYPE_3__ nfs41_open_state ;
typedef TYPE_4__ nfs41_component ;
typedef TYPE_5__ close_upcall_args ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_12__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int ,TYPE_8__*) ;
 int FUNC_5 (int ,TYPE_8__*,int ,int ) ;
 int FUNC_6 (int ,int *,TYPE_4__*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(nfs41_upcall *VAR_6)
{
    int VAR_7 = VAR_3, VAR_8 = VAR_3;
    close_upcall_args *VAR_9 = &VAR_6->args.close;
    nfs41_open_state *VAR_10 = VAR_6->state_ref;


    if (VAR_10->type == VAR_1)
        FUNC_9(VAR_10->session, VAR_10, VAR_9->remove);

    if (VAR_10->srv_open == VAR_9->srv_open)
        FUNC_4(VAR_10->session, &VAR_10->file);

    if (VAR_9->remove) {
        nfs41_component *VAR_11 = &VAR_10->file.name;

        if (VAR_9->renamed) {
            FUNC_3(1, "removing a renamed file %s\n", VAR_11->name);
            FUNC_1(&VAR_10->path, &VAR_10->file.fh, VAR_11);
            VAR_7 = FUNC_2(VAR_10);
            if (VAR_7)
                goto out;
            else
                VAR_10->do_close = 0;
        }


        FUNC_5(VAR_10->session, &VAR_10->file,
            VAR_4, VAR_5);

  FUNC_3(1, "calling nfs41_remove for %s\n", VAR_11->name);
retry_delete:
        VAR_8 = FUNC_6(VAR_10->session, &VAR_10->parent,
            VAR_11, VAR_10->file.fh.fileid);
        if (VAR_8) {
   if (VAR_8 == VAR_2) {
    VAR_7 = FUNC_2(VAR_10);
    if (!VAR_7) {
     VAR_10->do_close = 0;
     goto retry_delete;
    } else goto out;
   }
            FUNC_3(1, "nfs41_remove() failed with error %s.\n",
                FUNC_7(VAR_8));
            VAR_8 = FUNC_8(VAR_8, VAR_0);
        }
    }

    if (VAR_10->do_close) {
        VAR_7 = FUNC_2(VAR_10);
    }
out:

    FUNC_0(VAR_10);

    if (VAR_7 || !VAR_8)
        return VAR_7;
    else
        return VAR_8;
}
