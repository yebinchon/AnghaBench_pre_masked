
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_8__ {TYPE_3__* delegation; scalar_t__ status; } ;
typedef TYPE_2__ nfs41_want_delegation_res ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_9__ {int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_7(
    XDR *VAR_3,
    nfs_resop4 *VAR_4)
{
    nfs41_want_delegation_res *VAR_5 = (nfs41_want_delegation_res*)VAR_4->res;

    if (FUNC_4(VAR_4->op, VAR_1))
        return VAR_0;

    if (!FUNC_6(VAR_3, &VAR_5->status))
        return VAR_0;

    if (VAR_5->status)
        return VAR_2;

    if (!FUNC_5(VAR_3, (enum_t*)&VAR_5->delegation->type))
        return VAR_0;

    switch (VAR_5->delegation->type)
    {
    case 131:
        return VAR_2;
    case 130:
        return FUNC_0(VAR_3, VAR_5->delegation);
    case 129:
        return FUNC_1(VAR_3, VAR_5->delegation);
    case 128:
        return FUNC_2(VAR_3, VAR_5->delegation);
    default:
        FUNC_3("decode_open_res_ok: delegation type %d not "
            "supported.\n", VAR_5->delegation->type);
        return VAR_0;
    }
}
