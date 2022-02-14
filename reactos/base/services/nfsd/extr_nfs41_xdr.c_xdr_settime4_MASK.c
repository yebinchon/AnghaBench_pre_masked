
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int nfstime4 ;
typedef int bool_t ;
struct TYPE_5__ {scalar_t__ x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int const*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_4,
    nfstime4 *VAR_5,
    const nfstime4 *VAR_6)
{
    uint32_t VAR_7 = FUNC_0(VAR_5, VAR_6);

    if (VAR_4->x_op != VAR_3)
        return VAR_0;

    if (!FUNC_2(VAR_4, &VAR_7))
        return VAR_0;

    if (VAR_7 == VAR_1)
        return FUNC_1(VAR_4, VAR_5);

    return VAR_2;
}
