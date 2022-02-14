
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int byte ;
struct TYPE_8__ {scalar_t__ stride; scalar_t__ height; int width; int * data; } ;
struct TYPE_7__ {int word; int bit_index; scalar_t__ data_index; } ;
typedef TYPE_1__ Jbig2MmrCtx ;
typedef TYPE_2__ Jbig2Image ;
typedef int Jbig2GenericRegionParams ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int const*,size_t) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int *,int*) ;
 int FUNC_3 (int *,int ,int,char*) ;
 int FUNC_4 (int *,int ,scalar_t__ const) ;

int
FUNC_5(Jbig2Ctx *VAR_1, const Jbig2GenericRegionParams *VAR_2, const byte *VAR_3, size_t VAR_4, Jbig2Image *VAR_5, size_t *VAR_6)
{
    Jbig2MmrCtx VAR_7;
    const uint32_t VAR_8 = VAR_5->stride;
    byte *VAR_9 = VAR_5->data;
    byte *VAR_10 = ((void*)0);
    uint32_t VAR_11;
    int VAR_12 = 0;
    const uint32_t VAR_13 = 0x001001;
    int VAR_14 = 0;

    FUNC_1(&VAR_7, VAR_5->width, VAR_5->height, VAR_3, VAR_4);

    for (VAR_11 = 0; !VAR_14 && VAR_11 < VAR_5->height; VAR_11++) {
        FUNC_4(VAR_9, 0, VAR_8);
        VAR_12 = FUNC_2(VAR_1, &VAR_7, VAR_10, VAR_9, &VAR_14);
        if (VAR_12 < 0)
            return FUNC_3(VAR_1, VAR_0, -1, "failed to decode halftone mmr line");
        VAR_10 = VAR_9;
        VAR_9 += VAR_8;
    }

    if (VAR_14 && VAR_11 < VAR_5->height) {
        FUNC_4(VAR_9, 0, VAR_8 * (VAR_5->height - VAR_11));
    }


    if (VAR_7.word >> 8 == VAR_13) {
        FUNC_0(&VAR_7, 24);
    }

    *VAR_6 += VAR_7.data_index + (VAR_7.bit_index >> 3) + (VAR_7.bit_index > 0 ? 1 : 0);
    return VAR_12;
}
