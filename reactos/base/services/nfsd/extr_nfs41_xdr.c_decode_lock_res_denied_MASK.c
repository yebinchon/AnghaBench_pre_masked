
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; int locktype; int length; int offset; } ;
typedef TYPE_1__ lock_res_denied ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_1,
    lock_res_denied *VAR_2)
{
    if (!FUNC_1(VAR_1, &VAR_2->offset))
        return VAR_0;

    if (!FUNC_1(VAR_1, &VAR_2->length))
        return VAR_0;

    if (!FUNC_2(VAR_1, &VAR_2->locktype))
        return VAR_0;

    return FUNC_0(VAR_1, &VAR_2->owner);
}
