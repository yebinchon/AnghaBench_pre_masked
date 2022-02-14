
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int avformat; int* bytes; } ;
struct mp_image {int w; int h; int* stride; scalar_t__* planes; TYPE_1__ fmt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int** VAR_1 ;
 int FUNC_1 (struct mp_image*) ;
 int FUNC_2 (struct mp_image*,int ) ;
 int FUNC_3 (int) ;

struct mp_image *FUNC_4(struct mp_image *VAR_2)
{
    int VAR_3 = VAR_0;
    for (int VAR_4 = 0; VAR_1[VAR_4][0] != VAR_0; VAR_4++) {
        if (VAR_1[VAR_4][0] == VAR_2->fmt.avformat)
            VAR_3 = VAR_1[VAR_4][1];
    }
    if (VAR_3 == VAR_0 || !FUNC_1(VAR_2))
        return VAR_2;
    int VAR_5 = VAR_2->fmt.bytes[0] / 2 * VAR_2->w;
    for (int VAR_6 = 0; VAR_6 < VAR_2->h; VAR_6++) {
        uint16_t *VAR_7 = (uint16_t *)(VAR_2->planes[0] + VAR_6 * VAR_2->stride[0]);
        for (int VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
            VAR_7[VAR_8] = FUNC_0(VAR_7[VAR_8]);
    }
    FUNC_2(VAR_2, FUNC_3(VAR_3));
    return VAR_2;
}
