
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_1__ fz_text_span ;
struct TYPE_11__ {TYPE_1__* head; } ;
typedef TYPE_2__ fz_text ;
typedef int fz_stroke_state ;
struct TYPE_12__ {int new_obj; TYPE_2__ const* lasttext; int color; } ;
typedef TYPE_3__ fz_stext_device ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,TYPE_2__ const*) ;
 TYPE_2__ const* FUNC_1 (int *,TYPE_2__ const*) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_3 (int *,int *,float const*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4,
 fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, fz_color_params VAR_8)
{
 fz_stext_device *VAR_9 = (fz_stext_device*)VAR_1;
 fz_text_span *VAR_10;
 if (VAR_2 == VAR_9->lasttext)
  return;
 VAR_9->color = FUNC_3(VAR_0, VAR_5, VAR_6);
 VAR_9->new_obj = 1;
 for (VAR_10 = VAR_2->head; VAR_10; VAR_10 = VAR_10->next)
  FUNC_2(VAR_0, VAR_9, VAR_10, VAR_4);
 FUNC_0(VAR_0, VAR_9->lasttext);
 VAR_9->lasttext = FUNC_1(VAR_0, VAR_2);
}
