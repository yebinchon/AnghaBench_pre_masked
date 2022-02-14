
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_2__ {scalar_t__ const target; int ascending; } ;
typedef TYPE_1__ FindGlyph_struct ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void* VAR_1)
{
    const FindGlyph_struct *VAR_2 = (FindGlyph_struct*)VAR_0;
    const WORD *VAR_3= (WORD*)VAR_1;
    int VAR_4 = 0;

    if ( VAR_2->target > *VAR_3)
        VAR_4 = 1;
    else if (VAR_2->target < *VAR_3)
        VAR_4 = -1;

    if (!VAR_2->ascending)
        VAR_4 *= -1;
    return VAR_4;
}
