
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nglyphs; int cglyphs; int * glyphs; } ;
typedef int FONSglyph ;
typedef TYPE_1__ FONSfont ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static FONSglyph* FUNC_1(FONSfont* VAR_0)
{
 if (VAR_0->nglyphs+1 > VAR_0->cglyphs) {
  VAR_0->cglyphs = VAR_0->cglyphs == 0 ? 8 : VAR_0->cglyphs * 2;
  VAR_0->glyphs = (FONSglyph*)FUNC_0(VAR_0->glyphs, sizeof(FONSglyph) * VAR_0->cglyphs);
  if (VAR_0->glyphs == ((void*)0)) return ((void*)0);
 }
 VAR_0->nglyphs++;
 return &VAR_0->glyphs[VAR_0->nglyphs-1];
}
