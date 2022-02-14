
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* state; } ;
typedef TYPE_2__ setattr_upcall_args ;
struct TYPE_6__ {int fileid; } ;
struct TYPE_9__ {TYPE_1__ fh; int name; } ;
struct TYPE_8__ {TYPE_4__ file; int parent; int session; } ;
typedef TYPE_3__ nfs41_open_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,TYPE_4__*,int ,int ) ;
 int FUNC_2 (int ,int *,int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(setattr_upcall_args *VAR_3)
{
    nfs41_open_state *VAR_4 = VAR_3->state;
    int VAR_5;


    FUNC_1(VAR_4->session, &VAR_4->file,
        VAR_1, VAR_2);

    VAR_5 = FUNC_2(VAR_4->session, &VAR_4->parent,
        &VAR_4->file.name, VAR_4->file.fh.fileid);
    if (VAR_5)
        FUNC_0(1, "nfs41_remove() failed with error %s.\n",
            FUNC_3(VAR_5));

    return FUNC_4(VAR_5, VAR_0);
}
