
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
typedef char npy_int64 ;
typedef int npy_datetimestruct ;
typedef int dt ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {char* tmp_buffer; TYPE_2__ dst_meta; } ;
typedef TYPE_1__ _strided_datetime_cast_data ;
typedef int NpyAuxData ;


 char VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,char*) ;
 char* FUNC_1 (char*,char,scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,int,int ,int ,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_4(char *VAR_2, npy_intp VAR_3,
                        char *VAR_4, npy_intp VAR_5,
                        npy_intp VAR_6, npy_intp VAR_7,
                        NpyAuxData *VAR_8)
{
    _strided_datetime_cast_data *VAR_9 = (_strided_datetime_cast_data *)VAR_8;
    npy_datetimestruct VAR_10;
    char *VAR_11 = VAR_9->tmp_buffer;
    char *VAR_12;

    while (VAR_6 > 0) {
        npy_int64 VAR_13 = ~VAR_0;


        VAR_12 = FUNC_1(VAR_4, '\0', VAR_7);


        if (VAR_12 == ((void*)0)) {
            FUNC_2(VAR_11, VAR_4, VAR_7);
            VAR_11[VAR_7] = '\0';

            if (FUNC_3(VAR_11, VAR_7,
                                    VAR_9->dst_meta.base, VAR_1,
                                    &VAR_10, ((void*)0), ((void*)0)) < 0) {
                VAR_13 = VAR_0;
            }
        }

        else {
            if (FUNC_3(VAR_4, VAR_12 - VAR_4,
                                    VAR_9->dst_meta.base, VAR_1,
                                    &VAR_10, ((void*)0), ((void*)0)) < 0) {
                VAR_13 = VAR_0;
            }
        }


        if (VAR_13 != VAR_0 &&
                FUNC_0(&VAR_9->dst_meta,
                                               &VAR_10, &VAR_13) < 0) {
            VAR_13 = VAR_0;
        }

        FUNC_2(VAR_2, &VAR_13, sizeof(VAR_13));

        VAR_2 += VAR_3;
        VAR_4 += VAR_5;
        --VAR_6;
    }
}
