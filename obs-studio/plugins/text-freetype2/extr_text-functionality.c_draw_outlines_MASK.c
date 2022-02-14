
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_vb_data {int* colors; } ;
struct ft2_source {int* colorbuf; int text; int draw_effect; int tex; int vbuf; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,float) ;
 struct gs_vb_data* FUNC_5 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct ft2_source *VAR_1)
{

 uint32_t *VAR_2;

 struct gs_vb_data *VAR_3 = FUNC_5(VAR_1->vbuf);

 if (!VAR_1->text)
  return;

 VAR_2 = VAR_3->colors;
 VAR_3->colors = VAR_1->colorbuf;

 FUNC_3();
 for (int32_t VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_4(VAR_0[VAR_4 * 2], VAR_0[(VAR_4 * 2) + 1],
          0.0f);
  FUNC_0(VAR_1->vbuf, VAR_1->tex,
    VAR_1->draw_effect,
    (uint32_t)FUNC_6(VAR_1->text) * 6);
 }
 FUNC_1();
 FUNC_2();

 VAR_3->colors = VAR_2;
}
