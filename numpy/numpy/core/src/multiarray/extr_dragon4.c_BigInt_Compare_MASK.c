
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ npy_int32 ;
struct TYPE_4__ {scalar_t__ length; scalar_t__* blocks; } ;
typedef TYPE_1__ BigInt ;



__attribute__((used)) static npy_int32
FUNC_0(const BigInt *VAR_0, const BigInt *VAR_1)
{
    int VAR_2;


    npy_int32 VAR_3 = VAR_0->length - VAR_1->length;
    if (VAR_3 != 0) {
        return VAR_3;
    }


    for (VAR_2 = VAR_0->length - 1; VAR_2 >= 0; --VAR_2) {
        if (VAR_0->blocks[VAR_2] == VAR_1->blocks[VAR_2]) {
            continue;
        }
        else if (VAR_0->blocks[VAR_2] > VAR_1->blocks[VAR_2]) {
            return 1;
        }
        else {
            return -1;
        }
    }


    return 0;
}
