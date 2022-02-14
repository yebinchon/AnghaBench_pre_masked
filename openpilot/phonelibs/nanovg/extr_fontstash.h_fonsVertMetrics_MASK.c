
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t nfonts; TYPE_2__** fonts; } ;
struct TYPE_8__ {short ascender; short descender; short lineh; int * data; } ;
struct TYPE_7__ {size_t font; float size; } ;
typedef TYPE_1__ FONSstate ;
typedef TYPE_2__ FONSfont ;
typedef TYPE_3__ FONScontext ;


 TYPE_1__* FUNC_0 (TYPE_3__*) ;

void FUNC_1(FONScontext* VAR_0,
      float* VAR_1, float* VAR_2, float* VAR_3)
{
 FONSfont* VAR_4;
 FONSstate* VAR_5 = FUNC_0(VAR_0);
 short VAR_6;

 if (VAR_0 == ((void*)0)) return;
 if (VAR_5->font < 0 || VAR_5->font >= VAR_0->nfonts) return;
 VAR_4 = VAR_0->fonts[VAR_5->font];
 VAR_6 = (short)(VAR_5->size*10.0f);
 if (VAR_4->data == ((void*)0)) return;

 if (VAR_1)
  *VAR_1 = VAR_4->ascender*VAR_6/10.0f;
 if (VAR_2)
  *VAR_2 = VAR_4->descender*VAR_6/10.0f;
 if (VAR_3)
  *VAR_3 = VAR_4->lineh*VAR_6/10.0f;
}
