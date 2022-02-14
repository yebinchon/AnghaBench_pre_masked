
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nfonts; int cfonts; TYPE_1__** fonts; } ;
struct TYPE_7__ {int cglyphs; scalar_t__ nglyphs; int * glyphs; } ;
typedef int FONSglyph ;
typedef TYPE_1__ FONSfont ;
typedef TYPE_2__ FONScontext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int) ;

__attribute__((used)) static int FUNC_4(FONScontext* VAR_2)
{
 FONSfont* VAR_3 = ((void*)0);
 if (VAR_2->nfonts+1 > VAR_2->cfonts) {
  VAR_2->cfonts = VAR_2->cfonts == 0 ? 8 : VAR_2->cfonts * 2;
  VAR_2->fonts = (FONSfont**)FUNC_3(VAR_2->fonts, sizeof(FONSfont*) * VAR_2->cfonts);
  if (VAR_2->fonts == ((void*)0))
   return -1;
 }
 VAR_3 = (FONSfont*)FUNC_1(sizeof(FONSfont));
 if (VAR_3 == ((void*)0)) goto error;
 FUNC_2(VAR_3, 0, sizeof(FONSfont));

 VAR_3->glyphs = (FONSglyph*)FUNC_1(sizeof(FONSglyph) * VAR_0);
 if (VAR_3->glyphs == ((void*)0)) goto error;
 VAR_3->cglyphs = VAR_0;
 VAR_3->nglyphs = 0;

 VAR_2->fonts[VAR_2->nfonts++] = VAR_3;
 return VAR_2->nfonts-1;

error:
 FUNC_0(VAR_3);

 return VAR_1;
}
