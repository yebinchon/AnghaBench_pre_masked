
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* comps; } ;
typedef TYPE_3__ opj_tcd_tile_t ;
struct TYPE_15__ {scalar_t__ numpasses; scalar_t__ maxpasses; int newlen; scalar_t__ numnewpasses; } ;
typedef TYPE_4__ opj_tcd_seg_t ;
struct TYPE_16__ {scalar_t__ numbands; TYPE_8__* bands; } ;
typedef TYPE_5__ opj_tcd_resolution_t ;
struct TYPE_13__ {TYPE_7__* dec; } ;
struct TYPE_17__ {scalar_t__ cw; scalar_t__ ch; TYPE_2__ cblks; } ;
typedef TYPE_6__ opj_tcd_precinct_t ;
struct TYPE_18__ {scalar_t__ numnewpasses; int numsegs; int len; TYPE_4__* segs; } ;
typedef TYPE_7__ opj_tcd_cblk_dec_t ;
struct TYPE_19__ {scalar_t__ x1; scalar_t__ x0; scalar_t__ y1; scalar_t__ y0; TYPE_6__* precincts; } ;
typedef TYPE_8__ opj_tcd_band_t ;
typedef int opj_t2_t ;
struct TYPE_20__ {size_t compno; size_t resno; size_t precno; } ;
typedef TYPE_9__ opj_pi_iterator_t ;
typedef int opj_packet_info_t ;
typedef int opj_event_mgr_t ;
struct TYPE_12__ {TYPE_5__* resolutions; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static OPJ_BOOL FUNC_3(opj_t2_t* VAR_6,
                                        opj_tcd_tile_t *VAR_7,
                                        opj_pi_iterator_t *VAR_8,
                                        OPJ_UINT32 * VAR_9,
                                        OPJ_UINT32 VAR_10,
                                        opj_packet_info_t *VAR_11,
                                        opj_event_mgr_t *VAR_12)
{
    OPJ_UINT32 VAR_13, VAR_14;
    OPJ_UINT32 VAR_15;
    opj_tcd_band_t *VAR_16 = 00;
    opj_tcd_cblk_dec_t* VAR_17 = 00;
    opj_tcd_resolution_t* VAR_18 =
        &VAR_7->comps[VAR_8->compno].resolutions[VAR_8->resno];

    FUNC_1(VAR_6);
    FUNC_1(VAR_11);

    *VAR_9 = 0;
    VAR_16 = VAR_18->bands;

    for (VAR_13 = 0; VAR_13 < VAR_18->numbands; ++VAR_13) {
        opj_tcd_precinct_t *VAR_19 = &VAR_16->precincts[VAR_8->precno];

        if ((VAR_16->x1 - VAR_16->x0 == 0) || (VAR_16->y1 - VAR_16->y0 == 0)) {
            ++VAR_16;
            continue;
        }

        VAR_15 = VAR_19->cw * VAR_19->ch;
        VAR_17 = VAR_19->cblks.dec;

        for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
            opj_tcd_seg_t *VAR_20 = 00;

            if (!VAR_17->numnewpasses) {

                ++VAR_17;
                continue;
            }

            if (!VAR_17->numsegs) {
                VAR_20 = VAR_17->segs;
                ++VAR_17->numsegs;
            } else {
                VAR_20 = &VAR_17->segs[VAR_17->numsegs - 1];

                if (VAR_20->numpasses == VAR_20->maxpasses) {
                    ++VAR_20;
                    ++VAR_17->numsegs;
                }
            }

            do {

                if (((*VAR_9 + VAR_20->newlen) < (*VAR_9)) ||
                        ((*VAR_9 + VAR_20->newlen) > VAR_10)) {
                    FUNC_2(VAR_12, VAR_0,
                                  "skip: segment too long (%d) with max (%d) for codeblock %d (p=%d, b=%d, r=%d, c=%d)\n",
                                  VAR_20->newlen, VAR_10, VAR_14, VAR_8->precno, VAR_13, VAR_8->resno,
                                  VAR_8->compno);
                    return VAR_3;
                }
                FUNC_0(VAR_5, "p_data_read (%d) newlen (%d) \n", *VAR_9,
                            VAR_20->newlen);
                *(VAR_9) += VAR_20->newlen;

                VAR_20->numpasses += VAR_20->numnewpasses;
                VAR_17->numnewpasses -= VAR_20->numnewpasses;
                if (VAR_17->numnewpasses > 0) {
                    ++VAR_20;
                    ++VAR_17->numsegs;
                }
            } while (VAR_17->numnewpasses > 0);

            ++VAR_17;
        }

        ++VAR_16;
    }

    return VAR_4;
}
