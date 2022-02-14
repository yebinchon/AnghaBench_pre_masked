
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int dummy; } ;
struct pixel_format_desc {int* bits; scalar_t__ type; int* shift; int bytes_per_pixel; } ;
typedef unsigned int DWORD ;
typedef unsigned int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (float const) ;
 int FUNC_1 (unsigned int*,int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct pixel_format_desc *VAR_2, const struct vec4 *VAR_3, BYTE *VAR_4)
{
    DWORD VAR_5, VAR_6;
    unsigned int VAR_7, VAR_8;

    FUNC_1(VAR_4, 0, VAR_2->bytes_per_pixel);

    for (VAR_7 = 0; VAR_7 < 4; ++VAR_7)
    {
        static const unsigned int VAR_9[4] = {3, 0, 1, 2};
        const float VAR_10 = *((const float *)VAR_3 + VAR_9[VAR_7]);

        if (!VAR_2->bits[VAR_7])
            continue;

        VAR_6 = ~0u >> (32 - VAR_2->bits[VAR_7]);

        if (VAR_2->type == VAR_1)
            VAR_5 = FUNC_0(VAR_10);
        else if (VAR_2->type == VAR_0)
            VAR_5 = *(DWORD *)&VAR_10;
        else
            VAR_5 = (DWORD)(VAR_10 * ((1 << VAR_2->bits[VAR_7]) - 1) + 0.5f);

        for (VAR_8 = VAR_2->shift[VAR_7] / 8 * 8; VAR_8 < VAR_2->shift[VAR_7] + VAR_2->bits[VAR_7]; VAR_8 += 8)
        {
            BYTE VAR_11, VAR_12;

            if (VAR_2->shift[VAR_7] > VAR_8)
            {
                VAR_11 = VAR_6 << (VAR_2->shift[VAR_7] - VAR_8);
                VAR_12 = (VAR_5 << (VAR_2->shift[VAR_7] - VAR_8)) & VAR_11;
            }
            else
            {
                VAR_11 = VAR_6 >> (VAR_8 - VAR_2->shift[VAR_7]);
                VAR_12 = (VAR_5 >> (VAR_8 - VAR_2->shift[VAR_7])) & VAR_11;
            }
            VAR_4[VAR_8 / 8] |= VAR_12;
        }
    }
}
