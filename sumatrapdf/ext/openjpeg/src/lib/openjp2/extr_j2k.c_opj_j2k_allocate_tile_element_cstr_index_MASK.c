
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int maxmarknum; int * marker; scalar_t__ marknum; } ;
typedef TYPE_3__ opj_tile_index_t ;
typedef int opj_marker_info_t ;
struct TYPE_6__ {int tw; int th; } ;
struct TYPE_9__ {TYPE_2__* cstr_index; TYPE_1__ m_cp; } ;
typedef TYPE_4__ opj_j2k_t ;
struct TYPE_7__ {int nb_of_tiles; TYPE_3__* tile_index; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static OPJ_BOOL FUNC_1(opj_j2k_t *VAR_2)
{
    OPJ_UINT32 VAR_3 = 0;

    VAR_2->cstr_index->nb_of_tiles = VAR_2->m_cp.tw * VAR_2->m_cp.th;
    VAR_2->cstr_index->tile_index = (opj_tile_index_t*)FUNC_0(
                                        VAR_2->cstr_index->nb_of_tiles, sizeof(opj_tile_index_t));
    if (!VAR_2->cstr_index->tile_index) {
        return VAR_0;
    }

    for (VAR_3 = 0; VAR_3 < VAR_2->cstr_index->nb_of_tiles; VAR_3++) {
        VAR_2->cstr_index->tile_index[VAR_3].maxmarknum = 100;
        VAR_2->cstr_index->tile_index[VAR_3].marknum = 0;
        VAR_2->cstr_index->tile_index[VAR_3].marker = (opj_marker_info_t*)
                FUNC_0(VAR_2->cstr_index->tile_index[VAR_3].maxmarknum,
                           sizeof(opj_marker_info_t));
        if (!VAR_2->cstr_index->tile_index[VAR_3].marker) {
            return VAR_0;
        }
    }

    return VAR_1;
}
