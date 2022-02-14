
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {scalar_t__ return_type; int stateid; int length; int offset; int iomode; int type; int reclaim; } ;
typedef TYPE_1__ pnfs_layoutreturn_args ;
struct TYPE_5__ {int op; scalar_t__ arg; } ;
typedef TYPE_2__ nfs_argop4 ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_7(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    pnfs_layoutreturn_args *VAR_5 = (pnfs_layoutreturn_args*)VAR_4->arg;

    if (FUNC_1(VAR_4->op, VAR_1))
        return VAR_0;

    if (!FUNC_2(VAR_3, &VAR_5->reclaim))
        return VAR_0;

    if (!FUNC_3(VAR_3, (enum_t *)&VAR_5->type))
        return VAR_0;

    if (!FUNC_3(VAR_3, (enum_t *)&VAR_5->iomode))
        return VAR_0;

    if (!FUNC_3(VAR_3, (enum_t *)&VAR_5->return_type))
        return VAR_0;

    if (VAR_5->return_type == VAR_2) {
        u_int32_t VAR_6 = 0;

        if (!FUNC_5(VAR_3, &VAR_5->offset))
            return VAR_0;

        if (!FUNC_5(VAR_3, &VAR_5->length))
            return VAR_0;

        if (!FUNC_4(VAR_3, VAR_5->stateid))
            return VAR_0;

        return FUNC_6(VAR_3, &VAR_6);
    } else {
        FUNC_0("%s: layout type (%d) is not PNFS_RETURN_FILE!\n",
            "encode_op_layoutreturn", VAR_5->return_type);
        return VAR_0;
    }
}
