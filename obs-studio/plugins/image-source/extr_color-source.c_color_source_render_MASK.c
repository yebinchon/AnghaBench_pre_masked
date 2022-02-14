
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int dummy; } ;
struct color_source {int height; int width; int color; } ;
typedef int gs_technique_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct vec4*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (struct vec4*,int ) ;

__attribute__((used)) static void FUNC_11(void *VAR_1, gs_effect_t *VAR_2)
{
 FUNC_0(VAR_2);

 struct color_source *VAR_3 = VAR_1;

 gs_effect_t *VAR_4 = FUNC_9(VAR_0);
 gs_eparam_t *VAR_5 = FUNC_2(VAR_4, "color");
 gs_technique_t *VAR_6 = FUNC_3(VAR_4, "Solid");

 struct vec4 VAR_7;
 FUNC_10(&VAR_7, VAR_3->color);
 FUNC_4(VAR_5, &VAR_7);

 FUNC_5(VAR_6);
 FUNC_6(VAR_6, 0);

 FUNC_1(0, 0, VAR_3->width, VAR_3->height);

 FUNC_8(VAR_6);
 FUNC_7(VAR_6);
}
