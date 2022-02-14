
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gtop; TYPE_3__* gstate; } ;
typedef TYPE_1__ pdf_run_processor ;
struct TYPE_8__ {int* v; int colorspace; int kind; } ;
typedef TYPE_2__ pdf_material ;
struct TYPE_9__ {TYPE_2__ stroke; TYPE_2__ fill; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 TYPE_3__* FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_2, pdf_run_processor *VAR_3, int VAR_4, fz_colorspace *VAR_5)
{
 pdf_gstate *VAR_6 = VAR_3->gstate + VAR_3->gtop;
 pdf_material *VAR_7;
 int VAR_8 = FUNC_0(VAR_2, VAR_5);

 VAR_6 = FUNC_3(VAR_2, VAR_3);

 VAR_7 = VAR_4 == VAR_0 ? &VAR_6->fill : &VAR_6->stroke;

 FUNC_1(VAR_2, VAR_7->colorspace);

 VAR_7->kind = VAR_1;
 VAR_7->colorspace = FUNC_2(VAR_2, VAR_5);

 VAR_7->v[0] = 0;
 VAR_7->v[1] = 0;
 VAR_7->v[2] = 0;
 VAR_7->v[3] = 1;

 if (FUNC_4(VAR_2, VAR_5))
 {
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   VAR_7->v[VAR_9] = 1.0f;
 }
}
