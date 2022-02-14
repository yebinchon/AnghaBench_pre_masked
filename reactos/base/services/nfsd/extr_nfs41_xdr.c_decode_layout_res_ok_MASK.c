
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ count; int layouts; int stateid; int return_on_close; } ;
typedef TYPE_1__ pnfs_layoutget_res_ok ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_2,
    pnfs_layoutget_res_ok *VAR_3)
{
    uint32_t VAR_4;

    if (!FUNC_1(VAR_2, &VAR_3->return_on_close))
        return VAR_0;

    if (!FUNC_2(VAR_2, &VAR_3->stateid))
        return VAR_0;

    if (!FUNC_3(VAR_2, &VAR_3->count))
        return VAR_0;

    for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++)
        if (!FUNC_0(VAR_2, &VAR_3->layouts))
            return VAR_0;
    return VAR_1;
}
