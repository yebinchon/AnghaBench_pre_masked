
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * page_resources; int * softmask; int ctm; } ;
typedef TYPE_1__ softmask_save ;
struct TYPE_7__ {int gtop; int dev; TYPE_3__* gstate; } ;
typedef TYPE_2__ pdf_run_processor ;
struct TYPE_8__ {int softmask_ctm; int * softmask_resources; int * softmask; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_run_processor *VAR_1, softmask_save *VAR_2)
{
 pdf_gstate *VAR_3 = VAR_1->gstate + VAR_1->gtop;

 if (VAR_2->softmask == ((void*)0))
  return;

 VAR_3->softmask = VAR_2->softmask;
 VAR_3->softmask_resources = VAR_2->page_resources;
 VAR_3->softmask_ctm = VAR_2->ctm;
 VAR_2->softmask = ((void*)0);
 VAR_2->page_resources = ((void*)0);

 FUNC_0(VAR_0, VAR_1->dev);
}
