
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {scalar_t__ count; int * items; } ;
typedef TYPE_1__ mdsthreshold4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    mdsthreshold4 *VAR_4)
{
    uint32_t VAR_5;

    if (!FUNC_1(VAR_3, &VAR_4->count))
        return VAR_0;

    if (VAR_4->count > VAR_1)
        return VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++)
        if (!FUNC_0(VAR_3, &VAR_4->items[VAR_5]))
            return VAR_0;
    return VAR_2;
}
