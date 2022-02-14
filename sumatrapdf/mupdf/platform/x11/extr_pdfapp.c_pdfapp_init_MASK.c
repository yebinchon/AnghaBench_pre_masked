
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float duration; int type; } ;
struct TYPE_6__ {int scrw; int scrh; int resolution; int layout_use_doc_css; int tint_white; int useicc; int aalevel; scalar_t__ useseparations; int colorspace; TYPE_1__ transition; int * layout_css; int layout_em; int layout_h; int layout_w; int * ctx; } ;
typedef TYPE_2__ pdfapp_t ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

void FUNC_3(fz_context *VAR_4, pdfapp_t *VAR_5)
{
 FUNC_2(VAR_5, 0, sizeof(pdfapp_t));
 VAR_5->scrw = 640;
 VAR_5->scrh = 480;
 VAR_5->resolution = 72;
 VAR_5->ctx = VAR_4;

 VAR_5->layout_w = VAR_2;
 VAR_5->layout_h = VAR_1;
 VAR_5->layout_em = VAR_0;
 VAR_5->layout_css = ((void*)0);
 VAR_5->layout_use_doc_css = 1;

 VAR_5->transition.duration = 0.25f;
 VAR_5->transition.type = VAR_3;



 VAR_5->colorspace = FUNC_1(VAR_4);

 VAR_5->tint_white = 0xFFFAF0;

 VAR_5->useicc = 1;
 VAR_5->useseparations = 0;
 VAR_5->aalevel = 8;
}
