
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ text_as_text; int * out; } ;
typedef TYPE_1__ svg_device ;
struct TYPE_11__ {struct TYPE_11__* next; } ;
typedef TYPE_2__ fz_text_span ;
struct TYPE_12__ {TYPE_2__* head; } ;
typedef TYPE_3__ fz_text ;
typedef int fz_stroke_state ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
typedef int font ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int *,float const*,float,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ,TYPE_2__*) ;
 int * FUNC_3 (int *,int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *,TYPE_2__*,int const*,int ,int *,float const*,float,int *,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4,
 fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, fz_color_params VAR_8)
{
 svg_device *VAR_9 = (svg_device*)VAR_1;
 fz_output *VAR_10 = VAR_9->out;
 font *VAR_11;
 fz_text_span *VAR_12;

 if (VAR_9->text_as_text)
 {
  for (VAR_12 = VAR_2->head; VAR_12; VAR_12 = VAR_12->next)
  {
   FUNC_0(VAR_0, VAR_10, "<text");
   FUNC_1(VAR_0, VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
   FUNC_2(VAR_0, VAR_9, VAR_4, VAR_12);
  }
 }
 else
 {
  for (VAR_12 = VAR_2->head; VAR_12; VAR_12 = VAR_12->next)
  {
   VAR_11 = FUNC_3(VAR_0, VAR_1, VAR_12, VAR_4);
   FUNC_4(VAR_0, VAR_1, VAR_12, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_11, VAR_8);
  }
 }
}
