
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {unsigned char* buf; scalar_t__ buf_len; scalar_t__ count; } ;
typedef TYPE_3__ unlock_upcall_args ;
typedef scalar_t__ uint32_t ;
typedef int stateid_arg ;
struct TYPE_13__ {TYPE_3__ unlock; } ;
struct TYPE_16__ {TYPE_5__* state_ref; TYPE_1__ args; } ;
typedef TYPE_4__ nfs41_upcall ;
struct TYPE_14__ {int lock; } ;
struct TYPE_17__ {TYPE_2__ locks; int file; int session; } ;
typedef TYPE_5__ nfs41_open_state ;
struct TYPE_18__ {scalar_t__ offset; scalar_t__ length; } ;
typedef TYPE_6__ nfs41_lock_state ;
typedef int LONGLONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int ,int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*,int *,TYPE_6__*) ;
 scalar_t__ FUNC_7 (unsigned char**,scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_8(nfs41_upcall *VAR_4)
{
    nfs41_lock_state VAR_5;
    stateid_arg VAR_6;
    unlock_upcall_args *VAR_7 = &VAR_4->args.unlock;
    nfs41_open_state *VAR_8 = VAR_4->state_ref;
    unsigned char *VAR_9 = VAR_7->buf;
    uint32_t VAR_10 = VAR_7->buf_len;
    uint32_t VAR_11;
    int VAR_12 = VAR_3;

    for (VAR_11 = 0; VAR_11 < VAR_7->count; VAR_11++) {
        if (FUNC_7(&VAR_9, &VAR_10, &VAR_5.offset, sizeof(LONGLONG))) break;
        if (FUNC_7(&VAR_9, &VAR_10, &VAR_5.length, sizeof(LONGLONG))) break;


        if (VAR_5.length >= VAR_2 - VAR_5.offset)
            VAR_5.length = VAR_2;


        VAR_12 = FUNC_5(VAR_8, &VAR_5);
        if (VAR_12 != VAR_1)
            continue;

        FUNC_0(&VAR_8->locks.lock);
        FUNC_2(VAR_8, &VAR_6);

        VAR_12 = FUNC_3(VAR_8->session, &VAR_8->file,
            VAR_5.offset, VAR_5.length, &VAR_6);

        FUNC_6(VAR_8, &VAR_6, &VAR_5);
        FUNC_1(&VAR_8->locks.lock);

        VAR_12 = FUNC_4(VAR_12, VAR_0);
    }
    return VAR_12;
}
