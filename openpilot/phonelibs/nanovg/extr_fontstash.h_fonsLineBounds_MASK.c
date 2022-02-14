
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct TYPE_13__ {size_t nfonts; TYPE_1__ params; TYPE_3__** fonts; } ;
struct TYPE_12__ {float ascender; short lineh; float descender; int * data; } ;
struct TYPE_11__ {size_t font; float size; int align; } ;
typedef TYPE_2__ FONSstate ;
typedef TYPE_3__ FONSfont ;
typedef TYPE_4__ FONScontext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_3__*,int ,short) ;

void FUNC_2(FONScontext* VAR_1, float VAR_2, float* VAR_3, float* VAR_4)
{
 FONSfont* VAR_5;
 FONSstate* VAR_6 = FUNC_0(VAR_1);
 short VAR_7;

 if (VAR_1 == ((void*)0)) return;
 if (VAR_6->font < 0 || VAR_6->font >= VAR_1->nfonts) return;
 VAR_5 = VAR_1->fonts[VAR_6->font];
 VAR_7 = (short)(VAR_6->size*10.0f);
 if (VAR_5->data == ((void*)0)) return;

 VAR_2 += FUNC_1(VAR_1, VAR_5, VAR_6->align, VAR_7);

 if (VAR_1->params.flags & VAR_0) {
  *VAR_3 = VAR_2 - VAR_5->ascender * (float)VAR_7/10.0f;
  *VAR_4 = *VAR_3 + VAR_5->lineh*VAR_7/10.0f;
 } else {
  *VAR_4 = VAR_2 + VAR_5->descender * (float)VAR_7/10.0f;
  *VAR_3 = *VAR_4 - VAR_5->lineh*VAR_7/10.0f;
 }
}
