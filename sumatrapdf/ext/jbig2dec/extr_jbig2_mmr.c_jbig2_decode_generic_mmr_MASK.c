
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int byte ;
struct TYPE_6__ {scalar_t__ stride; scalar_t__ height; int width; int * data; } ;
struct TYPE_5__ {int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef int Jbig2MmrCtx ;
typedef TYPE_2__ Jbig2Image ;
typedef int Jbig2GenericRegionParams ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int const*,size_t) ;
 int FUNC_1 (int *,int *,int *,int *,int*) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (int *,int ,scalar_t__ const) ;

int
FUNC_4(Jbig2Ctx *VAR_1, Jbig2Segment *VAR_2, const Jbig2GenericRegionParams *VAR_3, const byte *VAR_4, size_t VAR_5, Jbig2Image *VAR_6)
{
    Jbig2MmrCtx VAR_7;
    const uint32_t VAR_8 = VAR_6->stride;
    byte *VAR_9 = VAR_6->data;
    byte *VAR_10 = ((void*)0);
    uint32_t VAR_11;
    int VAR_12 = 0;
    int VAR_13 = 0;

    FUNC_0(&VAR_7, VAR_6->width, VAR_6->height, VAR_4, VAR_5);

    for (VAR_11 = 0; !VAR_13 && VAR_11 < VAR_6->height; VAR_11++) {
        FUNC_3(VAR_9, 0, VAR_8);
        VAR_12 = FUNC_1(VAR_1, &VAR_7, VAR_10, VAR_9, &VAR_13);
        if (VAR_12 < 0)
            return FUNC_2(VAR_1, VAR_0, VAR_2->number, "failed to decode mmr line");
        VAR_10 = VAR_9;
        VAR_9 += VAR_8;
    }

    if (VAR_13 && VAR_11 < VAR_6->height) {
        FUNC_3(VAR_9, 0, VAR_8 * (VAR_6->height - VAR_11));
    }

    return VAR_12;
}
