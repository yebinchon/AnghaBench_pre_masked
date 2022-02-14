
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int gtop; int dev; TYPE_3__* gstate; } ;
typedef TYPE_2__ pdf_run_processor ;
struct TYPE_12__ {scalar_t__ kind; size_t gstate_num; int color_params; int alpha; scalar_t__ shade; scalar_t__ pattern; int v; int colorspace; } ;
struct TYPE_14__ {TYPE_1__ fill; int ctm; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_rect ;
typedef int fz_matrix ;
struct TYPE_15__ {scalar_t__ colorspace; } ;
typedef TYPE_4__ fz_image ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,TYPE_4__*,int ,int ) ;
 int FUNC_1 (int *,int ,TYPE_4__*,int ,int ,int ) ;
 int FUNC_2 (int *,int ,TYPE_4__*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 TYPE_3__* FUNC_5 (int *,TYPE_2__*,scalar_t__,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_4, pdf_run_processor *VAR_5, fz_image *VAR_6, fz_matrix VAR_7, fz_rect VAR_8)
{
 pdf_gstate *VAR_9 = VAR_5->gstate + VAR_5->gtop;

 if (VAR_6->colorspace)
 {
  FUNC_1(VAR_4, VAR_5->dev, VAR_6, VAR_7, VAR_9->fill.alpha, VAR_9->fill.color_params);
 }
 else if (VAR_9->fill.kind == VAR_1)
 {
  FUNC_2(VAR_4, VAR_5->dev, VAR_6, VAR_7, VAR_9->fill.colorspace, VAR_9->fill.v, VAR_9->fill.alpha, VAR_9->fill.color_params);
 }
 else if (VAR_9->fill.kind == VAR_2 && VAR_9->fill.pattern)
 {
  FUNC_0(VAR_4, VAR_5->dev, VAR_6, VAR_7, VAR_8);
  VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_9->fill.pattern, VAR_9->fill.gstate_num, VAR_8, VAR_0);
  FUNC_4(VAR_4, VAR_5->dev);
 }
 else if (VAR_9->fill.kind == VAR_3 && VAR_9->fill.shade)
 {
  FUNC_0(VAR_4, VAR_5->dev, VAR_6, VAR_7, VAR_8);
  FUNC_3(VAR_4, VAR_5->dev, VAR_9->fill.shade, VAR_5->gstate[VAR_9->fill.gstate_num].ctm, VAR_9->fill.alpha, VAR_9->fill.color_params);
  FUNC_4(VAR_4, VAR_5->dev);
 }
}
