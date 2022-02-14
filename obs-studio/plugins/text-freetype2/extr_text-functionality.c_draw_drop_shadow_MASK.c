
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_vb_data {int* colors; } ;
struct ft2_source {int* colorbuf; int text; int draw_effect; int tex; int vbuf; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (float,float,float) ;
 struct gs_vb_data* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct ft2_source *VAR_0)
{

 uint32_t *VAR_1;

 struct gs_vb_data *VAR_2 = FUNC_5(VAR_0->vbuf);

 if (!VAR_0->text)
  return;

 VAR_1 = VAR_2->colors;
 VAR_2->colors = VAR_0->colorbuf;

 FUNC_3();
 FUNC_4(4.0f, 4.0f, 0.0f);
 FUNC_0(VAR_0->vbuf, VAR_0->tex, VAR_0->draw_effect,
   (uint32_t)FUNC_6(VAR_0->text) * 6);
 FUNC_1();
 FUNC_2();

 VAR_2->colors = VAR_1;
}
