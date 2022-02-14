
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int gs_vertbuffer_t ;
typedef int gs_texture_t ;
typedef int gs_technique_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(gs_vertbuffer_t *VAR_1, gs_texture_t *VAR_2,
       gs_effect_t *VAR_3, uint32_t VAR_4)
{
 gs_texture_t *VAR_5 = VAR_2;
 gs_technique_t *VAR_6 = FUNC_2(VAR_3, "Draw");
 gs_eparam_t *VAR_7 = FUNC_1(VAR_3, "image");
 size_t VAR_8;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return;

 FUNC_10(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(((void*)0));

 VAR_8 = FUNC_6(VAR_6);

 for (size_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (FUNC_7(VAR_6, VAR_9)) {
   FUNC_3(VAR_7, VAR_5);

   FUNC_0(VAR_0, 0, VAR_4);

   FUNC_9(VAR_6);
  }
 }

 FUNC_8(VAR_6);
}
