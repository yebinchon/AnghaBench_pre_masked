
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int after; int before; int atomic; } ;
typedef TYPE_1__ change_info4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_1,
    change_info4 *VAR_2)
{
    if (!FUNC_0(VAR_1, &VAR_2->atomic))
        return VAR_0;

    if (!FUNC_1(VAR_1, &VAR_2->before))
        return VAR_0;

    return FUNC_1(VAR_1, &VAR_2->after);
}
