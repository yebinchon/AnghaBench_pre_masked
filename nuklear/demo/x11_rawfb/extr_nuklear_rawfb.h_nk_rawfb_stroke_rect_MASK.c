
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_context {int dummy; } ;
struct nk_color {int dummy; } ;


 int FUNC_0 (struct rawfb_context const*,short const,short const,unsigned int,unsigned int,int,short const,struct nk_color const) ;
 int FUNC_1 (struct rawfb_context const*,short const,short const,short const,short const,short const,struct nk_color const) ;

__attribute__((used)) static void
FUNC_2(const struct rawfb_context *VAR_0,
    const short VAR_1, const short VAR_2, const short VAR_3, const short VAR_4,
    const short VAR_5, const short VAR_6, const struct nk_color VAR_7)
{
    if (VAR_5 == 0) {
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_1 + VAR_3, VAR_2, VAR_6, VAR_7);
        FUNC_1(VAR_0, VAR_1, VAR_2 + VAR_4, VAR_1 + VAR_3, VAR_2 + VAR_4, VAR_6, VAR_7);
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_1, VAR_2 + VAR_4, VAR_6, VAR_7);
        FUNC_1(VAR_0, VAR_1 + VAR_3, VAR_2, VAR_1 + VAR_3, VAR_2 + VAR_4, VAR_6, VAR_7);
    } else {
        const short VAR_8 = VAR_1 + VAR_5;
        const short VAR_9 = VAR_2 + VAR_5;
        const short VAR_10 = (short)(VAR_3 - 2 * VAR_5);
        const short VAR_11 = (short)(VAR_4 - 2 * VAR_5);

        FUNC_1(VAR_0, VAR_8, VAR_2, VAR_8 + VAR_10, VAR_2, VAR_6, VAR_7);
        FUNC_1(VAR_0, VAR_1 + VAR_3, VAR_9, VAR_1 + VAR_3, VAR_9 + VAR_11, VAR_6, VAR_7);
        FUNC_1(VAR_0, VAR_8, VAR_2 + VAR_4, VAR_8 + VAR_10, VAR_2 + VAR_4, VAR_6, VAR_7);
        FUNC_1(VAR_0, VAR_1, VAR_9, VAR_1, VAR_9 + VAR_11, VAR_6, VAR_7);

        FUNC_0(VAR_0, VAR_8 + VAR_10 - VAR_5, VAR_2,
                (unsigned)VAR_5*2, (unsigned)VAR_5*2, 0 , VAR_6, VAR_7);
        FUNC_0(VAR_0, VAR_1, VAR_2,
                (unsigned)VAR_5*2, (unsigned)VAR_5*2, 90 , VAR_6, VAR_7);
        FUNC_0(VAR_0, VAR_1, VAR_9 + VAR_11 - VAR_5,
                (unsigned)VAR_5*2, (unsigned)VAR_5*2, 270 , VAR_6, VAR_7);
        FUNC_0(VAR_0, VAR_8 + VAR_10 - VAR_5, VAR_9 + VAR_11 - VAR_5,
                (unsigned)VAR_5*2, (unsigned)VAR_5*2, 180 , VAR_6, VAR_7);
    }
}
