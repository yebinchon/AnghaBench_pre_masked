
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dims; scalar_t__ psobjs; TYPE_4__* psobj; scalar_t__ forms; TYPE_4__* form; scalar_t__ patterns; TYPE_4__* pattern; scalar_t__ shadings; TYPE_4__* shading; scalar_t__ images; TYPE_4__* image; scalar_t__ fonts; TYPE_4__* font; TYPE_4__* dim; } ;
typedef TYPE_3__ globals ;
typedef int fz_context ;
struct TYPE_6__ {TYPE_4__* bbox; } ;
struct TYPE_7__ {TYPE_1__ dim; } ;
struct TYPE_9__ {TYPE_2__ u; } ;


 int FUNC_0 (int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, globals *VAR_1)
{
 int VAR_2;

 if (VAR_1->dim)
 {
  for (VAR_2 = 0; VAR_2 < VAR_1->dims; VAR_2++)
   FUNC_0(VAR_0, VAR_1->dim[VAR_2].u.dim.bbox);
  FUNC_0(VAR_0, VAR_1->dim);
  VAR_1->dim = ((void*)0);
  VAR_1->dims = 0;
 }

 if (VAR_1->font)
 {
  FUNC_0(VAR_0, VAR_1->font);
  VAR_1->font = ((void*)0);
  VAR_1->fonts = 0;
 }

 if (VAR_1->image)
 {
  FUNC_0(VAR_0, VAR_1->image);
  VAR_1->image = ((void*)0);
  VAR_1->images = 0;
 }

 if (VAR_1->shading)
 {
  FUNC_0(VAR_0, VAR_1->shading);
  VAR_1->shading = ((void*)0);
  VAR_1->shadings = 0;
 }

 if (VAR_1->pattern)
 {
  FUNC_0(VAR_0, VAR_1->pattern);
  VAR_1->pattern = ((void*)0);
  VAR_1->patterns = 0;
 }

 if (VAR_1->form)
 {
  FUNC_0(VAR_0, VAR_1->form);
  VAR_1->form = ((void*)0);
  VAR_1->forms = 0;
 }

 if (VAR_1->psobj)
 {
  FUNC_0(VAR_0, VAR_1->psobj);
  VAR_1->psobj = ((void*)0);
  VAR_1->psobjs = 0;
 }
}
