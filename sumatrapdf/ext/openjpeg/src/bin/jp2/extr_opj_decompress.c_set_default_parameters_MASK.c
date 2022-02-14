
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int decod_format; int cod_format; int core; } ;
typedef TYPE_1__ opj_decompress_parameters ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(opj_decompress_parameters* VAR_0)
{
    if (VAR_0) {
        FUNC_0(VAR_0, 0, sizeof(opj_decompress_parameters));


        VAR_0->decod_format = -1;
        VAR_0->cod_format = -1;


        FUNC_1(&(VAR_0->core));
    }
}
