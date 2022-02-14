
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int max_glyphs; int* advances; scalar_t__ glyphs; int * offsets; int * vis_attrs; } ;
typedef int SCRIPT_VISATTR ;
typedef TYPE_1__ ME_Run ;
typedef int GOFFSET ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_2( ME_Run *VAR_2 )
{
    FUNC_1( VAR_2->glyphs );
    VAR_2->glyphs = FUNC_0( VAR_2->max_glyphs * (sizeof(WORD) + sizeof(SCRIPT_VISATTR) + sizeof(int) + sizeof(GOFFSET)) );
    if (!VAR_2->glyphs) return VAR_0;

    VAR_2->vis_attrs = (SCRIPT_VISATTR*)((char*)VAR_2->glyphs + VAR_2->max_glyphs * sizeof(WORD));
    VAR_2->advances = (int*)((char*)VAR_2->glyphs + VAR_2->max_glyphs * (sizeof(WORD) + sizeof(SCRIPT_VISATTR)));
    VAR_2->offsets = (GOFFSET*)((char*)VAR_2->glyphs + VAR_2->max_glyphs * (sizeof(WORD) + sizeof(SCRIPT_VISATTR) + sizeof(int)));

    return VAR_1;
}
