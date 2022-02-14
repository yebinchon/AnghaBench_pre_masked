
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int char_ty; int char_tx; int tm; int char_bbox; int text_bbox; } ;
typedef TYPE_1__ pdf_text_object_state ;
typedef int fz_context ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(fz_context *VAR_0, pdf_text_object_state *VAR_1)
{
 VAR_1->text_bbox = FUNC_1(VAR_1->text_bbox, VAR_1->char_bbox);
 VAR_1->tm = FUNC_0(VAR_1->tm, VAR_1->char_tx, VAR_1->char_ty);
}
