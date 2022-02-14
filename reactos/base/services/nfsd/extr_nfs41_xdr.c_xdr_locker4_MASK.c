
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int lock_seqid; TYPE_3__* lock_stateid; } ;
struct TYPE_15__ {int lock_owner; int lock_seqid; TYPE_1__* open_stateid; int open_seqid; } ;
struct TYPE_18__ {TYPE_4__ lock_owner; TYPE_2__ open_owner; } ;
struct TYPE_19__ {TYPE_5__ u; scalar_t__ new_lock_owner; } ;
typedef TYPE_6__ locker4 ;
typedef int bool_t ;
struct TYPE_20__ {scalar_t__ x_op; } ;
typedef TYPE_7__ XDR ;
struct TYPE_16__ {int stateid; } ;
struct TYPE_14__ {int stateid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_7__*,scalar_t__*) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_7__*,int *) ;
 int FUNC_4 (TYPE_7__*,int *) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_2,
    locker4 *VAR_3)
{
    if (VAR_2->x_op != VAR_1) {
        FUNC_0("%s: xdr->x_op %d is not supported!\n",
            "xdr_locker4", VAR_2->x_op);
        return VAR_0;
    }

    if (!FUNC_1(VAR_2, &VAR_3->new_lock_owner))
        return VAR_0;

    if (VAR_3->new_lock_owner) {

        if (!FUNC_4(VAR_2, &VAR_3->u.open_owner.open_seqid))
            return VAR_0;

        if (!FUNC_3(VAR_2, &VAR_3->u.open_owner.open_stateid->stateid))
            return VAR_0;

        if (!FUNC_4(VAR_2, &VAR_3->u.open_owner.lock_seqid))
            return VAR_0;

        return FUNC_2(VAR_2, VAR_3->u.open_owner.lock_owner);
    } else {

        if (!FUNC_3(VAR_2, &VAR_3->u.lock_owner.lock_stateid->stateid))
            return VAR_0;

        return FUNC_4(VAR_2, &VAR_3->u.lock_owner.lock_seqid);
    }
}
