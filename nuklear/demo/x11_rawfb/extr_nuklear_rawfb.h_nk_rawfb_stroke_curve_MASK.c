
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_context {int dummy; } ;
struct nk_vec2i {float x; float y; } ;
struct nk_color {int dummy; } ;


 unsigned int FUNC_0 (unsigned int const,int) ;
 int FUNC_1 (struct rawfb_context const*,float,float,short,short,unsigned short const,struct nk_color const) ;

__attribute__((used)) static void
FUNC_2(const struct rawfb_context *VAR_0,
    const struct nk_vec2i VAR_1, const struct nk_vec2i VAR_2,
    const struct nk_vec2i VAR_3, const struct nk_vec2i VAR_4,
    const unsigned int VAR_5, const unsigned short VAR_6,
    const struct nk_color VAR_7)
{
    unsigned int VAR_8, VAR_9;
    float VAR_10;
    struct nk_vec2i VAR_11 = VAR_1;

    VAR_9 = FUNC_0(VAR_5, 1);
    VAR_10 = 1.0f/(float)VAR_9;
    for (VAR_8 = 1; VAR_8 <= VAR_9; ++VAR_8) {
        float VAR_12 = VAR_10 * (float)VAR_8;
        float VAR_13 = 1.0f - VAR_12;
        float VAR_14 = VAR_13*VAR_13*VAR_13;
        float VAR_15 = 3*VAR_13*VAR_13*VAR_12;
        float VAR_16 = 3*VAR_13*VAR_12*VAR_12;
        float VAR_17 = VAR_12 * VAR_12 *VAR_12;
        float VAR_18 = VAR_14 * VAR_1 + VAR_15 * VAR_2 + VAR_16 * VAR_3 + VAR_17 * VAR_4;
        float VAR_19 = VAR_14 * VAR_1 + VAR_15 * VAR_2 + VAR_16 * VAR_3 + VAR_17 * VAR_4;
        FUNC_1(VAR_0, VAR_11.x, VAR_11.y,
                (short)VAR_18, (short)VAR_19, VAR_6,VAR_7);
        VAR_11.x = (short)VAR_18; VAR_11.y = (short)VAR_19;
    }
}
