
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int spa_ssv_parms; int spa_mach_ops; } ;
struct TYPE_5__ {int spa_how; TYPE_1__ u; } ;
typedef TYPE_2__ state_protect4_a ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_2,
    state_protect4_a *VAR_3)
{
    bool_t VAR_4 = VAR_1;

    if (!FUNC_3(VAR_2, (u_int32_t *)&VAR_3->spa_how))
        return VAR_0;

    switch (VAR_3->spa_how)
    {
    case 129:
        break;
    default:
        FUNC_0("encode_state_protect4_a: state protect "
            "type %d not supported.\n", VAR_3->spa_how);
        VAR_4 = VAR_0;
        break;
    }
    return VAR_4;
}
