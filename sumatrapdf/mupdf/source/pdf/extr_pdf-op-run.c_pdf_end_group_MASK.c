
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int softmask_save ;
struct TYPE_5__ {int gtop; int dev; TYPE_2__* gstate; } ;
typedef TYPE_1__ pdf_run_processor ;
struct TYPE_6__ {scalar_t__ blendmode; } ;
typedef TYPE_2__ pdf_gstate ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_run_processor *VAR_1, softmask_save *VAR_2)
{
 pdf_gstate *VAR_3 = VAR_1->gstate + VAR_1->gtop;

 if (VAR_3->blendmode)
  FUNC_1(VAR_0, VAR_1->dev);

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
