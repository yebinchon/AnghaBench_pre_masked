
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mp_image {int h; int** planes; int* stride; int w; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct mp_image *VAR_0,
                                          struct mp_image *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->h; ++VAR_2) {
        uint32_t *VAR_3 = (uint32_t *) &VAR_0->planes[0][VAR_0->stride[0] * VAR_2];
        uint8_t *VAR_4 = &VAR_1->planes[0][VAR_1->stride[0] * VAR_2];
        for (int VAR_5 = 0; VAR_5 < VAR_0->w; ++VAR_5) {
            uint32_t VAR_6 = VAR_3[VAR_5];
            uint8_t VAR_7 = (VAR_6 >> 24);
            uint8_t VAR_8 = (VAR_6 >> 16) & 0xFF;
            uint8_t VAR_9 = (VAR_6 >> 8) & 0xFF;
            uint8_t VAR_10 = VAR_6 & 0xFF;





            int VAR_11 = (int) VAR_7;
            int VAR_12 = VAR_11 / 2;
            if (VAR_7) {
                VAR_8 = FUNC_0(255, (VAR_8 * 255 + VAR_12) / VAR_11);
                VAR_9 = FUNC_0(255, (VAR_9 * 255 + VAR_12) / VAR_11);
                VAR_10 = FUNC_0(255, (VAR_10 * 255 + VAR_12) / VAR_11);
                VAR_3[VAR_5] = VAR_10 + (VAR_9 << 8) + (VAR_8 << 16) + (VAR_7 << 24);
            }
            VAR_4[VAR_5] = VAR_7;
        }
    }
}
