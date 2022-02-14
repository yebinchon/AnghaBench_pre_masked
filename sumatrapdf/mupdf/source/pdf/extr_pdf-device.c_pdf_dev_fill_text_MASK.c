
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
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,int *,float,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int *,float const*,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, fz_matrix VAR_3,
  fz_colorspace *VAR_4, const float *VAR_5, float VAR_6, fz_color_params VAR_7)
{
 pdf_device *VAR_8 = (pdf_device*)VAR_1;
 fz_text_span *VAR_9;

 FUNC_3(VAR_0, VAR_8, VAR_3);
 FUNC_0(VAR_0, VAR_8, VAR_6, 0);
 FUNC_2(VAR_0, VAR_8, VAR_4, VAR_5, 0, VAR_7);

 for (VAR_9 = VAR_2->head; VAR_9; VAR_9 = VAR_9->next)
 {
  FUNC_1(VAR_0, VAR_8, 0);
  FUNC_4(VAR_0, VAR_8, VAR_9->font, VAR_9->trm);
  FUNC_5(VAR_0, VAR_8, VAR_9);
 }
}
