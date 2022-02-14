
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_3__ {scalar_t__ DaylightBias; scalar_t__ Bias; scalar_t__ StandardBias; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;


 int FUNC_0 (TYPE_1__*) ;




ngx_int_t
FUNC_1(void)
{
    u_long VAR_0;
    TIME_ZONE_INFORMATION VAR_1;

    VAR_0 = FUNC_0(&VAR_1);

    switch (VAR_0) {

    case 128:
        return -VAR_1.Bias;

    case 129:
        return -(VAR_1.Bias + VAR_1.StandardBias);

    case 130:
        return -(VAR_1.Bias + VAR_1.DaylightBias);

    default:
        return 0;
    }
}
