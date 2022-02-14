
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tex; int y_render; int x_render; } ;
typedef TYPE_1__ xcb_xcursor_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int,int,int,int) ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,float) ;

void FUNC_11(xcb_xcursor_t *VAR_2)
{
 if (!VAR_2->tex)
  return;

 gs_effect_t *VAR_3 = FUNC_7();
 gs_eparam_t *VAR_4 = FUNC_4(VAR_3, "image");
 FUNC_5(VAR_4, VAR_2->tex);

 FUNC_2();
 FUNC_0(VAR_1, VAR_0);
 FUNC_6(1, 1, 1, 0);

 FUNC_9();
 FUNC_10(VAR_2->x_render, VAR_2->y_render, 0.0f);
 FUNC_3(VAR_2->tex, 0, 0, 0);
 FUNC_8();

 FUNC_6(1, 1, 1, 1);
 FUNC_1();
}
