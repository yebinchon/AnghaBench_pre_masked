
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int gs_texture_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (float,float,float) ;
 int FUNC_8 (int *,char*) ;

void FUNC_9(gs_texture_t *VAR_2, int VAR_3, int VAR_4, uint32_t VAR_5,
       uint32_t VAR_6, bool VAR_7)
{
 gs_effect_t *VAR_8 = FUNC_4();
 bool VAR_9 = (VAR_3 != 0 || VAR_4 != 0);
 gs_eparam_t *VAR_10;

 if (!VAR_8) {
  FUNC_0(VAR_1, "obs_source_draw: no active effect!");
  return;
 }

 if (!FUNC_8(VAR_2, "obs_source_draw"))
  return;

 VAR_10 = FUNC_2(VAR_8, "image");
 FUNC_3(VAR_10, VAR_2);

 if (VAR_9) {
  FUNC_6();
  FUNC_7((float)VAR_3, (float)VAR_4, 0.0f);
 }

 FUNC_1(VAR_2, VAR_7 ? VAR_0 : 0, VAR_5, VAR_6);

 if (VAR_9)
  FUNC_5();
}
