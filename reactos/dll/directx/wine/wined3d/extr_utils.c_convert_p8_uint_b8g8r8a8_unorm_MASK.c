
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_palette {TYPE_1__* colors; } ;
struct wined3d_color_key {int dummy; } ;
struct TYPE_2__ {int rgbRed; int rgbGreen; int rgbBlue; } ;
typedef int DWORD ;
typedef size_t BYTE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(const BYTE *VAR_0, unsigned int VAR_1,
        BYTE *VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
        const struct wined3d_palette *VAR_6, const struct wined3d_color_key *VAR_7)
{
    const BYTE *VAR_8;
    unsigned int VAR_9, VAR_10;
    DWORD *VAR_11;

    if (!VAR_6)
    {

        FUNC_0("P8 surface loaded without a palette.\n");

        for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10)
        {
            FUNC_1(&VAR_2[VAR_3 * VAR_10], 0, VAR_4 * 4);
        }

        return;
    }

    for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10)
    {
        VAR_8 = &VAR_0[VAR_1 * VAR_10];
        VAR_11 = (DWORD *)&VAR_2[VAR_3 * VAR_10];
        for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
        {
            BYTE VAR_12 = VAR_8[VAR_9];
            VAR_11[VAR_9] = 0xff000000
                    | (VAR_6->colors[VAR_12].rgbRed << 16)
                    | (VAR_6->colors[VAR_12].rgbGreen << 8)
                    | VAR_6->colors[VAR_12].rgbBlue;
        }
    }
}
