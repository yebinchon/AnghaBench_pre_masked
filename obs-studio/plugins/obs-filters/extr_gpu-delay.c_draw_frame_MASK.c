
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpu_delay_filter_data {int cy; int cx; int frames; } ;
struct frame {int render; } ;
typedef int gs_texture_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;
typedef int frame ;


 int VAR_0 ;
 int FUNC_0 (int *,struct frame*,int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct gpu_delay_filter_data *VAR_1)
{
 struct frame VAR_2;
 FUNC_0(&VAR_1->frames, &VAR_2, sizeof(VAR_2));

 gs_effect_t *VAR_3 = FUNC_6(VAR_0);
 gs_texture_t *VAR_4 = FUNC_5(VAR_2.render);
 if (VAR_4) {
  gs_eparam_t *VAR_5 =
   FUNC_2(VAR_3, "image");
  FUNC_4(VAR_5, VAR_4);

  while (FUNC_3(VAR_3, "Draw"))
   FUNC_1(VAR_4, 0, VAR_1->cx, VAR_1->cy);
 }
}
