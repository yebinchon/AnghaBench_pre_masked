
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * member_0; } ;
typedef TYPE_3__ softmask_save ;
struct TYPE_13__ {scalar_t__ hidden; } ;
struct TYPE_15__ {int gtop; int dev; TYPE_2__ super; TYPE_5__* gstate; } ;
typedef TYPE_4__ pdf_run_processor ;
struct TYPE_12__ {int color_params; int alpha; } ;
struct TYPE_16__ {TYPE_1__ fill; int ctm; } ;
typedef TYPE_5__ pdf_gstate ;
typedef int fz_shade ;
typedef int fz_rect ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ,int ,int ) ;
 TYPE_5__* FUNC_2 (int *,TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, pdf_run_processor *VAR_1, fz_shade *VAR_2)
{
 pdf_gstate *VAR_3 = VAR_1->gstate + VAR_1->gtop;
 fz_rect VAR_4;
 softmask_save VAR_5 = { ((void*)0) };

 if (VAR_1->super.hidden)
  return;

 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3->ctm);

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4, &VAR_5);



 FUNC_1(VAR_0, VAR_1->dev, VAR_2, VAR_3->ctm, VAR_3->fill.alpha, VAR_3->fill.color_params);

 FUNC_3(VAR_0, VAR_1, &VAR_5);
}
