
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_run_processor ;
typedef int pdf_processor ;
typedef int pdf_obj ;
struct TYPE_5__ {TYPE_3__* stroke_state; } ;
typedef TYPE_1__ pdf_gstate ;
typedef int fz_context ;
struct TYPE_6__ {int dash_len; float dash_phase; int * dash_list; } ;


 TYPE_3__* FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_0, pdf_processor *VAR_1, pdf_obj *VAR_2, float VAR_3)
{
 pdf_run_processor *VAR_4 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_5 = FUNC_3(VAR_0, VAR_4);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_0, VAR_2);
 VAR_5->stroke_state = FUNC_0(VAR_0, VAR_5->stroke_state, VAR_6);
 VAR_5->stroke_state->dash_len = VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_5->stroke_state->dash_list[VAR_7] = FUNC_1(VAR_0, VAR_2, VAR_7);
 VAR_5->stroke_state->dash_phase = VAR_3;
}
