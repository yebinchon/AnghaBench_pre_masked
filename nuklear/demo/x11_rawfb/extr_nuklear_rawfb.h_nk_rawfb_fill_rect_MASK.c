
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_context {int dummy; } ;
struct nk_vec2i {short x; short y; } ;
struct nk_color {int dummy; } ;


 int FUNC_0 (struct rawfb_context const*,short const,short const,unsigned int,unsigned int,int,struct nk_color const) ;
 int FUNC_1 (struct rawfb_context const*,struct nk_vec2i*,int,struct nk_color const) ;
 int FUNC_2 (struct rawfb_context const*,short const,short const,short const,short const,int,struct nk_color const) ;

__attribute__((used)) static void
FUNC_3(const struct rawfb_context *VAR_0,
    const short VAR_1, const short VAR_2, const short VAR_3, const short VAR_4,
    const short VAR_5, const struct nk_color VAR_6)
{
    int VAR_7;
    if (VAR_5 == 0) {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
            FUNC_2(VAR_0, VAR_1, VAR_2 + VAR_7, VAR_1 + VAR_3, VAR_2 + VAR_7, 1, VAR_6);
    } else {
        const short VAR_8 = VAR_1 + VAR_5;
        const short VAR_9 = VAR_2 + VAR_5;
        const short VAR_10 = (short)(VAR_3 - 2 * VAR_5);
        const short VAR_11 = (short)(VAR_4 - 2 * VAR_5);

        struct nk_vec2i VAR_12[12];
        VAR_12[0].x = VAR_1;
        VAR_12[0].y = VAR_9;
        VAR_12[1].x = VAR_8;
        VAR_12[1].y = VAR_9;
        VAR_12[2].x = VAR_8;
        VAR_12[2].y = VAR_2;

        VAR_12[3].x = VAR_8 + VAR_10;
        VAR_12[3].y = VAR_2;
        VAR_12[4].x = VAR_8 + VAR_10;
        VAR_12[4].y = VAR_9;
        VAR_12[5].x = VAR_1 + VAR_3;
        VAR_12[5].y = VAR_9;

        VAR_12[6].x = VAR_1 + VAR_3;
        VAR_12[6].y = VAR_9 + VAR_11;
        VAR_12[7].x = VAR_8 + VAR_10;
        VAR_12[7].y = VAR_9 + VAR_11;
        VAR_12[8].x = VAR_8 + VAR_10;
        VAR_12[8].y = VAR_2 + VAR_4;

        VAR_12[9].x = VAR_8;
        VAR_12[9].y = VAR_2 + VAR_4;
        VAR_12[10].x = VAR_8;
        VAR_12[10].y = VAR_9 + VAR_11;
        VAR_12[11].x = VAR_1;
        VAR_12[11].y = VAR_9 + VAR_11;

        FUNC_1(VAR_0, VAR_12, 12, VAR_6);

        FUNC_0(VAR_0, VAR_8 + VAR_10 - VAR_5, VAR_2,
                (unsigned)VAR_5*2, (unsigned)VAR_5*2, 0 , VAR_6);
        FUNC_0(VAR_0, VAR_1, VAR_2,
                (unsigned)VAR_5*2, (unsigned)VAR_5*2, 90 , VAR_6);
        FUNC_0(VAR_0, VAR_1, VAR_9 + VAR_11 - VAR_5,
                (unsigned)VAR_5*2, (unsigned)VAR_5*2, 270 , VAR_6);
        FUNC_0(VAR_0, VAR_8 + VAR_10 - VAR_5, VAR_9 + VAR_11 - VAR_5,
                (unsigned)VAR_5*2, (unsigned)VAR_5*2, 180 , VAR_6);
    }
}
