
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int op; scalar_t__ arg; } ;
typedef TYPE_1__ nfs_argop4 ;
struct TYPE_5__ {int eia_flags; scalar_t__ eia_client_impl_id; int eia_state_protect; int eia_clientowner; } ;
typedef TYPE_2__ nfs41_exchange_id_args ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_2,
    nfs_argop4 *VAR_3)
{
    uint32_t VAR_4 = 0;
    uint32_t VAR_5 = 1;

    nfs41_exchange_id_args *VAR_6 = (nfs41_exchange_id_args*)VAR_3->arg;

    if (FUNC_0(VAR_3->op, VAR_1))
        return VAR_0;

    if (!FUNC_1(VAR_2, VAR_6->eia_clientowner))
        return VAR_0;

    if (!FUNC_4(VAR_2, &VAR_6->eia_flags))
        return VAR_0;

    if (!FUNC_3(VAR_2, &VAR_6->eia_state_protect))
        return VAR_0;

    if (VAR_6->eia_client_impl_id)
    {
        if (!FUNC_4(VAR_2, &VAR_5))
            return VAR_0;
        return FUNC_2(VAR_2, VAR_6->eia_client_impl_id);
    }
    else
        return FUNC_4(VAR_2, &VAR_4);
}
