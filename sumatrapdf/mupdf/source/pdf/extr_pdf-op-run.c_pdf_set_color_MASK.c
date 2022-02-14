
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gtop; int gparent; TYPE_3__* gstate; } ;
typedef TYPE_1__ pdf_run_processor ;
struct TYPE_8__ {int kind; int gstate_num; int v; int colorspace; } ;
typedef TYPE_2__ pdf_material ;
struct TYPE_9__ {TYPE_2__ stroke; TYPE_2__ fill; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;


 int VAR_0 ;


 int FUNC_0 (int *,int ,float*,int ) ;
 int FUNC_1 (int *,char*) ;
 TYPE_3__* FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, pdf_run_processor *VAR_2, int VAR_3, float *VAR_4)
{
 pdf_gstate *VAR_5 = VAR_2->gstate + VAR_2->gtop;
 pdf_material *VAR_6;

 VAR_5 = FUNC_2(VAR_1, VAR_2);

 VAR_6 = VAR_3 == VAR_0 ? &VAR_5->fill : &VAR_5->stroke;

 switch (VAR_6->kind)
 {
 case 128:
 case 129:
  FUNC_0(VAR_1, VAR_6->colorspace, VAR_4, VAR_6->v);
  break;
 default:
  FUNC_1(VAR_1, "color incompatible with material");
 }

 VAR_6->gstate_num = VAR_2->gparent;
}
