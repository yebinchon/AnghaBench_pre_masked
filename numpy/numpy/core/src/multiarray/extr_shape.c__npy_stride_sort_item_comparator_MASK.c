
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ stride; scalar_t__ perm; } ;
typedef TYPE_1__ npy_stride_sort_item ;
typedef scalar_t__ npy_intp ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    npy_intp VAR_2 = ((const npy_stride_sort_item *)VAR_0)->stride,
            VAR_3 = ((const npy_stride_sort_item *)VAR_1)->stride;


    if (VAR_2 < 0) {
        VAR_2 = -VAR_2;
    }
    if (VAR_3 < 0) {
        VAR_3 = -VAR_3;
    }

    if (VAR_2 == VAR_3) {




        npy_intp VAR_4 = ((const npy_stride_sort_item *)VAR_0)->perm,
                VAR_5 = ((const npy_stride_sort_item *)VAR_1)->perm;
        return (VAR_4 < VAR_5) ? -1 : 1;
    }
    if (VAR_2 > VAR_3) {
        return -1;
    }
    return 1;
}
