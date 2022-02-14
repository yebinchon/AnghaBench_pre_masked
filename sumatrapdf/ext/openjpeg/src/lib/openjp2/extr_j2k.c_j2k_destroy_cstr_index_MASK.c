
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nb_of_tiles; struct TYPE_4__* tile_index; struct TYPE_4__* marker; struct TYPE_4__* tp_index; struct TYPE_4__* packet_index; } ;
typedef TYPE_1__ opj_codestream_index_t ;
typedef size_t OPJ_UINT32 ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(opj_codestream_index_t *VAR_0)
{
    if (VAR_0) {

        if (VAR_0->marker) {
            FUNC_0(VAR_0->marker);
            VAR_0->marker = ((void*)0);
        }

        if (VAR_0->tile_index) {
            OPJ_UINT32 VAR_1 = 0;

            for (VAR_1 = 0; VAR_1 < VAR_0->nb_of_tiles; VAR_1++) {

                if (VAR_0->tile_index[VAR_1].packet_index) {
                    FUNC_0(VAR_0->tile_index[VAR_1].packet_index);
                    VAR_0->tile_index[VAR_1].packet_index = ((void*)0);
                }

                if (VAR_0->tile_index[VAR_1].tp_index) {
                    FUNC_0(VAR_0->tile_index[VAR_1].tp_index);
                    VAR_0->tile_index[VAR_1].tp_index = ((void*)0);
                }

                if (VAR_0->tile_index[VAR_1].marker) {
                    FUNC_0(VAR_0->tile_index[VAR_1].marker);
                    VAR_0->tile_index[VAR_1].marker = ((void*)0);

                }
            }

            FUNC_0(VAR_0->tile_index);
            VAR_0->tile_index = ((void*)0);
        }

        FUNC_0(VAR_0);
    }
}
