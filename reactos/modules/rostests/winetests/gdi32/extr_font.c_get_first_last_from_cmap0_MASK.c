
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* glyph_ids; } ;
typedef TYPE_1__ cmap_format_0 ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(void *VAR_2, DWORD *VAR_3, DWORD *VAR_4)
{
    int VAR_5;
    cmap_format_0 *VAR_6 = (cmap_format_0*)VAR_2;

    *VAR_3 = 256;

    for(VAR_5 = 0; VAR_5 < 256; VAR_5++)
    {
        if(VAR_6->glyph_ids[VAR_5] == 0) continue;
        *VAR_4 = VAR_5;
        if(*VAR_3 == 256) *VAR_3 = VAR_5;
    }
    if(*VAR_3 == 256) return VAR_0;
    return VAR_1;
}
