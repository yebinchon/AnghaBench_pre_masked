
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {float w; float x; float y; } ;
typedef TYPE_1__ pdf_vmtx ;
struct TYPE_20__ {int size; int scale; float rise; float char_space; } ;
typedef TYPE_2__ pdf_text_state ;
struct TYPE_21__ {float char_tx; float char_ty; int cid; int gid; int char_bbox; TYPE_5__* fontdesc; int tm; } ;
typedef TYPE_3__ pdf_text_object_state ;
struct TYPE_22__ {float w; } ;
typedef TYPE_4__ pdf_hmtx ;
struct TYPE_23__ {int wmode; int font; } ;
typedef TYPE_5__ pdf_font_desc ;
struct TYPE_24__ {int a; int d; float f; scalar_t__ e; scalar_t__ c; scalar_t__ b; } ;
typedef TYPE_6__ fz_matrix ;
typedef int fz_context ;


 float FUNC_0 (float) ;
 int FUNC_1 (int *,int ,int,TYPE_6__) ;
 TYPE_6__ FUNC_2 (TYPE_6__,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,TYPE_5__*,int) ;
 TYPE_4__ FUNC_5 (int *,TYPE_5__*,int) ;
 TYPE_1__ FUNC_6 (int *,TYPE_5__*,int) ;

int
FUNC_7(fz_context *VAR_0, pdf_text_object_state *VAR_1, pdf_text_state *VAR_2, pdf_font_desc *VAR_3, int VAR_4, fz_matrix *VAR_5)
{
 fz_matrix VAR_6;

 VAR_6.a = VAR_2->size * VAR_2->scale;
 VAR_6.b = 0;
 VAR_6.c = 0;
 VAR_6.d = VAR_2->size;
 VAR_6.e = 0;
 VAR_6.f = VAR_2->rise;

 if (VAR_3->wmode == 0)
 {
  pdf_hmtx VAR_7 = FUNC_5(VAR_0, VAR_3, VAR_4);
  float VAR_8 = VAR_7.w * 0.001f;
  VAR_1->char_tx = (VAR_8 * VAR_2->size + VAR_2->char_space) * VAR_2->scale;
  VAR_1->char_ty = 0;
 }

 if (VAR_3->wmode == 1)
 {
  pdf_vmtx VAR_9 = FUNC_6(VAR_0, VAR_3, VAR_4);
  float VAR_10 = VAR_9.w * 0.001f;
  VAR_6.e -= VAR_9.x * fabsf(VAR_2->size) * 0.001f;
  VAR_6.f -= VAR_9.y * VAR_2->size * 0.001f;
  VAR_1->char_tx = 0;
  VAR_1->char_ty = VAR_10 * VAR_2->size + VAR_2->char_space;
 }

 *VAR_5 = FUNC_2(VAR_6, VAR_1->tm);

 VAR_1->cid = VAR_4;
 VAR_1->gid = FUNC_4(VAR_0, VAR_3, VAR_4);
 VAR_1->fontdesc = VAR_3;


 VAR_1->char_bbox = FUNC_3(FUNC_1(VAR_0, VAR_3->font, VAR_1->gid, *VAR_5), 1);

 return VAR_1->gid;
}
