
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * comps_indices; int * precision; } ;
typedef TYPE_1__ opj_decompress_parameters ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(opj_decompress_parameters* VAR_0)
{
    if (VAR_0) {
        if (VAR_0->precision) {
            FUNC_0(VAR_0->precision);
            VAR_0->precision = ((void*)0);
        }

        FUNC_0(VAR_0->comps_indices);
        VAR_0->comps_indices = ((void*)0);
    }
}
