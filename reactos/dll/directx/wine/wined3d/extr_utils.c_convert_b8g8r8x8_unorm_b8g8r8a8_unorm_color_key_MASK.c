
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_palette {int dummy; } ;
struct wined3d_color_key {int dummy; } ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (struct wined3d_color_key const*,int) ;

__attribute__((used)) static void FUNC_1(const BYTE *VAR_0, unsigned int VAR_1,
        BYTE *VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
        const struct wined3d_palette *VAR_6, const struct wined3d_color_key *VAR_7)
{
    const DWORD *VAR_8;
    unsigned int VAR_9, VAR_10;
    DWORD *VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10)
    {
        VAR_8 = (DWORD *)&VAR_0[VAR_1 * VAR_10];
        VAR_11 = (DWORD *)&VAR_2[VAR_3 * VAR_10];
        for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
        {
            DWORD VAR_12 = VAR_8[VAR_9];
            if (FUNC_0(VAR_7, VAR_12))
                VAR_11[VAR_9] = VAR_12 & ~0xff000000;
            else
                VAR_11[VAR_9] = VAR_12 | 0xff000000;
        }
    }
}
