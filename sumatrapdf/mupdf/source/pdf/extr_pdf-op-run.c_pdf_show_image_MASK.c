
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int * member_0; } ;
typedef TYPE_2__ softmask_save ;
struct TYPE_15__ {scalar_t__ hidden; } ;
struct TYPE_17__ {int gtop; int dev; TYPE_1__ super; TYPE_4__* gstate; } ;
typedef TYPE_3__ pdf_run_processor ;
struct TYPE_18__ {scalar_t__ blendmode; int ctm; } ;
typedef TYPE_4__ pdf_gstate ;
typedef int fz_rect ;
typedef int fz_matrix ;
struct TYPE_19__ {scalar_t__ mask; } ;
typedef TYPE_5__ fz_image ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,int ,int *,int ,int ,scalar_t__,int) ;
 int FUNC_1 (int *,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_7 (int *,TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_3__*,TYPE_5__*,int ,int ) ;

__attribute__((used)) static void
FUNC_10(fz_context *VAR_1, pdf_run_processor *VAR_2, fz_image *VAR_3)
{
 pdf_gstate *VAR_4 = VAR_2->gstate + VAR_2->gtop;
 fz_matrix VAR_5;
 fz_rect VAR_6;

 if (VAR_2->super.hidden)
  return;


 VAR_5 = FUNC_4(FUNC_5(VAR_4->ctm, 0, 1), 1, -1);

 VAR_6 = FUNC_6(VAR_0, VAR_5);

 if (VAR_3->mask && VAR_4->blendmode)
 {

  FUNC_0(VAR_1, VAR_2->dev, VAR_6, ((void*)0), 0, 0, VAR_4->blendmode, 1);
  FUNC_1(VAR_1, VAR_2->dev, VAR_3->mask, VAR_5, VAR_6);
  FUNC_9(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
  FUNC_3(VAR_1, VAR_2->dev);
  FUNC_2(VAR_1, VAR_2->dev);
 }
 else if (VAR_3->mask)
 {
  FUNC_1(VAR_1, VAR_2->dev, VAR_3->mask, VAR_5, VAR_6);
  FUNC_9(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
  FUNC_3(VAR_1, VAR_2->dev);
 }
 else
 {
  softmask_save VAR_7 = { ((void*)0) };
  VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_6, &VAR_7);
  FUNC_9(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
  FUNC_8(VAR_1, VAR_2, &VAR_7);
 }
}
