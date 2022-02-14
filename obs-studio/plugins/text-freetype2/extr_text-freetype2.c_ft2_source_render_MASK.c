
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ft2_source {scalar_t__* text; int draw_effect; int * tex; int * vbuf; scalar_t__ drop_shadow; scalar_t__ outline_text; } ;
typedef int gs_effect_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ft2_source*) ;
 int FUNC_2 (struct ft2_source*) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0, gs_effect_t *VAR_1)
{
 struct ft2_source *VAR_2 = VAR_0;
 if (VAR_2 == ((void*)0))
  return;

 if (VAR_2->tex == ((void*)0) || VAR_2->vbuf == ((void*)0))
  return;
 if (VAR_2->text == ((void*)0) || *VAR_2->text == 0)
  return;

 FUNC_4();
 if (VAR_2->outline_text)
  FUNC_2(VAR_2);
 if (VAR_2->drop_shadow)
  FUNC_1(VAR_2);

 FUNC_3(VAR_2->vbuf, VAR_2->tex, VAR_2->draw_effect,
   (uint32_t)FUNC_5(VAR_2->text) * 6);

 FUNC_0(VAR_1);
}
