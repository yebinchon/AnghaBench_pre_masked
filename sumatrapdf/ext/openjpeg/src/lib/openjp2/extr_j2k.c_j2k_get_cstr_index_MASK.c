
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int marknum; int nb_of_tiles; int nb_tps; int * packet_index; struct TYPE_14__* tile_index; scalar_t__ nb_packet; struct TYPE_14__* tp_index; struct TYPE_14__* marker; int codestream_size; int main_head_end; int main_head_start; } ;
typedef TYPE_3__ opj_tp_index_t ;
typedef TYPE_3__ opj_tile_index_t ;
typedef TYPE_3__ opj_marker_info_t ;
struct TYPE_15__ {TYPE_2__* cstr_index; } ;
typedef TYPE_6__ opj_j2k_t ;
typedef TYPE_3__ opj_codestream_index_t ;
struct TYPE_13__ {int marknum; int nb_of_tiles; TYPE_1__* tile_index; scalar_t__ marker; int codestream_size; int main_head_end; int main_head_start; } ;
struct TYPE_12__ {int marknum; int nb_tps; scalar_t__ tp_index; scalar_t__ marker; } ;
typedef size_t OPJ_UINT32 ;


 int FUNC_0 (TYPE_3__*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

opj_codestream_index_t* FUNC_4(opj_j2k_t* VAR_0)
{
    opj_codestream_index_t* VAR_1 = (opj_codestream_index_t*)
                                           FUNC_1(1, sizeof(opj_codestream_index_t));
    if (!VAR_1) {
        return ((void*)0);
    }

    VAR_1->main_head_start = VAR_0->cstr_index->main_head_start;
    VAR_1->main_head_end = VAR_0->cstr_index->main_head_end;
    VAR_1->codestream_size = VAR_0->cstr_index->codestream_size;

    VAR_1->marknum = VAR_0->cstr_index->marknum;
    VAR_1->marker = (opj_marker_info_t*)FUNC_3(VAR_1->marknum *
                           sizeof(opj_marker_info_t));
    if (!VAR_1->marker) {
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    if (VAR_0->cstr_index->marker) {
        FUNC_0(VAR_1->marker, VAR_0->cstr_index->marker,
               VAR_1->marknum * sizeof(opj_marker_info_t));
    } else {
        FUNC_2(VAR_1->marker);
        VAR_1->marker = ((void*)0);
    }

    VAR_1->nb_of_tiles = VAR_0->cstr_index->nb_of_tiles;
    VAR_1->tile_index = (opj_tile_index_t*)FUNC_1(
                                   VAR_1->nb_of_tiles, sizeof(opj_tile_index_t));
    if (!VAR_1->tile_index) {
        FUNC_2(VAR_1->marker);
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    if (!VAR_0->cstr_index->tile_index) {
        FUNC_2(VAR_1->tile_index);
        VAR_1->tile_index = ((void*)0);
    } else {
        OPJ_UINT32 VAR_2 = 0;
        for (VAR_2 = 0; VAR_2 < VAR_1->nb_of_tiles; VAR_2++) {


            VAR_1->tile_index[VAR_2].marknum =
                VAR_0->cstr_index->tile_index[VAR_2].marknum;

            VAR_1->tile_index[VAR_2].marker =
                (opj_marker_info_t*)FUNC_3(VAR_1->tile_index[VAR_2].marknum *
                                               sizeof(opj_marker_info_t));

            if (!VAR_1->tile_index[VAR_2].marker) {
                OPJ_UINT32 VAR_3;

                for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
                    FUNC_2(VAR_1->tile_index[VAR_3].marker);
                }

                FUNC_2(VAR_1->tile_index);
                FUNC_2(VAR_1->marker);
                FUNC_2(VAR_1);
                return ((void*)0);
            }

            if (VAR_0->cstr_index->tile_index[VAR_2].marker)
                FUNC_0(VAR_1->tile_index[VAR_2].marker,
                       VAR_0->cstr_index->tile_index[VAR_2].marker,
                       VAR_1->tile_index[VAR_2].marknum * sizeof(opj_marker_info_t));
            else {
                FUNC_2(VAR_1->tile_index[VAR_2].marker);
                VAR_1->tile_index[VAR_2].marker = ((void*)0);
            }


            VAR_1->tile_index[VAR_2].nb_tps =
                VAR_0->cstr_index->tile_index[VAR_2].nb_tps;

            VAR_1->tile_index[VAR_2].tp_index =
                (opj_tp_index_t*)FUNC_3(VAR_1->tile_index[VAR_2].nb_tps * sizeof(
                                                opj_tp_index_t));

            if (!VAR_1->tile_index[VAR_2].tp_index) {
                OPJ_UINT32 VAR_4;

                for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
                    FUNC_2(VAR_1->tile_index[VAR_4].marker);
                    FUNC_2(VAR_1->tile_index[VAR_4].tp_index);
                }

                FUNC_2(VAR_1->tile_index);
                FUNC_2(VAR_1->marker);
                FUNC_2(VAR_1);
                return ((void*)0);
            }

            if (VAR_0->cstr_index->tile_index[VAR_2].tp_index) {
                FUNC_0(VAR_1->tile_index[VAR_2].tp_index,
                       VAR_0->cstr_index->tile_index[VAR_2].tp_index,
                       VAR_1->tile_index[VAR_2].nb_tps * sizeof(opj_tp_index_t));
            } else {
                FUNC_2(VAR_1->tile_index[VAR_2].tp_index);
                VAR_1->tile_index[VAR_2].tp_index = ((void*)0);
            }


            VAR_1->tile_index[VAR_2].nb_packet = 0;
            VAR_1->tile_index[VAR_2].packet_index = ((void*)0);

        }
    }

    return VAR_1;
}
