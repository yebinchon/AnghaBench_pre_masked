
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_capture {scalar_t__ compatibility; int * texture; } ;
typedef int gs_texture_t ;
typedef int gs_technique_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dc_capture *VAR_1, gs_effect_t *VAR_2)
{
 gs_texture_t *VAR_3 = VAR_1->texture;
 gs_technique_t *VAR_4 = FUNC_2(VAR_2, "Draw");
 gs_eparam_t *VAR_5 = FUNC_1(VAR_2, "image");
 size_t VAR_6;

 FUNC_3(VAR_5, VAR_3);

 VAR_6 = FUNC_4(VAR_4);
 for (size_t VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_5(VAR_4, VAR_7)) {
   if (VAR_1->compatibility)
    FUNC_0(VAR_3, VAR_0, 0, 0);
   else
    FUNC_0(VAR_3, 0, 0, 0);

   FUNC_7(VAR_4);
  }
 }
 FUNC_6(VAR_4);
}
