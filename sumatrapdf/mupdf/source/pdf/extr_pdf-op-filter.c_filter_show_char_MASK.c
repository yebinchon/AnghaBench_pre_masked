
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {size_t cid_to_ucs_len; int* cid_to_ucs; scalar_t__ wmode; int font; scalar_t__ to_unicode; } ;
typedef TYPE_3__ pdf_font_desc ;
struct TYPE_21__ {int gid; } ;
struct TYPE_18__ {int (* text_filter ) (int *,int ,int*,int,int ,int ,TYPE_5__) ;TYPE_8__ tos; int opaque; TYPE_6__* gstate; } ;
typedef TYPE_4__ pdf_filter_processor ;
struct TYPE_19__ {void* y1; scalar_t__ y0; void* x1; scalar_t__ x0; } ;
typedef TYPE_5__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_16__ {int ctm; } ;
struct TYPE_14__ {TYPE_3__* font; } ;
struct TYPE_15__ {int ctm; TYPE_10__ text; } ;
struct TYPE_20__ {TYPE_2__ sent; TYPE_1__ pending; } ;
typedef TYPE_6__ filter_gstate ;


 int VAR_0 ;
 void* FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int *,int ) ;
 TYPE_5__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__,int,int*) ;
 int FUNC_6 (int *,TYPE_8__*,TYPE_10__*,TYPE_3__*,int,int *) ;
 int FUNC_7 (int *,TYPE_8__*) ;
 int FUNC_8 (int *,int ,int*,int,int ,int ,TYPE_5__) ;

__attribute__((used)) static int
FUNC_9(fz_context *VAR_1, pdf_filter_processor *VAR_2, int VAR_3, int *VAR_4)
{
 filter_gstate *VAR_5 = VAR_2->gstate;
 pdf_font_desc *VAR_6 = VAR_5->pending.text.font;
 fz_matrix VAR_7;
 int VAR_8[8];
 int VAR_9;
 int VAR_10 = 0;

 (void)FUNC_6(VAR_1, &VAR_2->tos, &VAR_5->pending.text, VAR_6, VAR_3, &VAR_7);

 VAR_9 = 0;
 if (VAR_6->to_unicode)
  VAR_9 = FUNC_5(VAR_6->to_unicode, VAR_3, VAR_8);
 if (VAR_9 == 0 && (size_t)VAR_3 < VAR_6->cid_to_ucs_len)
 {
  VAR_8[0] = VAR_6->cid_to_ucs[VAR_3];
  VAR_9 = 1;
 }
 if (VAR_9 == 0 || (VAR_9 == 1 && VAR_8[0] == 0))
 {
  VAR_8[0] = VAR_0;
  VAR_9 = 1;
 }
 *VAR_4 = VAR_8[0];

 if (VAR_2->text_filter)
 {
  fz_matrix VAR_11 = FUNC_1(VAR_5->pending.ctm, VAR_5->sent.ctm);
  fz_rect VAR_12;

  if (VAR_6->wmode == 0)
  {
   VAR_12.x0 = 0;
   VAR_12.y0 = FUNC_4(VAR_1, VAR_6->font);
   VAR_12.x1 = FUNC_0(VAR_1, VAR_6->font, VAR_2->tos.gid, 0);
   VAR_12.y1 = FUNC_2(VAR_1, VAR_6->font);
  }
  else
  {
   fz_rect VAR_13 = FUNC_3(VAR_1, VAR_6->font);
   VAR_12.x0 = VAR_13.x0;
   VAR_12.x1 = VAR_13.x1;
   VAR_12.y0 = 0;
   VAR_12.y1 = FUNC_0(VAR_1, VAR_6->font, VAR_2->tos.gid, 1);
  }

  VAR_10 = VAR_2->text_filter(VAR_1, VAR_2->opaque, VAR_8, VAR_9, VAR_7, VAR_11, VAR_12);
 }

 FUNC_7(VAR_1, &VAR_2->tos);

 return VAR_10;
}
