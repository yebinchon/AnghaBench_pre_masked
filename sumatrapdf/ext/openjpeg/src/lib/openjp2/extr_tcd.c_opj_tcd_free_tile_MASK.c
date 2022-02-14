
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ numcomps; scalar_t__ resolutions_size; int incltree; int imsbtree; int data; int data_win; struct TYPE_15__* comps; scalar_t__ data_size_needed; scalar_t__ data_size; scalar_t__ ownsData; struct TYPE_15__* resolutions; TYPE_8__* bands; } ;
typedef TYPE_2__ opj_tcd_tilecomp_t ;
typedef TYPE_2__ opj_tcd_tile_t ;
struct TYPE_16__ {TYPE_1__* tcd_image; scalar_t__ m_is_decoder; } ;
typedef TYPE_5__ opj_tcd_t ;
typedef TYPE_2__ opj_tcd_resolution_t ;
typedef TYPE_2__ opj_tcd_precinct_t ;
struct TYPE_17__ {scalar_t__ precincts_data_size; TYPE_2__* precincts; } ;
typedef TYPE_8__ opj_tcd_band_t ;
struct TYPE_14__ {TYPE_2__* tiles; } ;
typedef scalar_t__ OPJ_UINT32 ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 void FUNC_2 (TYPE_2__*) ;
 void FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 void FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(opj_tcd_t *VAR_0)
{
    OPJ_UINT32 VAR_1, VAR_2, VAR_3, VAR_4;
    opj_tcd_tile_t *VAR_5 = 00;
    opj_tcd_tilecomp_t *VAR_6 = 00;
    opj_tcd_resolution_t *VAR_7 = 00;
    opj_tcd_band_t *VAR_8 = 00;
    opj_tcd_precinct_t *VAR_9 = 00;
    OPJ_UINT32 VAR_10, VAR_11;
    void (* VAR_12)(opj_tcd_precinct_t *) = 00;

    if (! VAR_0) {
        return;
    }

    if (! VAR_0->tcd_image) {
        return;
    }

    if (VAR_0->m_is_decoder) {
        VAR_12 = FUNC_2;
    } else {
        VAR_12 = FUNC_3;
    }

    VAR_5 = VAR_0->tcd_image->tiles;
    if (! VAR_5) {
        return;
    }

    VAR_6 = VAR_5->comps;

    for (VAR_1 = 0; VAR_1 < VAR_5->numcomps; ++VAR_1) {
        VAR_7 = VAR_6->resolutions;
        if (VAR_7) {

            VAR_10 = VAR_6->resolutions_size / (OPJ_UINT32)sizeof(
                                   opj_tcd_resolution_t);
            for (VAR_2 = 0; VAR_2 < VAR_10; ++VAR_2) {
                VAR_8 = VAR_7->bands;
                for (VAR_3 = 0; VAR_3 < 3; ++VAR_3) {
                    VAR_9 = VAR_8->precincts;
                    if (VAR_9) {

                        VAR_11 = VAR_8->precincts_data_size / (OPJ_UINT32)sizeof(
                                             opj_tcd_precinct_t);
                        for (VAR_4 = 0; VAR_4 < VAR_11; ++VAR_4) {
                            FUNC_4(VAR_9->incltree);
                            VAR_9->incltree = 00;
                            FUNC_4(VAR_9->imsbtree);
                            VAR_9->imsbtree = 00;
                            (*VAR_12)(VAR_9);
                            ++VAR_9;
                        }

                        FUNC_0(VAR_8->precincts);
                        VAR_8->precincts = 00;
                    }
                    ++VAR_8;
                }
                ++VAR_7;
            }

            FUNC_0(VAR_6->resolutions);
            VAR_6->resolutions = 00;
        }

        if (VAR_6->ownsData && VAR_6->data) {
            FUNC_1(VAR_6->data);
            VAR_6->data = 00;
            VAR_6->ownsData = 0;
            VAR_6->data_size = 0;
            VAR_6->data_size_needed = 0;
        }

        FUNC_1(VAR_6->data_win);

        ++VAR_6;
    }

    FUNC_0(VAR_5->comps);
    VAR_5->comps = 00;
    FUNC_0(VAR_0->tcd_image->tiles);
    VAR_0->tcd_image->tiles = 00;
}
