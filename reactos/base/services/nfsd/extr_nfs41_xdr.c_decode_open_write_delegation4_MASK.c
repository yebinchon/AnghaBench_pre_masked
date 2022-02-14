
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int permissions; int recalled; int stateid; } ;
typedef TYPE_1__ open_delegation4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_1,
    open_delegation4 *VAR_2)
{
    uint64_t VAR_3;

    if (!FUNC_3(VAR_1, &VAR_2->stateid))
        return VAR_0;

    if (!FUNC_1(VAR_1, &VAR_2->recalled))
        return VAR_0;

    if (!FUNC_0(VAR_1, &VAR_3))
        return VAR_0;

    return FUNC_2(VAR_1, &VAR_2->permissions);
}
