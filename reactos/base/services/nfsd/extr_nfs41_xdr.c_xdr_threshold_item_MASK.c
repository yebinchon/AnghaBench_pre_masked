
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hints; scalar_t__ type; } ;
typedef TYPE_1__ threshold_item4 ;
typedef int bool_t ;
struct TYPE_6__ {int* arr; scalar_t__ count; } ;
typedef TYPE_2__ bitmap4 ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_2,
    threshold_item4 *VAR_3)
{
    bitmap4 VAR_4;

    if (!FUNC_2(VAR_2, &VAR_3->type))
        return VAR_0;

    if (!FUNC_0(VAR_2, &VAR_4))
        return VAR_0;

    if (!FUNC_2(VAR_2, &VAR_4.count))
        return VAR_0;

    if (VAR_4.count) {
        if (VAR_4.arr[0] & 0x1 && !FUNC_1(VAR_2, &VAR_3->hints[0]))
            return VAR_0;
        if (VAR_4.arr[0] & 0x2 && !FUNC_1(VAR_2, &VAR_3->hints[1]))
            return VAR_0;
        if (VAR_4.arr[0] & 0x4 && !FUNC_1(VAR_2, &VAR_3->hints[2]))
            return VAR_0;
        if (VAR_4.arr[0] & 0x8 && !FUNC_1(VAR_2, &VAR_3->hints[3]))
            return VAR_0;
    }
    return VAR_1;
}
