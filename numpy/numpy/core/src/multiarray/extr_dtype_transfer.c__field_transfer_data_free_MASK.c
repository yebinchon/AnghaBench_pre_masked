
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ _single_field_transfer ;
struct TYPE_5__ {size_t field_count; TYPE_1__ fields; } ;
typedef TYPE_2__ _field_transfer_data ;
typedef int NpyAuxData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(NpyAuxData *VAR_0)
{
    _field_transfer_data *VAR_1 = (_field_transfer_data *)VAR_0;
    npy_intp VAR_2, VAR_3;
    _single_field_transfer *VAR_4;

    VAR_3 = VAR_1->field_count;
    VAR_4 = &VAR_1->fields;

    for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
        FUNC_0(VAR_4[VAR_2].data);
    }
    FUNC_1(VAR_1);
}
