
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; scalar_t__ data_size_needed; scalar_t__ data_size; scalar_t__ ownsData; } ;
typedef TYPE_1__ opj_tcd_tilecomp_t ;
typedef int OPJ_INT32 ;
typedef scalar_t__ OPJ_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

OPJ_BOOL FUNC_2(opj_tcd_tilecomp_t *VAR_2)
{
    if ((VAR_2->data == 00) ||
            ((VAR_2->data_size_needed > VAR_2->data_size) &&
             (VAR_2->ownsData == VAR_0))) {
        VAR_2->data = *(OPJ_INT32 *) FUNC_0(VAR_2->data_size_needed);
        if (!VAR_2->data && VAR_2->data_size_needed != 0) {
            return VAR_0;
        }

        VAR_2->data_size = VAR_2->data_size_needed;
        VAR_2->ownsData = VAR_1;
    } else if (VAR_2->data_size_needed > VAR_2->data_size) {

        FUNC_1(VAR_2->data);
        VAR_2->data = *(OPJ_INT32 *) FUNC_0(VAR_2->data_size_needed);
        if (! VAR_2->data) {
            VAR_2->data_size = 0;
            VAR_2->data_size_needed = 0;
            VAR_2->ownsData = VAR_0;
            return VAR_0;
        }

        VAR_2->data_size = VAR_2->data_size_needed;
        VAR_2->ownsData = VAR_1;
    }
    return VAR_1;
}
