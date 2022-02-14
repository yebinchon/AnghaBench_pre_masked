
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int src_itemsize; int * tmp_buffer; } ;
typedef TYPE_1__ _strided_datetime_cast_data ;
typedef int NpyAuxData ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static NpyAuxData *FUNC_3(NpyAuxData *VAR_0)
{
    _strided_datetime_cast_data *VAR_1 =
            (_strided_datetime_cast_data *)FUNC_1(
                                        sizeof(_strided_datetime_cast_data));
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_2(VAR_1, VAR_0, sizeof(_strided_datetime_cast_data));
    if (VAR_1->tmp_buffer != ((void*)0)) {
        VAR_1->tmp_buffer = FUNC_1(VAR_1->src_itemsize + 1);
        if (VAR_1->tmp_buffer == ((void*)0)) {
            FUNC_0(VAR_1);
            return ((void*)0);
        }
    }

    return (NpyAuxData *)VAR_1;
}
