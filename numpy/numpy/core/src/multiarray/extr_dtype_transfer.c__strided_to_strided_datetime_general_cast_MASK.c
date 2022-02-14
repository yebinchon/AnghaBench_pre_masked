
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
typedef char npy_int64 ;
typedef int npy_datetimestruct ;
typedef int dt ;
struct TYPE_2__ {int dst_meta; int src_meta; } ;
typedef TYPE_1__ _strided_datetime_cast_data ;
typedef int NpyAuxData ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (int *,char,int *) ;
 scalar_t__ FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, npy_intp VAR_2,
                        char *VAR_3, npy_intp VAR_4,
                        npy_intp VAR_5, npy_intp VAR_6,
                        NpyAuxData *VAR_7)
{
    _strided_datetime_cast_data *VAR_8 = (_strided_datetime_cast_data *)VAR_7;
    npy_int64 VAR_9;
    npy_datetimestruct VAR_10;

    while (VAR_5 > 0) {
        FUNC_2(&VAR_9, VAR_3, sizeof(VAR_9));

        if (FUNC_0(&VAR_8->src_meta,
                                               VAR_9, &VAR_10) < 0) {
            VAR_9 = VAR_0;
        }
        else {
            if (FUNC_1(&VAR_8->dst_meta,
                                                   &VAR_10, &VAR_9) < 0) {
                VAR_9 = VAR_0;
            }
        }

        FUNC_2(VAR_1, &VAR_9, sizeof(VAR_9));

        VAR_1 += VAR_2;
        VAR_3 += VAR_4;
        --VAR_5;
    }
}
