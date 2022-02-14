
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
struct TYPE_2__ {scalar_t__ dst_itemsize; } ;
typedef TYPE_1__ _strided_zero_pad_data ;
typedef int NpyAuxData ;


 int FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, npy_intp VAR_1,
                        char *VAR_2, npy_intp VAR_3,
                        npy_intp VAR_4, npy_intp VAR_5,
                        NpyAuxData *VAR_6)
{
    _strided_zero_pad_data *VAR_7 = (_strided_zero_pad_data *)VAR_6;
    npy_intp VAR_8 = VAR_7->dst_itemsize;
    npy_intp VAR_9 = VAR_8-VAR_5;

    while (VAR_4 > 0) {
        FUNC_0(VAR_0, VAR_2, VAR_5);
        FUNC_1(VAR_0 + VAR_5, 0, VAR_9);
        VAR_2 += VAR_3;
        VAR_0 += VAR_1;
        --VAR_4;
    }
}
