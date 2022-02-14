
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int stateid_arg ;
struct TYPE_10__ {int ctime; TYPE_3__* state; int buf; } ;
typedef TYPE_2__ setattr_upcall_args ;
struct TYPE_11__ {int lock; scalar_t__ pnfs_last_offset; int file; int session; } ;
typedef TYPE_3__ nfs41_open_state ;
struct TYPE_9__ {int count; int * arr; } ;
struct TYPE_12__ {int change; scalar_t__ size; TYPE_1__ attrmask; int member_0; } ;
typedef TYPE_4__ nfs41_file_info ;
struct TYPE_13__ {scalar_t__ QuadPart; } ;
typedef TYPE_5__* PLARGE_INTEGER ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int ,int *,int *,TYPE_4__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(setattr_upcall_args *VAR_4)
{
    nfs41_file_info VAR_5 = { 0 };
    stateid_arg VAR_6;


    PLARGE_INTEGER VAR_7 = (PLARGE_INTEGER)VAR_4->buf;
    nfs41_open_state *VAR_8 = VAR_4->state;
    int VAR_9;


    FUNC_3(VAR_8->session, &VAR_8->file,
        VAR_3, VAR_1);

    FUNC_4(VAR_8, &VAR_6);

    VAR_5.size = VAR_7->QuadPart;
    VAR_5.attrmask.count = 1;
    VAR_5.attrmask.arr[0] = VAR_2;

    FUNC_2(2, "calling setattr() with size=%lld\n", VAR_5.size);
    VAR_9 = FUNC_5(VAR_8->session, &VAR_8->file, &VAR_6, &VAR_5);
    if (VAR_9) {
        FUNC_2(1, "nfs41_setattr() failed with error %s.\n",
            FUNC_6(VAR_9));
        goto out;
    }


    FUNC_0(&VAR_8->lock);
    VAR_8->pnfs_last_offset = VAR_5.size ? VAR_5.size - 1 : 0;
    FUNC_1(&VAR_8->lock);
    VAR_4->ctime = VAR_5.change;
out:
    return VAR_9 = FUNC_7(VAR_9, VAR_0);
}
