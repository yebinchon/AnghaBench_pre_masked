
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mp_image_params {scalar_t__ imgfmt; int h; int w; } ;
struct mp_image {int* stride; int ** planes; } ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mp_image*,struct mp_image_params*) ;

__attribute__((used)) static size_t FUNC_3(struct mp_image *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4,
                            struct mp_image_params *VAR_5)
{
    FUNC_1(VAR_5->imgfmt == VAR_2);
    FUNC_2(VAR_3, VAR_5);
    int VAR_6 = FUNC_0(VAR_5->w, VAR_1);
    int VAR_7 = FUNC_0(VAR_5->h, VAR_0);
    uint8_t *VAR_8 = VAR_4 ? VAR_4->data : ((void*)0);
    size_t VAR_9 = 0;
    for (int VAR_10 = 0; VAR_10 < 3; VAR_10++) {
        int VAR_11 = VAR_10 ? 2 : 1;
        VAR_3->planes[VAR_10] = VAR_8;
        VAR_3->stride[VAR_10] = VAR_6 / VAR_11;
        size_t VAR_12 = VAR_7 / VAR_11 * VAR_3->stride[VAR_10];
        if (VAR_8)
            VAR_8 += VAR_12;
        VAR_9 += VAR_12;
    }
    return VAR_9;
}
