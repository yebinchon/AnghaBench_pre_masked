
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int stateid_arg ;
struct TYPE_21__ {scalar_t__ length; scalar_t__ offset; void* acquired; int exclusive; int blocking; } ;
struct TYPE_16__ {TYPE_6__ lock; } ;
struct TYPE_18__ {TYPE_4__* state_ref; TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
struct TYPE_17__ {int lock; } ;
struct TYPE_19__ {TYPE_2__ locks; int owner; int file; int session; } ;
typedef TYPE_4__ nfs41_open_state ;
struct TYPE_20__ {scalar_t__ offset; scalar_t__ length; int exclusive; } ;
typedef TYPE_5__ nfs41_lock_state ;
typedef TYPE_6__ lock_upcall_args ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_5__* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,scalar_t__,...) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_4__*,void*) ;
 int FUNC_9 (int ,int *,int *,int const,scalar_t__,scalar_t__,int ,void*,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_4__*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_13 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_14(nfs41_upcall *VAR_7)
{
    stateid_arg VAR_8;
    lock_upcall_args *VAR_9 = &VAR_7->args.lock;
    nfs41_open_state *VAR_10 = VAR_7->state_ref;
    nfs41_lock_state *VAR_11;
    const uint32_t VAR_12 = FUNC_6(VAR_9->exclusive, VAR_9->blocking);
    int VAR_13 = VAR_5;





    if (VAR_9->length >= VAR_4 - VAR_9->offset)
        VAR_9->length = VAR_4;


    VAR_11 = FUNC_3(1, sizeof(nfs41_lock_state));
    if (VAR_11 == ((void*)0)) {
        VAR_13 = FUNC_1();
        goto out;
    }
    VAR_11->offset = VAR_9->offset;
    VAR_11->length = VAR_9->length;
    VAR_11->exclusive = VAR_9->exclusive;


    if (FUNC_13(VAR_10, VAR_11)) {
        FUNC_4(VAR_3, "delegated lock { %llu, %llu }\n",
            VAR_11->offset, VAR_11->length);
        VAR_9->acquired = VAR_6;
        goto out;
    }



    VAR_13 = FUNC_8(VAR_10, VAR_6);
    if (VAR_13) {
        VAR_13 = VAR_1;
        goto out_free;
    }

    FUNC_0(&VAR_10->locks.lock);

    FUNC_7(VAR_10, &VAR_8);

    VAR_13 = FUNC_9(VAR_10->session, &VAR_10->file, &VAR_10->owner,
        VAR_12, VAR_11->offset, VAR_11->length, VAR_2, VAR_6, &VAR_8);
    if (VAR_13) {
        FUNC_4(VAR_3, "nfs41_lock failed with %s\n",
            FUNC_10(VAR_13));
        VAR_13 = FUNC_11(VAR_13, VAR_0);
        FUNC_2(&VAR_10->locks.lock);
        goto out_free;
    }


    FUNC_12(VAR_10, &VAR_8, VAR_11);
    FUNC_2(&VAR_10->locks.lock);

    VAR_9->acquired = VAR_6;
out:
    return VAR_13;

out_free:
    FUNC_5(VAR_11);
    goto out;
}
