
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int opj_tcd_seg_t ;
typedef int opj_tcd_seg_data_chunk_t ;
struct TYPE_4__ {size_t m_current_max_segs; size_t numchunksalloc; int decoded_data; int * chunks; int * segs; } ;
typedef TYPE_1__ opj_tcd_cblk_dec_t ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (size_t,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_4(opj_tcd_cblk_dec_t *
        VAR_3)
{
    if (! VAR_3->segs) {

        VAR_3->segs = (opj_tcd_seg_t *) FUNC_2(VAR_1,
                             sizeof(opj_tcd_seg_t));
        if (! VAR_3->segs) {
            return VAR_0;
        }


        VAR_3->m_current_max_segs = VAR_1;

    } else {

        opj_tcd_seg_t * VAR_4 = VAR_3->segs;
        OPJ_UINT32 VAR_5 = VAR_3->m_current_max_segs;
        opj_tcd_seg_data_chunk_t* VAR_6 = VAR_3->chunks;
        OPJ_UINT32 VAR_7 = VAR_3->numchunksalloc;
        OPJ_UINT32 VAR_8;

        FUNC_1(VAR_3->decoded_data);
        VAR_3->decoded_data = 00;

        FUNC_0(VAR_3, 0, sizeof(opj_tcd_cblk_dec_t));
        VAR_3->segs = VAR_4;
        VAR_3->m_current_max_segs = VAR_5;
        for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
            FUNC_3(&VAR_4[VAR_8]);
        }
        VAR_3->chunks = VAR_6;
        VAR_3->numchunksalloc = VAR_7;
    }

    return VAR_2;
}
