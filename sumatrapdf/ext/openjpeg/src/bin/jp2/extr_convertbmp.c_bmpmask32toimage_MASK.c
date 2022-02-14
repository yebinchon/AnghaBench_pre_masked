
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_4__ {unsigned int w; unsigned int h; unsigned int bpp; unsigned int prec; void** data; } ;
typedef scalar_t__ OPJ_UINT8 ;
typedef unsigned int OPJ_UINT32 ;
typedef void* OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int FUNC_0 (unsigned int,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(const OPJ_UINT8* VAR_0, OPJ_UINT32 VAR_1,
                             opj_image_t* VAR_2, OPJ_UINT32 VAR_3, OPJ_UINT32 VAR_4,
                             OPJ_UINT32 VAR_5, OPJ_UINT32 VAR_6)
{
    int VAR_7;
    OPJ_UINT32 VAR_8, VAR_9;
    OPJ_UINT32 VAR_10, VAR_11;
    const OPJ_UINT8 *VAR_12 = ((void*)0);
    OPJ_BOOL VAR_13;
    OPJ_UINT32 VAR_14, VAR_15;
    OPJ_UINT32 VAR_16, VAR_17;
    OPJ_UINT32 VAR_18, VAR_19;
    OPJ_UINT32 VAR_20, VAR_21;

    VAR_8 = VAR_2->comps[0].w;
    VAR_9 = VAR_2->comps[0].h;

    VAR_13 = VAR_2->numcomps > 3U;

    FUNC_0(VAR_3, &VAR_14, &VAR_15);
    FUNC_0(VAR_4, &VAR_16, &VAR_17);
    FUNC_0(VAR_5, &VAR_18, &VAR_19);
    FUNC_0(VAR_6, &VAR_20, &VAR_21);

    VAR_2->comps[0].bpp = VAR_15;
    VAR_2->comps[0].prec = VAR_15;
    VAR_2->comps[1].bpp = VAR_17;
    VAR_2->comps[1].prec = VAR_17;
    VAR_2->comps[2].bpp = VAR_19;
    VAR_2->comps[2].prec = VAR_19;
    if (VAR_13) {
        VAR_2->comps[3].bpp = VAR_21;
        VAR_2->comps[3].prec = VAR_21;
    }

    VAR_7 = 0;
    VAR_12 = VAR_0 + (VAR_9 - 1U) * VAR_1;
    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
            OPJ_UINT32 VAR_22 = 0U;

            VAR_22 |= ((OPJ_UINT32)VAR_12[4 * VAR_10 + 0]) << 0;
            VAR_22 |= ((OPJ_UINT32)VAR_12[4 * VAR_10 + 1]) << 8;
            VAR_22 |= ((OPJ_UINT32)VAR_12[4 * VAR_10 + 2]) << 16;
            VAR_22 |= ((OPJ_UINT32)VAR_12[4 * VAR_10 + 3]) << 24;

            VAR_2->comps[0].data[VAR_7] = (OPJ_INT32)((VAR_22 & VAR_3) >>
                                          VAR_14);
            VAR_2->comps[1].data[VAR_7] = (OPJ_INT32)((VAR_22 & VAR_4) >>
                                          VAR_16);
            VAR_2->comps[2].data[VAR_7] = (OPJ_INT32)((VAR_22 & VAR_5) >>
                                          VAR_18);
            if (VAR_13) {
                VAR_2->comps[3].data[VAR_7] = (OPJ_INT32)((VAR_22 & VAR_6) >>
                                              VAR_20);
            }
            VAR_7++;
        }
        VAR_12 -= VAR_1;
    }
}
