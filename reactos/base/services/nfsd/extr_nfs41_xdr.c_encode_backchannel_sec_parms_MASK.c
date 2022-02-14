
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int stamp; int machinename; } ;
struct TYPE_5__ {TYPE_2__ auth_sys; } ;
struct TYPE_7__ {int type; TYPE_1__ u; } ;
typedef TYPE_3__ nfs41_callback_secparms ;
typedef int bool_t ;
typedef int XDR ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    nfs41_callback_secparms *VAR_4)
{
    uint32_t VAR_5 = 0;

    if (!FUNC_1(VAR_3, &VAR_4->type))
        return VAR_0;

    switch (VAR_4->type) {
    case 130: return VAR_2;
    case 129:
        if (!FUNC_1(VAR_3, &VAR_4->u.auth_sys.stamp))
            return VAR_0;
        if (!FUNC_0(VAR_3, &VAR_4->u.auth_sys.machinename, VAR_1))
            return VAR_0;
        return FUNC_1(VAR_3, &VAR_5) && FUNC_1(VAR_3, &VAR_5) &&
                FUNC_1(VAR_3, &VAR_5);
    case 128:
    default:
        return VAR_0;
    }
}
