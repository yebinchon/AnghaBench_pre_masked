
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int filename; } ;
struct TYPE_16__ {TYPE_5__* delegate_stateid; } ;
struct TYPE_14__ {int name; TYPE_3__* delegate_stateid; } ;
struct TYPE_12__ {int delegate_type; } ;
struct TYPE_11__ {int filename; } ;
struct TYPE_18__ {TYPE_7__ deleg_prev; TYPE_6__ deleg_cur_fh; TYPE_4__ deleg_cur; TYPE_2__ prev; TYPE_1__ null; } ;
struct TYPE_19__ {int claim; TYPE_8__ u; } ;
typedef TYPE_9__ open_claim4 ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_15__ {int stateid; } ;
struct TYPE_13__ {int stateid; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_2,
    open_claim4 *VAR_3)
{
    if (!FUNC_4(VAR_2, &VAR_3->claim))
        return VAR_0;

    switch (VAR_3->claim)
    {
    case 129:
        return FUNC_1(VAR_2, VAR_3->u.null.filename);
    case 128:
        return FUNC_4(VAR_2, &VAR_3->u.prev.delegate_type);
    case 130:
        return VAR_1;
    case 134:
        return FUNC_0(VAR_2,
            &VAR_3->u.deleg_cur.delegate_stateid->stateid,
            VAR_3->u.deleg_cur.name);
    case 132:
        return FUNC_3(VAR_2,
            &VAR_3->u.deleg_cur_fh.delegate_stateid->stateid);
    case 133:
        return FUNC_1(VAR_2, VAR_3->u.deleg_prev.filename);
    case 131:
        return VAR_1;
    default:
        FUNC_2("encode_open_claim4: unsupported claim %d.\n",
            VAR_3->claim);
        return VAR_0;
    }
}
