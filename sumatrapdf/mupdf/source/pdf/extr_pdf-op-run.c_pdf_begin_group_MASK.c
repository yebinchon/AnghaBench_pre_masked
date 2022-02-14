
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int softmask_save ;
struct TYPE_7__ {int gtop; TYPE_2__* gstate; int dev; } ;
typedef TYPE_1__ pdf_run_processor ;
struct TYPE_8__ {scalar_t__ blendmode; } ;
typedef TYPE_2__ pdf_gstate ;
typedef int fz_rect ;
typedef int fz_context ;


 TYPE_2__* FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,int ,int ,int *,int ,int ,scalar_t__,int) ;

__attribute__((used)) static pdf_gstate *
FUNC_2(fz_context *VAR_0, pdf_run_processor *VAR_1, fz_rect VAR_2, softmask_save *VAR_3)
{
 pdf_gstate *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);

 if (VAR_4->blendmode)
  FUNC_1(VAR_0, VAR_1->dev, VAR_2, ((void*)0), 0, 0, VAR_4->blendmode, 1);

 return VAR_1->gstate + VAR_1->gtop;
}
