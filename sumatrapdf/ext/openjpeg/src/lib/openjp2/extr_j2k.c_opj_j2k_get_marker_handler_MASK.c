
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; } ;
typedef TYPE_1__ opj_dec_memory_marker_handler_t ;
typedef scalar_t__ OPJ_UINT32 ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const opj_dec_memory_marker_handler_t * FUNC_0(
    OPJ_UINT32 VAR_1)
{
    const opj_dec_memory_marker_handler_t *VAR_2;
    for (VAR_2 = VAR_0; VAR_2->id != 0; ++VAR_2) {
        if (VAR_2->id == VAR_1) {
            break;
        }
    }
    return VAR_2;
}
