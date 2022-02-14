
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int dummy; } ;
struct pixel_format_desc {int* bits; int* shift; scalar_t__ type; } ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 (int) ;
 int FUNC_1 (int*,int const*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(const struct pixel_format_desc *VAR_2, const BYTE *VAR_3, struct vec4 *VAR_4)
{
    DWORD VAR_5, VAR_6;
    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < 4; ++VAR_7)
    {
        static const unsigned int VAR_8[4] = {3, 0, 1, 2};
        float *VAR_9 = (float *)VAR_4 + VAR_8[VAR_7];

        if (VAR_2->bits[VAR_7])
        {
            VAR_5 = ~0u >> (32 - VAR_2->bits[VAR_7]);

            FUNC_1(&VAR_6, VAR_3 + VAR_2->shift[VAR_7] / 8,
                    FUNC_2(sizeof(DWORD), (VAR_2->shift[VAR_7] % 8 + VAR_2->bits[VAR_7] + 7) / 8));

            if (VAR_2->type == VAR_1)
                *VAR_9 = FUNC_0(VAR_6);
            else if (VAR_2->type == VAR_0)
                *VAR_9 = *(float *)&VAR_6;
            else
                *VAR_9 = (float)((VAR_6 >> VAR_2->shift[VAR_7] % 8) & VAR_5) / VAR_5;
        }
        else
            *VAR_9 = 1.0f;
    }
}
