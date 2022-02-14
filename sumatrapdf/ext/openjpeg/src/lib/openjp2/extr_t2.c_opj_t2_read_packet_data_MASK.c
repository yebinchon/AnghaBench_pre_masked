
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {TYPE_1__* comps; } ;
typedef TYPE_3__ opj_tcd_tile_t ;
struct TYPE_18__ {scalar_t__ numpasses; scalar_t__ maxpasses; int newlen; int len; scalar_t__ numnewpasses; scalar_t__ real_num_passes; } ;
typedef TYPE_4__ opj_tcd_seg_t ;
struct TYPE_19__ {int len; int * data; } ;
typedef TYPE_5__ opj_tcd_seg_data_chunk_t ;
struct TYPE_20__ {scalar_t__ numbands; TYPE_9__* bands; } ;
typedef TYPE_6__ opj_tcd_resolution_t ;
struct TYPE_16__ {TYPE_8__* dec; } ;
struct TYPE_21__ {scalar_t__ cw; scalar_t__ ch; TYPE_2__ cblks; } ;
typedef TYPE_7__ opj_tcd_precinct_t ;
struct TYPE_22__ {scalar_t__ numnewpasses; int numsegs; int len; size_t numchunks; size_t numchunksalloc; int real_num_segs; TYPE_5__* chunks; TYPE_4__* segs; } ;
typedef TYPE_8__ opj_tcd_cblk_dec_t ;
struct TYPE_23__ {scalar_t__ x1; scalar_t__ x0; scalar_t__ y1; scalar_t__ y0; TYPE_7__* precincts; } ;
typedef TYPE_9__ opj_tcd_band_t ;
typedef int opj_t2_t ;
struct TYPE_14__ {size_t compno; size_t resno; size_t precno; } ;
typedef TYPE_10__ opj_pi_iterator_t ;
typedef int opj_packet_info_t ;
typedef int opj_event_mgr_t ;
struct TYPE_15__ {TYPE_6__* resolutions; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static OPJ_BOOL FUNC_3(opj_t2_t* VAR_5,
                                        opj_tcd_tile_t *VAR_6,
                                        opj_pi_iterator_t *VAR_7,
                                        OPJ_BYTE *VAR_8,
                                        OPJ_UINT32 * VAR_9,
                                        OPJ_UINT32 VAR_10,
                                        opj_packet_info_t *VAR_11,
                                        opj_event_mgr_t* VAR_12)
{
    OPJ_UINT32 VAR_13, VAR_14;
    OPJ_UINT32 VAR_15;
    OPJ_BYTE *VAR_16 = VAR_8;
    opj_tcd_band_t *VAR_17 = 00;
    opj_tcd_cblk_dec_t* VAR_18 = 00;
    opj_tcd_resolution_t* VAR_19 =
        &VAR_6->comps[VAR_7->compno].resolutions[VAR_7->resno];

    FUNC_0(VAR_5);
    FUNC_0(VAR_11);

    VAR_17 = VAR_19->bands;
    for (VAR_13 = 0; VAR_13 < VAR_19->numbands; ++VAR_13) {
        opj_tcd_precinct_t *VAR_20 = &VAR_17->precincts[VAR_7->precno];

        if ((VAR_17->x1 - VAR_17->x0 == 0) || (VAR_17->y1 - VAR_17->y0 == 0)) {
            ++VAR_17;
            continue;
        }

        VAR_15 = VAR_20->cw * VAR_20->ch;
        VAR_18 = VAR_20->cblks.dec;

        for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
            opj_tcd_seg_t *VAR_21 = 00;

            if (!VAR_18->numnewpasses) {

                ++VAR_18;
                continue;
            }

            if (!VAR_18->numsegs) {
                VAR_21 = VAR_18->segs;
                ++VAR_18->numsegs;
            } else {
                VAR_21 = &VAR_18->segs[VAR_18->numsegs - 1];

                if (VAR_21->numpasses == VAR_21->maxpasses) {
                    ++VAR_21;
                    ++VAR_18->numsegs;
                }
            }

            do {

                if ((((OPJ_SIZE_T)VAR_16 + (OPJ_SIZE_T)VAR_21->newlen) <
                        (OPJ_SIZE_T)VAR_16) ||
                        (VAR_16 + VAR_21->newlen > VAR_8 + VAR_10)) {
                    FUNC_1(VAR_12, VAR_0,
                                  "read: segment too long (%d) with max (%d) for codeblock %d (p=%d, b=%d, r=%d, c=%d)\n",
                                  VAR_21->newlen, VAR_10, VAR_14, VAR_7->precno, VAR_13, VAR_7->resno,
                                  VAR_7->compno);
                    return VAR_3;
                }
                if (VAR_18->numchunks == VAR_18->numchunksalloc) {
                    OPJ_UINT32 VAR_22 = VAR_18->numchunksalloc * 2 + 1;
                    opj_tcd_seg_data_chunk_t* VAR_23 =
                        (opj_tcd_seg_data_chunk_t*)FUNC_2(VAR_18->chunks,
                                VAR_22 * sizeof(opj_tcd_seg_data_chunk_t));
                    if (VAR_23 == ((void*)0)) {
                        FUNC_1(VAR_12, VAR_0,
                                      "cannot allocate opj_tcd_seg_data_chunk_t* array");
                        return VAR_3;
                    }
                    VAR_18->chunks = VAR_23;
                    VAR_18->numchunksalloc = VAR_22;
                }

                VAR_18->chunks[VAR_18->numchunks].data = VAR_16;
                VAR_18->chunks[VAR_18->numchunks].len = VAR_21->newlen;
                VAR_18->numchunks ++;

                VAR_16 += VAR_21->newlen;
                VAR_21->len += VAR_21->newlen;
                VAR_21->numpasses += VAR_21->numnewpasses;
                VAR_18->numnewpasses -= VAR_21->numnewpasses;

                VAR_21->real_num_passes = VAR_21->numpasses;

                if (VAR_18->numnewpasses > 0) {
                    ++VAR_21;
                    ++VAR_18->numsegs;
                }
            } while (VAR_18->numnewpasses > 0);

            VAR_18->real_num_segs = VAR_18->numsegs;
            ++VAR_18;
        }

        ++VAR_17;
    }

    *(VAR_9) = (OPJ_UINT32)(VAR_16 - VAR_8);


    return VAR_4;
}
