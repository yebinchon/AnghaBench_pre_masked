
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int byte ;
struct TYPE_28__ {int allocator; } ;
struct TYPE_27__ {int HENABLESKIP; int HGW; int HGH; int HGX; int HGY; int HCOMBOP; scalar_t__ HRY; scalar_t__ HRX; int HTEMPLATE; int HMMR; int HDEFPIXEL; } ;
struct TYPE_26__ {int stride; int height; scalar_t__ width; int data; } ;
struct TYPE_25__ {scalar_t__ HPW; scalar_t__ HPH; int n_patterns; int * patterns; } ;
struct TYPE_24__ {int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2PatternDict ;
typedef TYPE_3__ Jbig2Image ;
typedef TYPE_4__ Jbig2HalftoneRegionParams ;
typedef TYPE_5__ Jbig2Ctx ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int VAR_1 ;
 int** FUNC_0 (TYPE_5__*,TYPE_1__*,int const*,size_t const,int ,int,int,int,int,TYPE_3__*,int ,int *) ;
 TYPE_2__* FUNC_1 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_5__*,int ,int ,char*,...) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*,int ,int,int,int ) ;
 TYPE_3__* FUNC_5 (TYPE_5__*,int,int) ;
 int FUNC_6 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int,int,int) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_9(Jbig2Ctx *VAR_2, Jbig2Segment *VAR_3,
                             Jbig2HalftoneRegionParams *VAR_4, const byte *VAR_5, const size_t VAR_6, Jbig2Image *VAR_7, Jbig2ArithCx *VAR_8)
{
    uint32_t VAR_9;
    uint32_t VAR_10;
    uint16_t **VAR_11 = ((void*)0);
    Jbig2Image *VAR_12 = ((void*)0);
    Jbig2PatternDict *VAR_13;
    uint32_t VAR_14;
    uint32_t VAR_15, VAR_16;
    int32_t VAR_17, VAR_18;
    uint16_t VAR_19;
    int VAR_20 = 0;


    VAR_13 = FUNC_1(VAR_2, VAR_3);
    if (!VAR_13) {
        VAR_20 = FUNC_2(VAR_2, VAR_1, VAR_3->number, "no pattern dictionary found, skipping halftone image");
        goto cleanup;
    }


    FUNC_8(VAR_7->data, VAR_4->HDEFPIXEL, VAR_7->stride * VAR_7->height);


    if (VAR_4->HENABLESKIP == 1) {
        VAR_12 = FUNC_5(VAR_2, VAR_4->HGW, VAR_4->HGH);
        if (VAR_12 == ((void*)0))
            return FUNC_2(VAR_2, VAR_1, VAR_3->number, "failed to allocate skip image");

        for (VAR_15 = 0; VAR_15 < VAR_4->HGH; ++VAR_15) {
            for (VAR_16 = 0; VAR_16 < VAR_4->HGW; ++VAR_16) {
                VAR_17 = (VAR_4->HGX + VAR_15 * (int32_t) VAR_4->HRY + VAR_16 * (int32_t) VAR_4->HRX) >> 8;
                VAR_18 = (VAR_4->HGY + VAR_15 * (int32_t) VAR_4->HRX - VAR_16 * (int32_t) VAR_4->HRY) >> 8;

                if (VAR_17 + VAR_13->HPW <= 0 || VAR_17 >= (int32_t) VAR_7->width || VAR_18 + VAR_13->HPH <= 0 || VAR_18 >= (int32_t) VAR_7->height) {
                    FUNC_7(VAR_12, VAR_16, VAR_15, 1);
                } else {
                    FUNC_7(VAR_12, VAR_16, VAR_15, 0);
                }
            }
        }
    }


    VAR_10 = VAR_13->n_patterns;
    VAR_9 = 0;
    while (VAR_10 > (1U << ++VAR_9));
    if (VAR_9 > 16) {
        VAR_20 = FUNC_2(VAR_2, VAR_0, VAR_3->number, "HBPP is larger than supported (%u)", VAR_9);
        goto cleanup;
    }


    VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6,
                                       VAR_4->HMMR, VAR_4->HGW, VAR_4->HGH, VAR_9, VAR_4->HENABLESKIP, VAR_12, VAR_4->HTEMPLATE, VAR_8);
    if (!VAR_11) {
        VAR_20 = FUNC_2(VAR_2, VAR_1, VAR_3->number, "unable to acquire gray-scale image, skipping halftone image");
        goto cleanup;
    }


    for (VAR_15 = 0; VAR_15 < VAR_4->HGH; ++VAR_15) {
        for (VAR_16 = 0; VAR_16 < VAR_4->HGW; ++VAR_16) {
            VAR_17 = (VAR_4->HGX + VAR_15 * (int32_t) VAR_4->HRY + VAR_16 * (int32_t) VAR_4->HRX) >> 8;
            VAR_18 = (VAR_4->HGY + VAR_15 * (int32_t) VAR_4->HRX - VAR_16 * (int32_t) VAR_4->HRY) >> 8;


            VAR_19 = VAR_11[VAR_16][VAR_15];
            if (VAR_19 >= VAR_10) {
                FUNC_2(VAR_2, VAR_1, VAR_3->number, "gray-scale index %d out of range, using largest index", VAR_19);

                VAR_19 = VAR_10 - 1;
            }
            VAR_20 = FUNC_4(VAR_2, VAR_7, VAR_13->patterns[VAR_19], VAR_17, VAR_18, VAR_4->HCOMBOP);
            if (VAR_20 < 0) {
                VAR_20 = FUNC_2(VAR_2, VAR_1, VAR_3->number, "failed to compose pattern with gray-scale image");
                goto cleanup;
            }
        }
    }

cleanup:
    if (VAR_11) {
        for (VAR_14 = 0; VAR_14 < VAR_4->HGW; ++VAR_14) {
            FUNC_3(VAR_2->allocator, VAR_11[VAR_14]);
        }
    }
    FUNC_3(VAR_2->allocator, VAR_11);
    FUNC_6(VAR_2, VAR_12);

    return VAR_20;
}
