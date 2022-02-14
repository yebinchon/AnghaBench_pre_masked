
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_6__ {int * data; } ;
typedef TYPE_1__ _single_field_transfer ;
struct TYPE_7__ {int field_count; TYPE_1__ fields; } ;
typedef TYPE_2__ _field_transfer_data ;
typedef int NpyAuxData ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static NpyAuxData *FUNC_5(NpyAuxData *VAR_0)
{
    _field_transfer_data *VAR_1 = (_field_transfer_data *)VAR_0;
    _field_transfer_data *VAR_2;
    npy_intp VAR_3, VAR_4 = VAR_1->field_count, VAR_5;
    _single_field_transfer *VAR_6, *VAR_7;

    VAR_5 = sizeof(_field_transfer_data) +
                    VAR_4 * sizeof(_single_field_transfer);


    VAR_2 = (_field_transfer_data *)FUNC_3(VAR_5);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_4(VAR_2, VAR_1, VAR_5);

    VAR_6 = &VAR_1->fields;
    VAR_7 = &VAR_2->fields;
    for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
        if (VAR_6[VAR_3].data != ((void*)0)) {
            VAR_7[VAR_3].data = FUNC_0(VAR_6[VAR_3].data);
            if (VAR_7[VAR_3].data == ((void*)0)) {
                for (VAR_3 = VAR_3-1; VAR_3 >= 0; --VAR_3) {
                    FUNC_1(VAR_7[VAR_3].data);
                }
                FUNC_2(VAR_2);
                return ((void*)0);
            }
        }

    }

    return (NpyAuxData *)VAR_2;
}
