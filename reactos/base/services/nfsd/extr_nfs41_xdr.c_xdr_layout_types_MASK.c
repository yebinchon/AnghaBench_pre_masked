
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int32_t ;
typedef int bool_t ;
struct TYPE_4__ {scalar_t__ x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    uint32_t *VAR_4)
{
    u_int32_t VAR_5, VAR_6, VAR_7;

    if (VAR_3->x_op != VAR_2) {
        FUNC_0("xdr_layout_types: xdr->x_op is not XDR_DECODE! "
            "x_op %d not supported.\n", VAR_3->x_op);
        return VAR_0;
    }

    *VAR_4 = 0;

    if (!FUNC_1(VAR_3, &VAR_6))
        return VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
        if (!FUNC_1(VAR_3, &VAR_7))
            return VAR_0;

        *VAR_4 |= 1 << (VAR_7 - 1);
    }
    return VAR_1;
}
