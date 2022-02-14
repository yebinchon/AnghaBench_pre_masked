
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vec4 {float x; float y; float z; float w; } ;
typedef size_t ULONG ;
struct TYPE_3__ {float peRed; float peGreen; float peBlue; float peFlags; } ;
typedef TYPE_1__ PALETTEENTRY ;



__attribute__((used)) static void FUNC_0(const struct vec4 *VAR_0, struct vec4 *VAR_1, const PALETTEENTRY *VAR_2)
{
    ULONG VAR_3 = (ULONG)(VAR_0->x * 255.0f + 0.5f);

    VAR_1->x = VAR_2[VAR_3].peRed / 255.0f;
    VAR_1->y = VAR_2[VAR_3].peGreen / 255.0f;
    VAR_1->z = VAR_2[VAR_3].peBlue / 255.0f;
    VAR_1->w = VAR_2[VAR_3].peFlags / 255.0f;
}
