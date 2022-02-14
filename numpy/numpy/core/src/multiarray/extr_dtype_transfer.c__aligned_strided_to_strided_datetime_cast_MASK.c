
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
typedef int npy_int64 ;
struct TYPE_2__ {int num; int denom; } ;
typedef TYPE_1__ _strided_datetime_cast_data ;
typedef int NpyAuxData ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(char *VAR_1,
                        npy_intp VAR_2,
                        char *VAR_3, npy_intp VAR_4,
                        npy_intp VAR_5, npy_intp VAR_6,
                        NpyAuxData *VAR_7)
{
    _strided_datetime_cast_data *VAR_8 = (_strided_datetime_cast_data *)VAR_7;
    npy_int64 VAR_9 = VAR_8->num, VAR_10 = VAR_8->denom;
    npy_int64 VAR_11;

    while (VAR_5 > 0) {
        VAR_11 = *(npy_int64 *)VAR_3;

        if (VAR_11 != VAR_0) {

            if (VAR_11 < 0) {
                VAR_11 = (VAR_11 * VAR_9 - (VAR_10 - 1)) / VAR_10;
            }
            else {
                VAR_11 = VAR_11 * VAR_9 / VAR_10;
            }
        }

        *(npy_int64 *)VAR_1 = VAR_11;

        VAR_1 += VAR_2;
        VAR_3 += VAR_4;
        --VAR_5;
    }
}
