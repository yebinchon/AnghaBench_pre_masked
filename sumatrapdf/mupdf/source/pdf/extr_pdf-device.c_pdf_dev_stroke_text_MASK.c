
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_device ;
struct TYPE_5__ {int trm; int font; struct TYPE_5__* next; } ;
typedef TYPE_1__ fz_text_span ;
struct TYPE_6__ {TYPE_1__* head; } ;
typedef TYPE_2__ fz_text ;
typedef int fz_stroke_state ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,int *,float,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,float const*,int,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4,
  fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, fz_color_params VAR_8)
{
 pdf_device *VAR_9 = (pdf_device*)VAR_1;
 fz_text_span *VAR_10;

 FUNC_3(VAR_0, VAR_9, VAR_4);
 FUNC_0(VAR_0, VAR_9, VAR_7, 1);
 FUNC_2(VAR_0, VAR_9, VAR_5, VAR_6, 1, VAR_8);

 for (VAR_10 = VAR_2->head; VAR_10; VAR_10 = VAR_10->next)
 {
  FUNC_1(VAR_0, VAR_9, 1);
  FUNC_4(VAR_0, VAR_9, VAR_10->font, VAR_10->trm);
  FUNC_5(VAR_0, VAR_9, VAR_10);
 }
}
